//----------------------------------------------------------
// 文件名:      SystemMailModule.h
// 内  容:      邮件系统
// 说  明:
// 创建人:		  
// 修改人:        ( )
// 创建日期:    
//    :       
//----------------------------------------------------------

#include "SystemMailModule.h"

#include "../Define/PubDefine.h"
#include "../Define/ClientCustomDefine.h"
#include "../Define/CommandDefine.h"
#include "../Define/ServerCustomDefine.h"
#include "../Define/SystemMailDefine.h"
#include "FsGame/CommonModule/LogModule.h"
#include "FsGame/CommonModule/LuaExtModule.h"
#include "FsGame/CommonModule/ContainerModule.h"
#include "FsGame/SystemFunctionModule/CapitalModule.h"
#include "FsGame/SystemFunctionModule/RewardModule.h"
#include "FsGame/ItemModule/ToolItem/ToolItemModule.h"
#include "FsGame/Define/ToolBoxSysInfoDefine.h"
#include "utils/custom_func.h"
#include "utils/util_func.h"
#include "utils/string_util.h"
#include "utils/flexstring.h"
#include "utils/XmlFile.h"
#include <time.h>
#include "Define/LevelDefine.h"
#include "CommonModule/LevelModule.h"
#include "CommonModule/ReLoadConfigModule.h"
//#include "CommonModule/GmccModule.h"
#include "Define/GmccDefine.h"
#include "Define/Fields.h"
#include "Define/InternalFields.h"
#include "CommonModule/FunctionEventModule.h"


#define MAIL_NOT_READ   0   // 邮件未读
#define MAIL_READ       1   // 邮件已读

#define MAIL_ATTACHMENT_NOT_PICKED  0   // 附件未提取
#define MAIL_ATTACHMENT_PICKED      1   // 附件已提取
std::wstring SystemMailModule::m_domainName;

// 原型：int nx_clear_all_mail(object self)
// 功能：清空邮件
int nx_clear_all_mail(void* state)
{
	IKernel* pKernel = LuaExtModule::GetKernel(state);

	// 检查参数数量
	CHECK_ARG_NUM(state, nx_clear_all_mail, 1);
	// 检查参数类型
	CHECK_ARG_OBJECT(state, nx_clear_all_mail, 1);

	// 获取参数
	PERSISTID self = pKernel->LuaToObject(state, 1);

	pKernel->LuaPushBool(state, SystemMailModule::ClearAllMail(pKernel, self));
	return 1;
}

// 原型：int nx_send_test_mail(object self)
// 功能：发送测试邮件
int nx_send_test_mail(void* state)
{
	IKernel* pKernel = LuaExtModule::GetKernel(state);

	// 检查参数数量
	CHECK_ARG_NUM(state, nx_send_test_mail, 2);
	// 检查参数类型
	CHECK_ARG_OBJECT(state, nx_send_test_mail, 1);
	CHECK_ARG_STRING(state, nx_send_test_mail, 2);
	
	// 获取参数
	PERSISTID self = pKernel->LuaToObject(state, 1);
	std::string mailID = pKernel->LuaToString(state, 2);
	pKernel->LuaPushInt(state, SystemMailModule::SendTestMail(pKernel, self,mailID));
	return 1;
}
int nx_reload_system_mail_config(void* state)
{
	IKernel* pKernel = LuaExtModule::GetKernel(state);

	SystemMailModule::LoadResource(pKernel);

	return 1;

}

// 原型：int nx_send_test_mail(object self)
// 功能：发送测试邮件
int nx_send_gobal_mail(void* state)
{
	IKernel* pKernel = LuaExtModule::GetKernel(state);

	// 检查参数数量
	CHECK_ARG_NUM(state, nx_send_gobal_mail, 2);
	// 检查参数类型
	CHECK_ARG_STRING(state, nx_send_gobal_mail, 1);
	CHECK_ARG_INT(state, nx_send_gobal_mail, 2);

	// 获取参数
	std::string mailID = pKernel->LuaToString(state, 1);
	int nNation = pKernel->LuaToInt(state, 2);
	//SystemMailModule::SystemGlobalMail(pKernel, mailID.c_str(), CVarList(), nNation);
	return 1;
}
//---------------------------------------------------------------------------------

const int SYSTEM_MAIL_HEART_BEAT_INTERVAL = 3000;
const int CHECK_MAIL_HEART_BEAT_INTERVAL  = 5*60*1000;  // 5 min

void SystemMailConfig::LoadConfig(IKernel* pKernel)
{
	std::string strEventPath = pKernel->GetResourcePath();
	strEventPath += "ini/SocialSystem/Mail/mail_time.xml";

	CXmlFile xml(strEventPath.c_str());
	if (!xml.LoadFromFile())
	{
		//extend_warning(LOG_WARNING,"SystemMailConfig::LoadConfig load file [%s] failed!",strEventPath.c_str());
		return;
	}

	CVarList section_list;
	xml.GetSectionList(section_list);

	const int section_count = static_cast<int>(section_list.GetCount());
	if(section_count >= 0)
	{
		std::string section = section_list.StringVal(0);

		// 有附件的邮件寿命，默认7天
		mail_appendix_life = xml.ReadInteger(section.c_str(), "mail_appendix_life_day", 7*24*60*60);
		
		// 没有附件的邮件寿命，默认3天
		mail_no_appendix_life = xml.ReadInteger(section.c_str(), "mail_no_appendix_life_day", 3*24*60*60);
	}
}



CapitalModule* SystemMailModule::m_CapitalModuel = NULL;
ConfigMailMap SystemMailModule::m_ConfigMails;
SystemMailConfig SystemMailModule::m_SysMailConfig;
std::map<int, std::vector<AutoSendMail>> SystemMailModule::m_autoSendMailConfig;
//初始化
bool SystemMailModule::Init(IKernel* pKernel)
{
	m_CapitalModuel = (CapitalModule*)pKernel->GetLogicModule("CapitalModule");

    Assert(m_CapitalModuel != NULL);

	//注册玩家回调
	pKernel->AddEventCallback("player", "OnRecover", SystemMailModule::OnRecover, -2);
	pKernel->AddEventCallback("player", "OnReady",	SystemMailModule::OnReady, -2);
	
	pKernel->AddEventCallback("player", "OnQueryLetter",	SystemMailModule::OnQueryLetter);
	pKernel->AddEventCallback("player", "OnLookLetter",		SystemMailModule::OnLookLetter);
	
	pKernel->AddIntCommandHook("player", COMMAND_QUERY_LETTER, SystemMailModule::OnQuerySelfLetter);

	pKernel->AddIntCustomHook("player", CLIENT_CUSTOMMSG_SYSTEM_MAIL, SystemMailModule::OnCustomClientMessage);

	//pKernel->AddIntCommandHook("player", COMMAND_MAIL_MODULE, SystemMailModule::OnCommandGuild);

// 	pKernel->AddIntCommandHook("player", COMMAND_TASK_ACTION_MSG, SystemMailModule::OnCommandTask, 0);
// 	pKernel->AddIntCommandHook("player", COMMAND_LEVELUP_CHANGE, SystemMailModule::OnCommandLevel);

	DECL_HEARTBEAT(SystemMailModule::H_Check_Letter);

    // 不定时删除，当邮箱满时选择删除最老的邮件
	DECL_HEARTBEAT(SystemMailModule::HB_TimeTick);

	LoadResource(pKernel);

	DECL_LUA_EXT(nx_send_test_mail);
	DECL_LUA_EXT(nx_clear_all_mail);
	DECL_LUA_EXT(nx_reload_system_mail_config);
	DECL_LUA_EXT(nx_send_gobal_mail);
	RELOAD_CONFIG_REG("MailConfig", LoadResource);
    return true;
}

//释放
bool SystemMailModule::Shut(IKernel* pKernel)
{
    m_ConfigMails.clear();
    return true;
}


const std::wstring & SystemMailModule::GetDomainName(IKernel * pKernel)
{
	if (m_domainName.empty())
	{
		wchar_t wstr[256];
		int server_id = pKernel->GetServerId();
		SWPRINTF_S(wstr, L"Domain_Mail_%d", server_id);
		m_domainName = wstr;
	}

	return m_domainName;
}

