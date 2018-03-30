//--------------------------------------------------------------------
// �ļ���:		IInterface.h
// ��  ��:		
// ˵  ��:		
// ��������:	2007��1��31��
// ������:		½����
// ��Ȩ����:	������ţ�������޹�˾
//--------------------------------------------------------------------

#ifndef _PUBLIC_IINTERFACE_H
#define _PUBLIC_IINTERFACE_H

#include "Macros.h"
#include "ICore.h"

// ���ܽӿ�

class IIntCreator;

class IInterface
{
public:
	IInterface()
	{
		m_pCore = NULL;
		m_pCreator = NULL;
	}
	
	virtual ~IInterface() = 0;

	// ��ʼ��
	virtual bool Init() = 0;
	// �ر�
	virtual bool Shut() = 0;
	
	// �Ƿ���Ҫÿ֡���У�����ExecFrameBegin��ExecFrameEnd��
	virtual bool NeedExecPerFrame() const { return false; }
	
	// ÿ֡��ʼʱ����
	virtual void ExecFrameBegin() {}
	// ÿ֡����ʱ����
	virtual void ExecFrameEnd() {}
	
	// �ͷ�
	virtual void Release()
	{
		m_pCore->ReleaseInterface(this);
	}
	
	// ����ڴ�ռ��
	virtual size_t GetMemoryUsage() { return 0; }

	// ��ú��Ľӿ�
	ICore* GetCore() const
	{
		return m_pCore;
	}

	// ��ô�����
	IIntCreator* GetCreator() const
	{
		return m_pCreator;
	}

private:
	IInterface(const IInterface&);
	IInterface& operator=(const IInterface&);
	
	void SetCore(ICore* value)
	{
		m_pCore = value;
	}
	
	void SetCreator(IIntCreator* value)
	{
		m_pCreator = value;
	}
	
private:
	ICore* m_pCore;
	IIntCreator* m_pCreator;

	friend class CIntManager;
};

inline IInterface::~IInterface() {}

#endif // _PUBLIC_IINTERFACE_H