void SystemMailModule::LoadResource(IKernel* pKernel)
{
	// 邮件系统配置
	m_SysMailConfig.LoadConfig(pKernel);
	 LoadAutoSendMailCfg(pKernel);
	// 预设邮件配置
	std::string mail_config_file = pKernel->GetResourcePath() + std::string("ini/SocialSystem/Mail/mail_config.xml");
	CXmlFile xml(mail_config_file.c_str());
	if (!xml.LoadFromFile())
	{
		//extend_warning(LOG_ERROR, "[SystemMailModule::LoadResource] No found file %s", mail_config_file.c_str());
		return;
	}

	CVarList section_list;
	xml.GetSectionList(section_list);

	const int section_count = static_cast<int>(section_list.GetCount());
	
	LoopBeginCheck(a)
	for (int section_index =0; section_index<section_count; section_index++)
	{
	    LoopDoCheck(a)
	    
		std::string mailID = section_list.StringVal(section_index);

		std::string  sender = xml.ReadString(mailID.c_str(), "Sender", "");
		std::string   title = xml.ReadString(mailID.c_str(), "Title", "");
		std::string content = xml.ReadString(mailID.c_str(), "Content", "");
		std::string   addin = xml.ReadString(mailID.c_str(), "Addin", "");

		ConfigMailItem item;
		item.sender = StringUtil::StringAsWideStr(sender.c_str());
		item.mail_title = StringUtil::StringAsWideStr(title.c_str());
		item.mail_content = StringUtil::StringAsWideStr(content.c_str());
		item.items = addin;

        m_ConfigMails.insert(std::make_pair(mailID, item));
	}

	// 加入一个空的配置，用于应付未配置情况
	ConfigMailItem item_NULL;
	item_NULL.sender = L"NOT Config";
	item_NULL.mail_title = L"NOT Config";
	item_NULL.mail_content = L"NOT Config";
	item_NULL.items = "";
	m_ConfigMails.insert(std::make_pair("", item_NULL));
}

bool SystemMailModule::LoadAutoSendMailCfg(IKernel *pKernel)
{
	m_autoSendMailConfig.clear();


	std::string pathName = pKernel->GetResourcePath();
	//配置文件路径
	pathName += "ini/SocialSystem/Mail/auto_send_mail.xml";

	CXmlFile xmlfile(pathName.c_str());
	if (!xmlfile.LoadFromFile())
	{
		std::string err_msg = pathName;
		err_msg.append(" does not exists.");
		::extend_warning(LOG_ERROR, err_msg.c_str());
		return false;
	}

	const size_t iSectionCount = xmlfile.GetSectionCount();
	std::string strSectionName = "";

	LoopBeginCheck(a)
		for (unsigned i = 0; i < iSectionCount; i++)
		{
			LoopDoCheck(a)
				strSectionName = xmlfile.GetSectionByIndex(i);
			if (StringUtil::CharIsNull(strSectionName.c_str()))
			{
				continue;
			}
			AutoSendMail info;
			int type = xmlfile.ReadInteger(strSectionName.c_str(), "Type", 0);
			info.m_conditionValue = xmlfile.ReadInteger(strSectionName.c_str(), "ConditionValue", 0);
			info.m_mailName = xmlfile.ReadString(strSectionName.c_str(), "MailName","");
			m_autoSendMailConfig[type].push_back(info);
		}

	return true;
}

bool SystemMailModule::SendGlobalMail(IKernel* pKernel,
										const wchar_t* pwszSender,
										const wchar_t* pwszTitle, 
										const wchar_t* pwszContent, 
										const char* pszAttachment, 
										int nFrom, 
										int64_t nOriMailId /*= 0*/,
										int64_t nCreateTime/* = 0*/,
										int64_t nExperidTime/* = 0*/)
{
	if (nOriMailId == 0)
	{
		nOriMailId = util_get_utc_time();
	}

	if (NULL == pwszSender) pwszSender = L"";
	if (NULL == pwszTitle) pwszTitle = L"";
	if (NULL == pwszContent) pwszContent = L"";
	if (NULL == pszAttachment) pszAttachment = "";

	if (0 == nCreateTime)
	{
		nCreateTime = util_get_utc_time();
	}

	if (nExperidTime == 0)
	{
		nExperidTime = nCreateTime + 604800;	// 默认为创建时间+七天
	}

	::extend_warning(LOG_INFO, "send global mail(sender:%s title:%s content:%s attachment:%s from:%d id:%lld).",
						StringUtil::WideStrAsString(pwszSender).c_str(),
						StringUtil::WideStrAsString(pwszTitle).c_str(),
						StringUtil::WideStrAsString(pwszContent).c_str(),
						pszAttachment, nFrom, nOriMailId );

// 	CVarList msg;
// 	std::wstring wstr = GmccModule::GetDomainName(pKernel);
// 	msg << PUBSPACE_DOMAIN << wstr.c_str() << SP_DOMAIN_MSG_ADD_GLOBAL_MAIL
// 											<< nOriMailId 
// 											<< nFrom 
// 											<< pwszSender
// 											<< pwszTitle
// 											<< pwszContent
// 											<< pszAttachment
// 											<< nCreateTime
// 											<< nExperidTime;
//	return	pKernel->SendPublicMessage(msg);
	return false;
}

void SystemMailModule::RecvGlobalMail(IKernel* pKernel, const PERSISTID& player)
{
	const wchar_t* pszName = pKernel->QueryWideStr(player, FIELD_PROP_NAME);
	int64_t nRoleCreateTime = pKernel->QueryInt64(player, FIELD_PROP_ROLE_CREATE_TIME);
	if (StringUtil::CharIsNull(pszName) || nRoleCreateTime == 0)
	{
		::extend_warning(LOG_ERROR, "recv global mail failed( not is player or create time is zero)" );
		return;
	}

// 	const std::wstring wsName = GmccModule::GetDomainName(pKernel);
// 	IPubSpace* pPubSpace = pKernel->GetPubSpace(PUBSPACE_DOMAIN);
// 	Assert(NULL != pPubSpace);
// 	if (NULL == pPubSpace)
// 	{
// 		return;
// 	}
// 
// 	IPubData * pPubData = pPubSpace->GetPubData(wsName.c_str());
// 	Assert(NULL != pPubData);
// 	if (pPubData == NULL)
// 	{
// 		return;
// 	}
// 
// 	IRecord* pMailRec = pPubData->GetRecord( PUB_GLOBAMAIL_REC );
// 	Assert(NULL != pMailRec);
// 	if (NULL == pMailRec)
// 	{
// 		return;
// 	}
// 
// 	int nRows = pMailRec->GetRows();
// 	if (nRows <= 0) return;
// 
// 	int nLastGlobalId = pKernel->QueryInt(player, FIELD_PROP_GLOBAL_MAIL_ID);
// 	int nIndex = nRows - 1;
// 	LoopBeginCheck(a);
// 	for (; nIndex >= 0; --nIndex)
// 	{
// 		LoopDoCheck(a);
// 		int nMailId = pMailRec->QueryInt(nIndex, EM_PUB_COL_GLOBAL_MAIL_ID);
// 		if (nLastGlobalId >= nMailId)
// 		{
// 			break;
// 		}
// 	}
// 	++nIndex;
// 
// 	int64_t nNow = util_get_utc_time();
// 	// 发送邮件
// 	LoopBeginCheck(b);
// 	for (; nIndex < nRows; ++nIndex)
// 	{
// 		LoopDoCheck(b);
// 		int64_t nCreateTime = pMailRec->QueryInt64(nIndex, EM_PUB_COL_GLOBAL_MAIL_CTIME);
// 		int64_t nEndTime = pMailRec->QueryInt64(nIndex, EM_PUB_COL_GLOBAL_MAIL_ETIME);
// 
// 		// 邮件是否过期
// 		if (nEndTime > nNow)
// 		{
// 			// 发送时间在创角之后
// 			if (nCreateTime > nRoleCreateTime)
// 			{
// 				const wchar_t* pwszSend = pMailRec->QueryWideStr(nIndex, EM_PUB_COL_GLOBAL_MAIL_SENDER);
// 				const wchar_t* pwszTitle = pMailRec->QueryWideStr(nIndex, EM_PUB_COL_GLOBAL_MAIL_TITLE);
// 				const wchar_t* pwszContent = pMailRec->QueryWideStr(nIndex, EM_PUB_COL_GLOBAL_MAIL_CONTENT);
// 				const char* pszAttach = pMailRec->QueryString(nIndex, EM_PUB_COL_GLOBAL_MAIL_ATTACHEMENT);
// 				std::string strAttach = pszAttach;
// 				int nFromId = pMailRec->QueryInt(nIndex, EM_PUB_COL_GLOBAL_MAIL_FROM);
// 				if (!SendMailToPlayer(pKernel, pwszSend, pszName, pwszTitle, pwszContent, strAttach.c_str(), (EmFunctionEventId) nFromId))
// 				{
// 					::extend_warning(LOG_WARNING, "recv global mail failed(uid:%s mailid:%d)",
// 						pKernel->QueryString(player, FIELD_PROP_UID),
// 						pMailRec->QueryInt(nIndex, EM_PUB_COL_GLOBAL_MAIL_ID));
// 					break;
// 				}
// 			}
// 		}
// 
// 		nLastGlobalId = pMailRec->QueryInt(nIndex, EM_PUB_COL_GLOBAL_MAIL_ID);
// 	}
// 	pKernel->SetInt(player, FIELD_PROP_GLOBAL_MAIL_ID, nLastGlobalId);
}

// int SystemMailModule::OnCommandTask(IKernel* pKernel, const PERSISTID& self, const PERSISTID& sender, const IVarList& args)
// {
// 	if (pKernel == NULL){
// 		return 0;
// 	}
// 	if (args.GetCount() < 3){
// 		return 0;
// 	}
// 	int taskState = args.IntVal(1);
// 	if (taskState != QUEST_PROGRESS_ACCEPT){
// 		return 0;
// 	}
// 
// 	int taskID = args.IntVal(2);
// 	auto it = m_autoSendMailConfig.find(AUTO_SEND_MAIL_BY_TASK);
// 	if (it == m_autoSendMailConfig.end()){
// 		return 0;
// 	}
// 
// 	for (auto its : it->second)
// 	{
// 		if (its.m_conditionValue == taskID)
// 		{
// 			const ConfigMailItem& mail = GetConfigMail(pKernel, its.m_mailName);
// 			SendMailToPlayer(pKernel, mail.sender.c_str(), pKernel->QueryWideStr(self, "Name"),
// 				mail.mail_title.c_str(), mail.mail_content.c_str(), mail.items);
// 		}
// 	}
// 
// 	return 0;
// 
// }
// 
// int SystemMailModule::OnCommandLevel(IKernel* pKernel, const PERSISTID& self, const PERSISTID& sender, const IVarList& args)
// {
// 
// 	int oldLevel = args.IntVal(1);
// 	int nowLevel = pKernel->QueryInt(self, FIELD_PROP_LEVEL);
// 	auto it = m_autoSendMailConfig.find(AUTO_SEND_MAIL_BY_LEVEL);
// 	if (it == m_autoSendMailConfig.end()){
// 		return 0;
// 	}
// 	const wchar_t* selfName = pKernel->QueryWideStr(self, "Name");
// 
// 	for (int level = oldLevel + 1; level <= nowLevel; level++){
// 		for (auto its : it->second)
// 		{
// 			if (its.m_conditionValue == level)
// 			{
// 				const ConfigMailItem& mail = GetConfigMail(pKernel, its.m_mailName);
// 				SendMailToPlayer(pKernel, mail.sender.c_str(), selfName,
// 					mail.mail_title.c_str(), mail.mail_content.c_str(), mail.items);
// 			}
// 		}
// 	}
// 
// 	return 0;
// 
// }

// void SystemMailModule::SystemGlobalMail(IKernel*pKernel, const char* mailName, const IVarList& mail_param, int nNation, int lifeTime /*=604800 */)
// {
// 		// 根据奖励的名字，获取邮件模板
// 	const ConfigMailItem& mail_template = GetConfigMail(pKernel, mailName);
// 	std::wstring mail_content = mail_template.mail_content;
// 	if (mail_param.GetCount() > 0)
// 	{
// 		mail_content = SystemMailModule::ComposeMailContent(pKernel, mail_template.mail_content.c_str(),
// 			mail_param);
// 	}
// 	const std::wstring wsName = GetDomainName(pKernel);
// 	IPubSpace* pPubSpace = pKernel->GetPubSpace(PUBSPACE_DOMAIN);
// 	Assert(NULL != pPubSpace);
// 	if (NULL == pPubSpace)
// 	{
// 		return ;
// 	}
// 
// 	IPubData * pPubData = pPubSpace->GetPubData(wsName.c_str());
// 	Assert(NULL != pPubData);
// 	if (pPubData == NULL)
// 	{
// 		return ;
// 	}
// 	int globalMailUid = pPubData->QueryAttrInt(GLOBAL_MAIL_UID);
// 	pKernel->CommandByWorld(CVarList() << COMMAND_MAIL_MODULE << S2S_COMMAND_MAIL_ADD_MAIL << mailName << mail_content << globalMailUid+1);
// 
// 
// 	CVarList s2p_msg;
// 	s2p_msg << PUBSPACE_DOMAIN
// 		<< GetDomainName(pKernel).c_str()
// 		<< S2P_DOMAIN_MAIL_ADD_GLOBAL_MAIL
// 		<< mailName
// 		<< time(NULL) + lifeTime
// 		<< mail_content
// 		<< nNation;
// 
// 	pKernel->SendPublicMessage(s2p_msg);
// }
// 
// int SystemMailModule::OnPlayerRecoreGlobaleMail(IKernel*pKernel, const PERSISTID& self)
// {
// 	const wchar_t* pszName = pKernel->QueryWideStr(self, FIELD_PROP_NAME);
// 	int64_t nRoleCreateTime = pKernel->QueryInt64(self, FIELD_PROP_ROLE_CREATE_TIME);
// 	if (StringUtil::CharIsNull(pszName) || nRoleCreateTime == 0)
// 	{
// 		::extend_warning(LOG_ERROR, "recv global mail failed( not is player or create time is zero)");
// 		return 0;
// 	}
// 
// 	const std::wstring wsName = GetDomainName(pKernel);
// 	IPubSpace* pPubSpace = pKernel->GetPubSpace(PUBSPACE_DOMAIN);
// 	if (NULL == pPubSpace)
// 	{
// 		return 0;
// 	}
// 
// 	IPubData * pPubData = pPubSpace->GetPubData(wsName.c_str());
// 	if (pPubData == NULL)
// 	{
// 		return 0;
// 	}
// 
// 	IRecord* pMailRec = pPubData->GetRecord(GLOBAL_MAIL_REC);
// 	
// 	if (NULL == pMailRec)
// 	{
// 		return 0;
// 	}
// 
// 	int nRows = pMailRec->GetRows();
// 	if (nRows <= 0) return 0;
// 
// 	int globalMailUid = pKernel->QueryInt(self, FIELD_PROP_GLOBAL_SYSTEM_UID);
// 	int nIndex = nRows - 1;
// 	LoopBeginCheck(a);
// 	for (; nIndex >= 0; --nIndex)
// 	{
// 		LoopDoCheck(a);
// 		int nMailId = pMailRec->QueryInt(nIndex, DOMAIN_MAIL_REC_MAIL_ID);
// 		if (globalMailUid >= nMailId)
// 		{
// 			break;
// 		}
// 	}
// 	++nIndex;
// 	// 发送邮件
// 	LoopBeginCheck(b);
// 	for (; nIndex < nRows; ++nIndex)
// 	{
// 		LoopDoCheck(b);
// 		int nNationLimit = pMailRec->QueryInt(nIndex, DOMAIN_MAIL_REC_REV_NATION);
// 
// 		const char* mailName = pMailRec->QueryString(nIndex, DOMAIN_MAIL_REC_MAIL_NAME);
// 		const wchar_t* context = pMailRec->QueryWideStr(nIndex, DOMAIN_MAIL_REC_MAIL_CONTEXT);
// 		
// 		const ConfigMailItem& mail_template = GetConfigMail(pKernel, mailName);
// 		std::string strAttach;
// 		const wchar_t* pwszTitle = mail_template.mail_title.c_str();
// 		const wchar_t* pwszSend = mail_template.sender.c_str();
// 		SendMailToPlayer(pKernel, pwszSend, pszName, pwszTitle, context, strAttach.c_str(), (EmFunctionEventId)FUNCTION_EVENT_ID_SYSTEM_MAIL);
// 	}
// 
// 	
// 	int pubglobalMailUid = pPubData->QueryAttrInt(GLOBAL_MAIL_UID);
// 
// 	pKernel->SetInt(self, FIELD_PROP_GLOBAL_SYSTEM_UID, pubglobalMailUid);
// 
// 
// 	return 0;
// }
// 
// int SystemMailModule::OnCommandGuild(IKernel* pKernel, const PERSISTID& self, const PERSISTID& sender, const IVarList& args)
// {
// 	int type = args.IntVal(1);
// 	switch (type)
// 	{
// 		case S2S_COMMAND_MAIL_ADD_MAIL:
// 		{
// 			const char* mailName = args.StringVal(2);
// 			const wchar_t* context = args.WideStrVal(3);
// 			int globalMailUid = args.IntVal(4);
// 			const wchar_t* pszName = pKernel->QueryWideStr(self, FIELD_PROP_NAME);
// 			const ConfigMailItem& mail_template = GetConfigMail(pKernel, mailName);
// 			std::string strAttach;
// 			const wchar_t* pwszTitle = mail_template.mail_title.c_str();
// 			const wchar_t* pwszSend = mail_template.sender.c_str();
// 			SendMailToPlayer(pKernel, pwszSend, pszName, pwszTitle, context, strAttach.c_str(), (EmFunctionEventId)FUNCTION_EVENT_ID_SYSTEM_MAIL);
// 			pKernel->SetInt(self, FIELD_PROP_GLOBAL_SYSTEM_UID, globalMailUid);
// 
// 		
// 		}break;
// 
// 		default:
//			break;
// 	}
// 	
// 
// 	return 0;
// }

// 得到预先配置的邮件
const ConfigMailItem& SystemMailModule::GetConfigMail(IKernel* pKernel, const std::string& mail_id)
{
    static ConfigMailItem item_NULL;
    
    ConfigMailMap::iterator it = m_ConfigMails.find(mail_id);
	if (it == m_ConfigMails.end())
	{
		return item_NULL;
	}
	
	
	return it->second;
}

// 玩家进入游戏
int SystemMailModule::OnRecover(IKernel* pKernel, const PERSISTID& self, const PERSISTID& sender, const IVarList& args)
{ 
	if (!pKernel->FindHeartBeat(self, "SystemMailModule::H_Check_Letter"))
	{
		pKernel->AddHeartBeat(self, "SystemMailModule::H_Check_Letter", SYSTEM_MAIL_HEART_BEAT_INTERVAL);
	}
	
    return 0;
}

//检查信箱的心跳
int SystemMailModule::H_Check_Letter(IKernel* pKernel, const PERSISTID& self, int slice)
{
	//删除心跳
	if (pKernel->FindHeartBeat(self, "SystemMailModule::H_Check_Letter"))
	{
		pKernel->RemoveHeartBeat(self, "SystemMailModule::H_Check_Letter");
	}

	//查询信件数量
	if (!pKernel->QueryLetter(self))
	{
		return 0;
	}
	return 0;
}


// 玩家下线
int SystemMailModule::OnDisconnect(IKernel* pKernel, const PERSISTID& self, const PERSISTID& sender, const IVarList& args)
{
	// 检测员下线需要重新设定
	if (pKernel->FindHeartBeat(self, "SystemMailModule::HB_TimeTick"))
	{
		pKernel->RemoveHeartBeat(self, "SystemMailModule::HB_TimeTick");
	}
    return 0;
}

//玩家准备
int SystemMailModule::OnReady(IKernel* pKernel, const PERSISTID& self, const PERSISTID& sender, const IVarList& args)
{
    if (!pKernel->Exists(self))
    {
        return 0;
    }

	if (!pKernel->FindHeartBeat(self, "SystemMailModule::HB_TimeTick"))
	{
		pKernel->AddHeartBeat(self, "SystemMailModule::HB_TimeTick", CHECK_MAIL_HEART_BEAT_INTERVAL);
	}

    CheckUnreadMail(pKernel, self);

// 	bool bFirst = args.IntVal(0) == 1;
// 	if (bFirst)
// 	{
// 		OnPlayerRecoreGlobaleMail(pKernel,self);
// 	}


    return 0;
}

// 心跳计时器
int SystemMailModule::HB_TimeTick(IKernel* pKernel, const PERSISTID& self, int time)
{
	// 时间戳标志
	time_t cur_time = ::time(NULL);

	if(!pKernel->FindRecord(self, SYSTEM_MAIL_REC))
	{
		return -1;
	}

	LoopBeginCheck(a);
	for (int i = 0; i < pKernel->GetRecordRows(self, SYSTEM_MAIL_REC);)
	{
		LoopDoCheck(a);
		int64_t life_time = pKernel->QueryRecordInt64(self, SYSTEM_MAIL_REC, i, MAIL_REC_COL_LIFE_TIME);
		int64_t post_time = pKernel->QueryRecordInt64(self, SYSTEM_MAIL_REC, i, MAIL_REC_COL_POST_TIME);

		// 邮件过期了
		if (cur_time-post_time>life_time)
		{
			pKernel->RemoveRecordRow(self, SYSTEM_MAIL_REC, i);
		}
		else
		{
			i++;
		}
	}

	return 0;
}

//收到消息查询信件消息
int SystemMailModule::OnQuerySelfLetter(IKernel* pKernel, const PERSISTID& self,const PERSISTID& sender, const IVarList& args)
{
	if (pKernel->FindHeartBeat(self, "SystemMailModule::H_Check_Letter"))
	{
		//如果已经有心跳了则重新计时
		pKernel->RemoveHeartBeat(self, "SystemMailModule::H_Check_Letter");
	}
	pKernel->AddHeartBeat(self, "SystemMailModule::H_Check_Letter", SYSTEM_MAIL_HEART_BEAT_INTERVAL);

	return 0;
}

// 发送系统邮件给某个角色
// source发送者（不同的系统名，可以为空）
// name 接收者名字
// title，content邮件标题及正文
// addin_param附加物品列表格式: 资金名:数量,...;道具ID:道具数量,...
// 例如:  CapitalCopper:100,CapitalGold:50;Item001:10,Equip002:2
bool SystemMailModule::SendMailToPlayer(IKernel* pKernel, const wchar_t* source, const wchar_t* name, 
										const wchar_t* title, const wchar_t* content, const std::string& addin_param,
										EmFunctionEventId nMailFrom /*= FUNCTION_EVENT_ID_SYS*/)
{
	//组合标题和内容，用\b分开
	std::wstring wtitle = title;
	std::wstring wcontent = content;
	wcontent = wtitle + L"\b" + wcontent;

	// 时间戳标志
	time_t cur_t = ::time(NULL);
	std::wstring sTime = util_int64_as_widestr(cur_t);
	
	// 目标uid
	const char* targetuid = pKernel->SeekRoleUid(name);
	if (StringUtil::CharIsNull(targetuid))
	{
		return false;
	}

	// 附件
	std::wstring appendix = util_string_as_widestr(addin_param.c_str());

	// 使用引擎提供的方法发送邮件
	bool bSendSuccess = true;
	if (!pKernel->SystemLetter(source, name, targetuid, nMailFrom, sTime.c_str(), wcontent.c_str(), appendix.c_str()))
	{
		bSendSuccess = false;
		goto LBL_END;
	}

	//通知在线目标玩家查自己的信件
	if (pKernel->GetPlayerScene(name) > 0)
	{
		pKernel->CommandByName(name, CVarList() << COMMAND_QUERY_LETTER);
	}

LBL_END:
	// 有附件才需要记录
	if (addin_param.size() > 0)
	{
		// 记录邮件奖励日志, 以便BUG追踪 [2/15/2017 lihailuo] 
		PERSISTID& player = pKernel->FindPlayer(name);
		if (pKernel->Exists(player))
		{
			std::string temp = addin_param;
			StringUtil::StrReplace(temp, ";", ",");
			RewardModule::AwardEx award;
			if (RewardModule::GenerateAwardData(temp, award))
			{
				LOG_ACT_STATE_TYPE state = bSendSuccess ? LOG_ACT_STATE_SUCCESS : LOG_ACT_STATE_FAIL;
				if (award.items.size() > 0)
				{
					LoopBeginCheck(h);
					for (RewardModule::AwardVec::iterator itr = award.items.begin(); itr != award.items.end(); ++itr)
					{
						LoopDoCheck(h);
						//奖励物品满-转发到邮件日志modify by   (2015-04-23) 装备时nAcount表示品质
						if (ContainerModule::IsNeedSaveItemLog(pKernel, itr->strType.c_str(), itr->nAddVal))
						{
							ItemLog log;
							log.eventID = FUNCTION_EVENT_ID_ITEM_TO_MAIL;
							log.eventType = LOG_ACT_EVENT_GAIN;
							log.itemID = itr->strType.c_str();
							log.itemNum = itr->nAddVal;
							log.state = state;
							LogModule::m_pLogModule->SaveItemLog(pKernel, player, log);
						}
					}
				}

				if (award.capitals.size() > 0)
				{
					LoopBeginCheck(h);
					for (RewardModule::AwardVec::iterator itr = award.capitals.begin(); itr != award.capitals.end(); ++itr)
					{
						LoopDoCheck(h);
						MoneyLog log;
						log.capitalType = CapitalModule::m_pCapitalModule->GetCapitalType(itr->strType);
						log.eventID = FUNCTION_EVENT_ID_ITEM_TO_MAIL;
						log.eventType = LOG_ACT_EVENT_GAIN;
						log.money = itr->nAddVal;
						log.state = state;
						LogModule::m_pLogModule->SaveMoneyLog(pKernel, player, log);
					}
				}
			}
		}
	}

	return bSendSuccess;
}

bool SystemMailModule::SendMailToPlayer(IKernel* pKernel, const char* mailid, const wchar_t* name, 
										const IVarList& param, const std::string& addin_param/* = std::string()*/,
										EmFunctionEventId nMailFrom /*= FUNCTION_EVENT_ID_SYS*/)
{
	Assert(NULL != mailid && NULL != name);

	// 根据奖励的名字，获取邮件模板
	const ConfigMailItem& mail_template = GetConfigMail(pKernel, mailid);

	// 附件留空，因为已经奖励给玩家了
	//std::string attachment;

	// 邮件的内容
	std::wstring mail_content = mail_template.mail_content;
	if (param.GetCount() > 0)
	{
		mail_content = SystemMailModule::ComposeMailContent(pKernel, mail_template.mail_content.c_str(),
			param);
	}

	SendMailToPlayer(pKernel, mail_template.sender.c_str(),
		name,
		mail_template.mail_title.c_str(),
		mail_content.c_str(),
		addin_param, nMailFrom);

	return true;
}

// 发送系统邮件给某个账号
// account 接受邮件的账号
// 其他参数等同于 SendMailToPlayer
bool SystemMailModule::SendMailToAccount(IKernel* pKernel, const wchar_t* source, const char* account, 
										const wchar_t* title, const wchar_t* content, const std::string& addin_param,
										EmFunctionEventId nMailFrom /*= FUNCTION_EVENT_ID_SYS*/)
{
	//组合标题和内容，用\b分开
	std::wstring wtitle = title;
	std::wstring wcontent = content;
	wcontent = wtitle + L"\b" + wcontent;

	// 时间戳标志
	time_t cur_t = ::time(NULL);
	std::wstring sTime = util_int64_as_widestr(cur_t);

	// 附件
	const wchar_t* appendix = util_string_as_widestr(addin_param.c_str()).c_str();

	if (!pKernel->SystemLetterByAccount(source, account, nMailFrom, sTime.c_str(), wcontent.c_str(), appendix))
	{
		return false;
	}

	return true;
}

IRecord *SystemMailModule::GetMailRecord(IKernel* pKernel, const PERSISTID& self)
{
    if (!pKernel->Exists(self))
    {
        return NULL;
    }
    
    IGameObj *player_obj = pKernel->GetGameObj(self);
    if (player_obj == NULL)
    {
        return NULL;
    }
    
    return player_obj->GetRecord(SYSTEM_MAIL_REC);
}

int SystemMailModule::OnQueryLetter(IKernel* pKernel, const PERSISTID& self,const PERSISTID& sender, const IVarList& args)
{
	int total = args.IntVal(0);
	if (total > 0)
	{
		//有信件了，先看下信
		if (!pKernel->LookLetter(self))
		{
			return 0;
		}
	}
	return 0;
}

int SystemMailModule::OnLookLetter(IKernel* pKernel, const PERSISTID& self,const PERSISTID& sender, const IVarList& args)
{
	const wchar_t* source = args.WideStrVal(0);     //发件人
	//const char* uid = args.StringVal(1);            //发件人唯一id
	const wchar_t* time = args.WideStrVal(2);       //时间戳
	int type = args.IntVal(3);                      //信件类型
	const wchar_t* mail_content = args.WideStrVal(4);    //信件内容
	const wchar_t* appendix = args.WideStrVal(5);   //信件附件
	//double send_date = args.DoubleVal(6);           //发送时间
	const char* serial_no = args.StringVal(7);      //信件序列号

	// 邮寄时间
	int64_t post_time = util_widestr_as_int64(time);

	// 标题及内容
	CVarList res;::util_split_wstring(res, mail_content, L"\b");
	std::wstring title   = res.WideStrVal(0);
	std::wstring content = res.WideStrVal(1);

    // 附件提取标记， 如果没有附件, 把此标记设置为已提取
    int appendix_flag = MAIL_FLAG_UNPICKED; 
    
	// 存在时间(有附件)
	int64_t life_time = m_SysMailConfig.mail_appendix_life;

	// 货币及物品
	std::string capitals;
	std::string items;
    std::string propertys;
	ParseAppendix(appendix, capitals, items);
	
	if (capitals.length() ==0 && items.length() == 0)
	{
        life_time = m_SysMailConfig.mail_no_appendix_life;
        appendix_flag = MAIL_FLAG_PICKED;
	}

	if(!pKernel->FindRecord(self, SYSTEM_MAIL_REC))
	{
		return -1;
	}

    IRecord *mailRecord = pKernel->GetRecord(self, SYSTEM_MAIL_REC);
    if (mailRecord == NULL)
    {
        return -1;
    }

    // 如果邮箱满的话删除最老的邮件，不管是否有附件
    int rowCount = mailRecord->GetRows();
    if (rowCount >= SYSTEM_MAIL_MAX)
    {
        mailRecord->RemoveRow(0);
    }

    int new_mail_count = 0;
	int row = mailRecord->FindString(MAIL_REC_COL_SERIAL_NO, serial_no);
	if (row<0)
	{
		CVarList rowVal;
		rowVal<<serial_no<<source<<life_time<<post_time<<type<<title.c_str()<<content.c_str()<<capitals.c_str()<<items.c_str()<<0<<appendix_flag<<propertys.c_str();
		pKernel->AddRecordRowValue(self, SYSTEM_MAIL_REC, -1, rowVal);
	
	    ++new_mail_count;
	}

    if (new_mail_count >0)
    {
        CheckUnreadMail(pKernel, self);
    }

	// 将邮件数据存到表里后，告诉引擎删除掉此信件
	pKernel->RecvLetterBySerial(self, serial_no);
	return 0;
}

// 返回这么多天一共有多少秒
int64_t SystemMailModule::_dayToSeconds(int day)
{
	return day * 24 * 60 * 60;
}

void SystemMailModule::ParseAppendix(const std::wstring& appendix, std::string &capital, std::string &item)
{
    CVarList parsed_list;
    
    size_t max_size = 3; // 最多取几段数据
    std::wstring delimiter = L";";
    size_t start = 0;
    size_t pos = 0;
    
    LoopBeginCheck(b)
    while (true)
    {
        LoopDoCheck(b)
        
        pos = appendix.find(delimiter, start);
        
        // 到达尾部
        if (pos == std::wstring::npos)
        {
            if (start != appendix.length())
            {
                parsed_list << util_trim_wstring(appendix.substr(start)).c_str();
            }
            
            break;
        }
        else
        {
            parsed_list << util_trim_wstring(appendix.substr(start, pos - start)).c_str();
            start = pos + delimiter.size();
        }
        
        if (parsed_list.GetCount() >= max_size)
        {
            break;
        }
    }
    
    if (parsed_list.GetCount() > 0)
    {
        capital = util_widestr_as_string(parsed_list.WideStrVal(0)).c_str();
    }
    
    if (parsed_list.GetCount() > 1)
    {
        item = util_widestr_as_string(parsed_list.WideStrVal(1)).c_str();
    }
}

// 客户端消息处理函数
int SystemMailModule::OnCustomClientMessage(IKernel* pKernel, const PERSISTID& self,
											const PERSISTID& sender, const IVarList& args)
{
	int msg = args.IntVal(1);
	switch (msg)
	{
	case MAIL_SUB_MSG_MAIL_COUNT:
	    OnCustomMailCount(pKernel, self, sender, args);
        break;
    case MAIL_SUB_MSG_RETRIEVE:
        OnCustomRetrieve(pKernel, self, sender, args);
        break;
    case MAIL_SUB_MSG_DELETE:
        OnCustomDeleteMail(pKernel, self, sender, args);
        break;
    case MAIL_SUB_MSG_DELETE_ALL:
        OnCustomDeleteAll(pKernel, self, sender, args);
        break;
    case MAIL_SUB_MSG_PICK:
        OnCustomPickMail(pKernel, self, sender, args);
        break;
    case MAIL_SUB_MSG_PICK_ALL:
        OnCustomPickAll(pKernel, self, sender, args);
        break;
	case MAIL_SUB_MSG_READ:
		OnCustomReadMail(pKernel, self, sender, args);
		break;
	default:
		break;
	}

	return 0;
}

// 邮件数量
int SystemMailModule::OnCustomMailCount(IKernel* pKernel, const PERSISTID& self,
                               const PERSISTID& sender, const IVarList& args)
{
    // args 的格式:
    //
    //      [msg_id][sub_msg_id]
    //
    //  回应消息:
    //      [msg_id][sub_msg_id][int(未读数量)][邮件总数]
    
    IRecord *mail_rec = GetMailRecord(pKernel, self);
    if (mail_rec == NULL)
    {
        return 0;
    }
    
    int unread_count = 0;
    
    int row_count = mail_rec->GetRows();
    
    LoopBeginCheck(c)
    for (int i=0; i<row_count; ++i)
    {
        LoopDoCheck(c)
        
        int read_flag = mail_rec->QueryInt(i, MAIL_REC_COL_READ_FLAG);
        if (read_flag == MAIL_FLAG_UNREAD)
        {
            ++unread_count;
        }
    }

    CVarList response_msg;
    response_msg << SERVER_CUSTOMMSG_SYSTEM_MAIL;
    response_msg << MAIL_SUB_MSG_MAIL_COUNT;
    response_msg << unread_count;
    response_msg << row_count;

    pKernel->Custom(self, response_msg);
    
    return 0;
}

// 查询邮件列表
int SystemMailModule::OnCustomRetrieve(IKernel* pKernel, const PERSISTID& self,
                                       const PERSISTID& sender, const IVarList& args)
{
    // args 的格式:
    //
    //      [msg_id][sub_msg_id][start_row][count]
    //
    //  回应消息:
    //      [msg_id][sub_msg_id][count][field_per_mail][mail 1]...[mail_n]
    
    IRecord *mail_rec = GetMailRecord(pKernel, self);
    if (mail_rec == NULL)
    {
        return 0;
    }
    
    int start_row = args.IntVal(2);
    int count = args.IntVal(3);
    
    int mail_count = mail_rec->GetRows();
    
    if (start_row < 1 || start_row > mail_count)
    {
        return 0;
    }
    
    if (count > mail_count)
    {
        count = mail_count;
    }
    
    // 邮件的最大索引号
    int mail_max_index = mail_count - 1;    
    int start_index = start_row - 1; // @start_index从0开始, @start_row从1开始
        
    // 取邮件时, 从最后一封邮件倒着读取N封邮件发给客户端    
    start_index = mail_max_index - start_index;
    
    if (start_index < 0)
    {
        start_index = 0;
    }
    
    int end_index = start_index - count;
    if (end_index <= 0)
    {
        end_index = 0;
    }
    
    CVarList mail_list;
    int output_mail_count = 0;
    int field_per_mail = 7; // 每个邮件有7个字段

    CVarList temp_mail_info;
    
    LoopBeginCheck(d)
    for (int i=start_index; i>=end_index; --i)
    {
        LoopDoCheck(d)
        
        temp_mail_info.Clear();
     
        mail_rec->QueryRowValue(i, temp_mail_info);
        
        const char *attachment_money = temp_mail_info.StringVal(MAIL_REC_COL_MONEY);
        const char *attachement_item = temp_mail_info.StringVal(MAIL_REC_COL_ITEM);
        
        int attachment_flag = MAIL_FLAG_NO_ATTACHMENT;
        if (strlen(attachment_money) >0 || strlen(attachement_item) > 0)
        {
            attachment_flag = MAIL_FLAG_HAS_ATTACHMENT;
        }
        
        mail_list << temp_mail_info.StringVal(MAIL_REC_COL_SERIAL_NO)
            << temp_mail_info.WideStrVal(MAIL_REC_COL_SENDER_NAME)
            << temp_mail_info.Int64Val(MAIL_REC_COL_POST_TIME)
            << temp_mail_info.WideStrVal(MAIL_REC_COL_TITLE)
            << temp_mail_info.IntVal(MAIL_REC_COL_READ_FLAG)
            << attachment_flag
            << temp_mail_info.IntVal(MAIL_REC_COL_PICK_FLAG);
            
        ++output_mail_count;
    }
    
    CVarList response_msg;
    response_msg << SERVER_CUSTOMMSG_SYSTEM_MAIL;
    response_msg << MAIL_SUB_MSG_RETRIEVE;
    response_msg << output_mail_count;
    response_msg << field_per_mail;
    response_msg << mail_list;

    pKernel->Custom(self, response_msg);
    
    return 0;
}

// 读取邮件
int SystemMailModule::OnCustomReadMail(IKernel* pKernel, const PERSISTID& self,
										const PERSISTID& sender, const IVarList& args)
{
    // args 的格式:
    //
    //      [msg_id][sub_msg_id][sn]
    //
    //  回应消息:
    //      [msg_id][sub_msg_id][result][mail info....]

    IRecord *mail_rec = GetMailRecord(pKernel, self);
    if (mail_rec == NULL)
    {
        return 0;
    }

    const char *mail_sn = args.StringVal(2);
    
    int result = MAIL_CODE_FAILED;
    CVarList mail_info;

    int mail_index = mail_rec->FindString(MAIL_REC_COL_SERIAL_NO, mail_sn);

    if (mail_index == -1)
    {
        result = MAIL_CODE_MAIL_NOT_FOUND;
    }
    else
    {
        result = MAIL_CODE_SUCCESS;
        
        // 设置邮件为已读
        mail_rec->SetInt(mail_index, MAIL_REC_COL_READ_FLAG, MAIL_FLAG_READ);
        
        mail_rec->QueryRowValue(mail_index, mail_info);
    }

    CVarList response_msg;
    response_msg << SERVER_CUSTOMMSG_SYSTEM_MAIL;
    response_msg << MAIL_SUB_MSG_READ;
    response_msg << result;
    response_msg << mail_info;

    pKernel->Custom(self, response_msg);

	return 0;
}

//删除邮件
int SystemMailModule::OnCustomDeleteMail(IKernel* pKernel, const PERSISTID& self,
										const PERSISTID& sender, const IVarList& args)
{
    // args 的格式:
    //
    //      [msg_id][sub_msg_id][sn]
    //
    //  回应消息:
    //      [msg_id][sub_msg_id][sn][result]

    IRecord *mail_rec = GetMailRecord(pKernel, self);
    if (mail_rec == NULL)
    {
        return 0;
    }

    const char *mail_sn = args.StringVal(2);
    int result = MAIL_CODE_FAILED;

    int mail_index = mail_rec->FindString(MAIL_REC_COL_SERIAL_NO, mail_sn);
    
    if (mail_index == -1)
    {
        result = MAIL_CODE_MAIL_NOT_FOUND;
    }
    else
    {
        int pick_flag = mail_rec->QueryInt(mail_index, MAIL_REC_COL_PICK_FLAG);
        
        if (pick_flag == MAIL_FLAG_PICKED)
        {
            // 附件已提取,可以删除
            mail_rec->RemoveRow(mail_index);
            result = MAIL_CODE_SUCCESS;
        }
        else
        {
            result = MAIL_CODE_ATTACHEMENT_UNPICKED;
        }
    }

    CVarList response_msg;
    response_msg << SERVER_CUSTOMMSG_SYSTEM_MAIL;
    response_msg << MAIL_SUB_MSG_DELETE;
    response_msg << mail_sn;
    response_msg << result;

    pKernel->Custom(self, response_msg);

	return 0;
}

// 删除全部邮件
int SystemMailModule::OnCustomDeleteAll(IKernel* pKernel, const PERSISTID& self,
                             const PERSISTID& sender, const IVarList& args)
{
    // args 的格式:
    //
    //      [msg_id][sub_msg_id]
    //
    //  回应消息:
    //      [msg_id][sub_msg_id][int(删除数量)][sn 1]..[sn N]

    IRecord *mail_rec = GetMailRecord(pKernel, self);
    if (mail_rec == NULL)
    {
        return 0;
    }

    CVarList deleted_sn;
    int deleted_count = 0;

    // 从最后一行开始删除已领取附件的邮件
    int row_id = mail_rec->GetRows() -1;
    
    LoopBeginCheck(e)
    for (int i=row_id; i>=0; --i)
    {
        LoopDoCheck(e)
        
        const char *mail_sn = mail_rec->QueryString(i, MAIL_REC_COL_SERIAL_NO);
        int pick_flag = mail_rec->QueryInt(i, MAIL_REC_COL_PICK_FLAG);
        
        if (pick_flag == MAIL_FLAG_PICKED)
        {
            ++deleted_count;
            deleted_sn << mail_sn;
            
            mail_rec->RemoveRow(i);
        }
    }

    CVarList response_msg;
    response_msg << SERVER_CUSTOMMSG_SYSTEM_MAIL;
    response_msg << MAIL_SUB_MSG_DELETE_ALL;
    response_msg << deleted_count;
    response_msg << deleted_sn;

    pKernel->Custom(self, response_msg);

    return 0;
}

// 提取附件
int SystemMailModule::OnCustomPickMail(IKernel* pKernel, const PERSISTID& self,
										const PERSISTID& sender, const IVarList& args)
{
    // args 的格式:
    //
    //      [msg_id][sub_msg_id][sn]
    //
    //  回应消息:
    //      [msg_id][sub_msg_id][sn][result]
    
    IRecord *mail_rec = GetMailRecord(pKernel, self);
    if (mail_rec == NULL)
    {
        return 0;
    }

    const char *mail_sn = args.StringVal(2);
    int result = MAIL_CODE_FAILED;

    int mail_index = mail_rec->FindString(MAIL_REC_COL_SERIAL_NO, mail_sn);

    if (mail_index == -1)
    {
        result = MAIL_CODE_MAIL_NOT_FOUND;
    }
    else
    {
        CVarList mail_info;
        mail_rec->QueryRowValue(mail_index, mail_info);
        
        int pick_flag = mail_info.IntVal(MAIL_REC_COL_PICK_FLAG);

        if (pick_flag == MAIL_FLAG_UNPICKED)
        {
            PERSISTID toolbox = pKernel->GetChild(self, ITEM_BOX_NAME_WSTR);
            if (pKernel->Exists(toolbox))
            {
                int pick_ret = InnerPickMail(pKernel, self, toolbox, mail_info);
                
                if (pick_ret == MAIL_CODE_SUCCESS)
                {
                    result = MAIL_CODE_SUCCESS;
                    
                    // 设置邮件为已提取和已读
                    mail_rec->SetInt(mail_index, MAIL_REC_COL_PICK_FLAG, MAIL_FLAG_PICKED);
                    mail_rec->SetInt(mail_index, MAIL_REC_COL_READ_FLAG, MAIL_FLAG_READ);
					
					
                }
            }
        }
    }




    CVarList response_msg;
    response_msg << SERVER_CUSTOMMSG_SYSTEM_MAIL;
    response_msg << MAIL_SUB_MSG_PICK;
    response_msg << mail_sn;
    response_msg << result;
    pKernel->Custom(self, response_msg);

	//提取完销毁邮件
	OnCustomDeleteMail(pKernel, self, sender, CVarList() <<""<<""<<args.StringVal(2));

    return 0;
}

// 提取全部附件
int SystemMailModule::OnCustomPickAll(IKernel* pKernel, const PERSISTID& self,
                           const PERSISTID& sender, const IVarList& args)
{
    // args 的格式:
    //
    //      [msg_id][sub_msg_id]
    //
    //  回应消息:
    //      [msg_id][sub_msg_id][count][sn 1]....[sn n]

    IRecord *mail_rec = GetMailRecord(pKernel, self);
    if (mail_rec == NULL)
    {
        return 0;
    }

    int picked_count = 0;
    CVarList picked_mail_sn;
    
    // 玩家背包
    PERSISTID toolbox = pKernel->GetChild(self, ITEM_BOX_NAME_WSTR);
    if (!pKernel->Exists(toolbox))
    {
        return 0;
    }
    
    CVarList mail_info;
	CVarList mail_remove;
    int mail_count = mail_rec->GetRows();
    
    LoopBeginCheck(f)
    for (int i=0; i<mail_count; ++i)
    {
        LoopDoCheck(f)
        
        mail_info.Clear();
        mail_rec->QueryRowValue(i, mail_info);

        const char *mail_sn = mail_info.StringVal(MAIL_REC_COL_SERIAL_NO);
        int pick_flag = mail_info.IntVal(MAIL_REC_COL_PICK_FLAG);

        if (pick_flag == MAIL_FLAG_UNPICKED)
        {
            int pick_ret = InnerPickMail(pKernel, self, toolbox, mail_info);

            if (pick_ret == MAIL_CODE_SUCCESS)
            {
                ++picked_count;
				picked_mail_sn << mail_sn 
							   <<mail_info.StringVal(MAIL_REC_COL_MONEY)
							   <<mail_info.StringVal(MAIL_REC_COL_ITEM);
				mail_remove << mail_sn;
                // 设置邮件为已提取和已读
                mail_rec->SetInt(i, MAIL_REC_COL_PICK_FLAG, MAIL_FLAG_PICKED);
                mail_rec->SetInt(i, MAIL_REC_COL_READ_FLAG, MAIL_FLAG_READ);
            }
            else if (pick_ret == MAIL_CODE_TOOL_BOX_INSUFFICIENCY)
            {
                // 背包空间不足
                
                break;
            }
        }
    }

	{
		CVarList response_msg;
		response_msg << SERVER_CUSTOMMSG_SYSTEM_MAIL;
		response_msg << MAIL_SUB_MSG_PICK_ALL;
		response_msg << picked_count;
		response_msg << picked_mail_sn;
		pKernel->Custom(self, response_msg);
	}




	//删除提取邮件邮件
	int deleted_count = 0;
	for (size_t i = 0; i < mail_remove.GetCount(); i++)
	{
		const char *mail_sn = mail_remove.StringVal(i);
		int result = MAIL_CODE_FAILED;

		int mail_index = mail_rec->FindString(MAIL_REC_COL_SERIAL_NO, mail_sn);
		if (mail_index != -1)
		{
			int pick_flag = mail_rec->QueryInt(mail_index, MAIL_REC_COL_PICK_FLAG);

			if (pick_flag == MAIL_FLAG_PICKED)
			{
				// 附件已提取,可以删除
				mail_rec->RemoveRow(mail_index);
				result = MAIL_CODE_SUCCESS;
				deleted_count++;
			}
		}
	}

	{
		CVarList response_msg;
		response_msg << SERVER_CUSTOMMSG_SYSTEM_MAIL;
		response_msg << MAIL_SUB_MSG_DELETE_ALL;
		response_msg << deleted_count;
		response_msg << mail_remove;
		pKernel->Custom(self, response_msg);
	}

    return 0;
}

// 提取邮件
int SystemMailModule::InnerPickMail(IKernel* pKernel, const PERSISTID& self, const PERSISTID& toolbox, const IVarList& args)
{
    std::string strMoney = args.StringVal(MAIL_REC_COL_MONEY);
    std::string strItem = args.StringVal(MAIL_REC_COL_ITEM);
    std::string strProperty = args.StringVal(MAIL_REC_COL_PROPERTY);

    CVarList moneys; StringUtil::SplitString(moneys, strMoney, ",");
    CVarList items; StringUtil::SplitString(items, strItem, ",");
    CVarList Propertys; StringUtil::SplitString(Propertys, strProperty, ",");

	// 根据道具来源处理绑定事件 [2/10/2017 lihailuo]
	int nFromId = args.IntVal( MAIL_REC_COL_MAIL_TYPE );
	int nBindState = FunctionEventModule::GetItemBindState(nFromId);

    //临时存放所有道具
    VectorBoxTestItem s_BoxTestItem;
    LoopBeginCheck(g)
    for (int i = 0; i < (int)items.GetCount(); ++i)
    {
        LoopDoCheck(g)
        std::string itemInfo = items.StringVal(i);
        CVarList itemList;
        util_split_string(itemList, itemInfo, ":");
        if (itemList.GetCount() < 2)
        {
            continue;
        }
        const char* itemConfig = itemList.StringVal(0);
        int itemAmount = itemList.IntVal(1);

        SBoxTestItem temp;
        temp.config_id = itemConfig;
        temp.amount = itemAmount;
		temp.bind_status = nBindState;
        s_BoxTestItem.push_back(temp);
    }
    
    if (!ContainerModule::TryAddItems(pKernel, toolbox, &s_BoxTestItem))
    {
        // 背包空间不足
		::CustomSysInfo(pKernel, self, SYSTEM_INFO_ID_7004, CVarList());
        return MAIL_CODE_TOOL_BOX_INSUFFICIENCY;
    }

    // 资金
    LoopBeginCheck(h)
    for (size_t i=0; i<moneys.GetCount(); i++)
    {
        LoopDoCheck(h)
        
        std::string money_props = moneys.StringVal(i);
        CVarList res; StringUtil::SplitString(res, money_props, ":");
        if (res.GetCount()<2) {
            continue;
        }

        std::string money_type = res.StringVal(0);
        std::string money_num = res.StringVal(1);
        int64_t iMoney = StringUtil::StringAsInt64(money_num.c_str());
	

		
		//		if (money_type == "PlayerExp")
//		{
///			LevelModule::m_pLevelModule->AddExp(pKernel, self, ADDEXP_TYPE_MAIL, iMoney);
//			continue;
//		}

        int iType = m_CapitalModuel->GetCapitalType(money_type);
		m_CapitalModuel->IncCapital(pKernel, self, iType, iMoney, (EmFunctionEventId)nFromId);

    }

    // 属性
    SetObjProperty(pKernel, self, Propertys);

    // 道具
    LoopBeginCheck(i)
	for (VectorBoxTestItem::iterator itr = s_BoxTestItem.begin(); itr != s_BoxTestItem.end(); ++itr )
    {
		LoopDoCheck(i)

		SBoxTestItem& sItem = *itr;

		//放到对应容器中(货币直接添加)  [2/10/2017 lihailuo]
		int beforeNum = ContainerModule::GetItemCount(pKernel, toolbox, sItem.config_id.c_str());
		int putCnt = ContainerModule::PlaceItem(pKernel, toolbox, sItem.config_id.c_str(), sItem.amount, 
												(EmFunctionEventId)nFromId, true, sItem.bind_status);
		int afterNum = ContainerModule::GetItemCount(pKernel, toolbox, sItem.config_id.c_str());

        //NOTE: PlaceItem已经记录日志， 这里是扩展处理，不要记录到神策  [2/10/2017 lihailuo] 装备时amount表示品质
		if (ContainerModule::IsNeedSaveItemLog(pKernel, sItem.config_id.c_str(), sItem.amount))
		{
			ItemLog log;
			log.eventID		  = FUNCTION_EVENT_ID_SYSTEM_MAIL;
			log.eventType     = LOG_ACT_EVENT_GAIN;
			log.itemID		  = sItem.config_id;
			log.itemNum		  = sItem.amount;
			log.before        = beforeNum;
			log.after         = afterNum;
			log.state         = LOG_ACT_STATE_SUCCESS;
			LogModule::m_pLogModule->SaveItemLog(pKernel, self, log);
		}
    }
    
    return MAIL_CODE_SUCCESS;
}

const std::wstring SystemMailModule::ComposeMailContent( IKernel* pKernel, const wchar_t* content, const IVarList &var )
{
	CFlexString fstr(content); 

    LoopBeginCheck(j)
	for (size_t nindex = 0; nindex < var.GetCount(); nindex++)
	{
	    LoopDoCheck(j)
	    
		std::wstring wcsInfo = fstr.GetVarInfo((int)nindex);

		long type = var.GetType(nindex);

		{
			switch(type)
			{
			case VTYPE_BOOL:
			case VTYPE_INT:
				{
					int value = var.IntVal(nindex);
					fstr << value;
				}
				break;
			case VTYPE_INT64:
				{
					//wchar_t wcsBuffer[260];
					int64_t value = var.Int64Val(nindex);
					std::wstring wcsBuffer = StringUtil::StringAsWideStr(StringUtil::Int64AsString(value).c_str());
					//_i64tow(value, wcsBuffer, 10);
					fstr << wcsBuffer;
				}
				break;
			case VTYPE_FLOAT:
			case VTYPE_DOUBLE:
				{
					float value = var.FloatVal(nindex);					
					fstr << value;
				}
				break;
			case VTYPE_STRING:
				{
					//普通串就是一定是IDNAME
					const char* value = var.StringVal(nindex);
					fstr << StringUtil::StringAsWideStr(value);
				}
				break;
			case VTYPE_WIDESTR:
				{
					//宽串就是直接显示的字符串
					const wchar_t* pKey = var.WideStrVal(nindex);
					fstr << pKey;
				}
				break;
			default:
				continue;
				break;
			}
		}
	}
	fstr << FmtEnd;
	return fstr.GetStr();
}

bool SystemMailModule::ClearAllMail(IKernel* pKernel, const PERSISTID& self)
{
	if (!pKernel->Exists(self)) {
		return false;
	}

	IGameObj* pPlayer = pKernel->GetGameObj(self);
	if (pPlayer == NULL)
	{
		return false;
	}

	IRecord* rec = pKernel->GetRecord(self, SYSTEM_MAIL_REC);
	if (rec == NULL) 
	{
		return false;
	}

	rec->ClearRow();
	
	return true;
}

int SystemMailModule::SendTestMail(IKernel* pKernel, const PERSISTID& self, std::string &mailID)
{
	//------------------------------------------------------------------
	// 发送预先配置的登录邮件（测试用）
	if (mailID.empty())
	{
		mailID = (rand() % 2 == 0) ? "player_ready" : "player_greeting";
	}
	const wchar_t* Name = pKernel->QueryWideStr(self, "Name");
	const ConfigMailItem& mail = GetConfigMail(pKernel, mailID);
	SendMailToPlayer(pKernel, mail.sender.c_str(), Name, mail.mail_title.c_str(),
						mail.mail_content.c_str(), mail.items.c_str());

	return 0;
}

bool SystemMailModule::SetObjProperty(IKernel* pKernel, const PERSISTID& self, const IVarList& args)
{
	if (!pKernel->Exists(self))
	{
		return false;
	}
	// 获得对象指针
	IGameObj* pSelfObj = pKernel->GetGameObj(self);

	if (NULL == pSelfObj)
	{
		return false;
	}

	size_t iCount = args.GetCount();
	
	LoopBeginCheck(k)
	for (size_t i = 0; i < iCount; ++i)
	{
	    LoopDoCheck(k)
	    
		std::string player_props = args.StringVal(i);
		CVarList res; StringUtil::SplitString(res, player_props, ":");
		if (res.GetCount() != 2) 
		{
			continue;
		}

		const char* pPropName = res.StringVal(0);
		std::string PropertyValue = res.StringVal(1);

		// 查询是否存在属性
		if (!pSelfObj->FindAttr(pPropName))
		{
			continue;
		}

		int type = pSelfObj->GetAttrType(pPropName);
		if (VTYPE_INT == type)
		{
			int oldValue = pSelfObj->QueryInt(pPropName);
			int Value = atoi(PropertyValue.c_str());
			pSelfObj->SetInt(pPropName, oldValue + Value);
		}
		else if (VTYPE_FLOAT == type)
		{
			float oldValue = pSelfObj->QueryFloat(pPropName);
			float Value = (float)atof(PropertyValue.c_str());
			pSelfObj->SetFloat(pPropName, oldValue + Value);
		}
		else if (VTYPE_DOUBLE == type)
		{
			double oldValue = pSelfObj->QueryDouble(pPropName);
			double Value = atof(PropertyValue.c_str());
			pSelfObj->SetDouble(pPropName, oldValue + Value);
		}
		else if (VTYPE_INT64 == type)
		{
			int64_t oldValue = pSelfObj->QueryInt64(pPropName);
			int64_t Value = (int64_t)atof(PropertyValue.c_str());
			pSelfObj->SetInt64(pPropName, oldValue + Value);
		}
		else if (VTYPE_STRING == type)
		{
			pSelfObj->SetString(pPropName, PropertyValue.c_str());
		}
		else if (VTYPE_WIDESTR == type)
		{
			pSelfObj->SetWideStr(pPropName, util_string_as_widestr(PropertyValue.c_str()).c_str());
		}
		else
		{
			continue;
		}
	}

	return true;
}


// 检查新邮件
void SystemMailModule::CheckUnreadMail(IKernel* pKernel, const PERSISTID& self)
{
    IRecord *mail_record = pKernel->GetRecord(self, SYSTEM_MAIL_REC);
    if (mail_record == NULL)
    {
        return;
    }

    int unread_count = 0;
    
    int row_count = mail_record->GetRows();
    for (int i=0; i<row_count; ++i)
    {
        int read_flag = mail_record->QueryInt(i, MAIL_REC_COL_READ_FLAG);
        if (read_flag == MAIL_NOT_READ)
        {
            ++unread_count;
        }
    }
    
    if (unread_count > 0)
    {
        CVarList unread_msg;
        unread_msg << SERVER_CUSTOMMSG_SYSTEM_MAIL;
        unread_msg << MAIL_SUB_MSG_UNREAD_MAIL;
        unread_msg << unread_count;

        pKernel->Custom(self, unread_msg);
    }
}