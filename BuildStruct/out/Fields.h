//-------------------------------------------------------------------- 
// 文件名:		Fields.h 
// 内  容:		字段名定义 
// 说  明:		字段名称定义 
// 创建者:		 
// 日  期:       
//-------------------------------------------------------------------- 
#ifndef _FIELDS_DEFINE_H_ 
#define _FIELDS_DEFINE_H_ 
 
// 字段定义=============================================================== 
 
//<property name="PathFinding"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="是否寻路中"/> 
#define FIELD_PROP_PATH_FINDING			"PathFinding" 
 
//<property name="FindPathX"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前目标点X"/> 
#define FIELD_PROP_FIND_PATH_X			"FindPathX" 
 
//<property name="FindPathZ"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前目标点Z"/> 
#define FIELD_PROP_FIND_PATH_Z			"FindPathZ" 
 
//<property name="DestPathX"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="最终目标X"/> 
#define FIELD_PROP_DEST_PATH_X			"DestPathX" 
 
//<property name="DestPathZ"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="最终目标Z"/> 
#define FIELD_PROP_DEST_PATH_Z			"DestPathZ" 
 
//<property name="LittleStepX"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="碎步移动目标X"/> 
#define FIELD_PROP_LITTLE_STEP_X			"LittleStepX" 
 
//<property name="LittleStepZ"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="碎步移动目标Z"/> 
#define FIELD_PROP_LITTLE_STEP_Z			"LittleStepZ" 
 
//<property name="LastFindPath"  
// 	type="Int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="最终寻路"/> 
#define FIELD_PROP_LAST_FIND_PATH			"LastFindPath" 
 
//<property name="RetryPrePath"  
// 	type="Int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="指定次数前重试，之后偏移动态找路"/> 
#define FIELD_PROP_RETRY_PRE_PATH			"RetryPrePath" 
 
//<property name="PathFindStep"  
// 	type="Int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc=""/> 
#define FIELD_PROP_PATH_FIND_STEP			"PathFindStep" 
 
//<property name="ContinueMove"  
// 	type="Int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="连续碎步标志,0否1是"/> 
#define FIELD_PROP_CONTINUE_MOVE			"ContinueMove" 
 
//<property name="TargetX"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="目标点X"/> 
#define FIELD_PROP_TARGET_X			"TargetX" 
 
//<property name="TargetZ"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="目标点Z"/> 
#define FIELD_PROP_TARGET_Z			"TargetZ" 
 
//<property name="NearTargetGrid"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="目标附近的点"/> 
#define FIELD_PROP_NEAR_TARGET_GRID			"NearTargetGrid" 
 
//<property name="MotionState"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="寻路移动状态"/> 
#define FIELD_PROP_MOTION_STATE			"MotionState" 
 
//<property name="RoundGrid"  
// 	type="Int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="避让时所在格子"/> 
#define FIELD_PROP_ROUND_GRID			"RoundGrid" 
 
//<property name="PathDistanceMin"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="离目标最小距离"/> 
#define FIELD_PROP_PATH_DISTANCE_MIN			"PathDistanceMin" 
 
//<property name="PathDistanceMax"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="离目标最大距离"/> 
#define FIELD_PROP_PATH_DISTANCE_MAX			"PathDistanceMax" 
 
//<property name="MotionResult"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="移动结果"/> 
#define FIELD_PROP_MOTION_RESULT			"MotionResult" 
 
//<property name="WaitTarget"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="等待对象走开"/> 
#define FIELD_PROP_WAIT_TARGET			"WaitTarget" 
 
//<property name="WaitTargetX"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="等待对象走开的坐标点X"/> 
#define FIELD_PROP_WAIT_TARGET_X			"WaitTargetX" 
 
//<property name="WaitTargetZ"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="等待对象走开的坐标点Z"/> 
#define FIELD_PROP_WAIT_TARGET_Z			"WaitTargetZ" 
 
//<property name="RoundTotalCount"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="避让的总次数"/> 
#define FIELD_PROP_ROUND_TOTAL_COUNT			"RoundTotalCount" 
 
//<property name="SpaceGrid"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="间隔格数"/> 
#define FIELD_PROP_SPACE_GRID			"SpaceGrid" 
 
//<property name="CallBackFunction"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="回调函数"/> 
#define FIELD_PROP_CALL_BACK_FUNCTION			"CallBackFunction" 
 
//<property name="MotionMethod"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="寻路方式"/> 
#define FIELD_PROP_MOTION_METHOD			"MotionMethod" 
 
//<property name="SelfLastX"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="自身上次坐标点X"/> 
#define FIELD_PROP_SELF_LAST_X			"SelfLastX" 
 
//<property name="SelfLastZ"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="自身上次坐标点Z"/> 
#define FIELD_PROP_SELF_LAST_Z			"SelfLastZ" 
 
//<property name="Name"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="名字"/> 
#define FIELD_PROP_NAME			"Name" 
 
//<property name="BaseCap"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="基础容量, 为0时使用最大容量"/> 
#define FIELD_PROP_BASE_CAP			"BaseCap" 
 
//<property name="CantAdd"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="是否不能添加物品到容器中"/> 
#define FIELD_PROP_CANT_ADD			"CantAdd" 
 
//<property name="CantRemove"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="是否不能将物品从容器中移走"/> 
#define FIELD_PROP_CANT_REMOVE			"CantRemove" 
 
//<property name="CantArrange"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="是否不能执行整理操作"/> 
#define FIELD_PROP_CANT_ARRANGE			"CantArrange" 
 
//<property name="CanOP"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="玩家可操作容器的标志"/> 
#define FIELD_PROP_CAN_OP			"CanOP" 
 
//<property name="LockedSize"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="锁定的格子数"/> 
#define FIELD_PROP_LOCKED_SIZE			"LockedSize" 
 
//<property name="EquipType"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="装备栏位类型, equipment_config.xml文件中的定义"/> 
#define FIELD_PROP_EQUIP_TYPE			"EquipType" 
 
//<property name="BasePackage"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="基础属性包"/> 
#define FIELD_PROP_BASE_PACKAGE			"BasePackage" 
 
//<property name="StrPackage"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="强化基础包"/> 
#define FIELD_PROP_STR_PACKAGE			"StrPackage" 
 
//<property name="AddPackage"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="附加属性包"/> 
#define FIELD_PROP_ADD_PACKAGE			"AddPackage" 
 
//<property name="ClassLimit"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="职业限制"/> 
#define FIELD_PROP_CLASS_LIMIT			"ClassLimit" 
 
//<property name="ModifyLevel"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="随机数等级区间"/> 
#define FIELD_PROP_MODIFY_LEVEL			"ModifyLevel" 
 
//<property name="ModifyAddPackage"  
// 	type="string"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="装备附加属性随机区间值"/> 
#define FIELD_PROP_MODIFY_ADD_PACKAGE			"ModifyAddPackage" 
 
//<property name="EquipNotifyFlag"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="获得装备后的通知设置(按位屏蔽)"/> 
#define FIELD_PROP_EQUIP_NOTIFY_FLAG			"EquipNotifyFlag" 
 
//<property name="ApperanceM"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="男装备外观id"/> 
#define FIELD_PROP_APPERANCE_M			"ApperanceM" 
 
//<property name="ApperanceW"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="女装备外观id"/> 
#define FIELD_PROP_APPERANCE_W			"ApperanceW" 
 
//<property name="FashionM"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="男时装外观id"/> 
#define FIELD_PROP_FASHION_M			"FashionM" 
 
//<property name="FashionW"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="女时装外观id"/> 
#define FIELD_PROP_FASHION_W			"FashionW" 
 
//<property name="Config"  
// 	type="string"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="编号"/> 
#define FIELD_PROP_CONFIG			"Config" 
 
//<property name="Script"  
// 	type="string"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="编号"/> 
#define FIELD_PROP_SCRIPT			"Script" 
 
//<property name="ColorLevel"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="颜色等级"/> 
#define FIELD_PROP_COLOR_LEVEL			"ColorLevel" 
 
//<property name="UniqueID"  
// 	type="string"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="唯一编号"/> 
#define FIELD_PROP_UNIQUE_ID			"UniqueID" 
 
//<property name="Amount"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="当前数量"/> 
#define FIELD_PROP_AMOUNT			"Amount" 
 
//<property name="ItemType"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="物品子类型"/> 
#define FIELD_PROP_ITEM_TYPE			"ItemType" 
 
//<property name="MaxAmount"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="最大数量"/> 
#define FIELD_PROP_MAX_AMOUNT			"MaxAmount" 
 
//<property name="LimitLevel"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="等级限制"/> 
#define FIELD_PROP_LIMIT_LEVEL			"LimitLevel" 
 
//<property name="SellPrice"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="售价铜币"/> 
#define FIELD_PROP_SELL_PRICE			"SellPrice" 
 
//<property name="SpecialItem"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="是否稀有物品"/> 
#define FIELD_PROP_SPECIAL_ITEM			"SpecialItem" 
 
//<property name="BindStatus"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="物品的绑定状态"/> 
#define FIELD_PROP_BIND_STATUS			"BindStatus" 
 
//<property name="Use"  
// 	type="string"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="物品的使用设置"/> 
#define FIELD_PROP_USE			"Use" 
 
//<property name="CoolDownID"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="物品的冷却ID"/> 
#define FIELD_PROP_COOL_DOWN_ID			"CoolDownID" 
 
//<property name="CoolDownTime"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="物品的冷却时长(单位秒)"/> 
#define FIELD_PROP_COOL_DOWN_TIME			"CoolDownTime" 
 
//<property name="Purchase"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="买入价格"/> 
#define FIELD_PROP_PURCHASE			"Purchase" 
 
//<property name="RemindAmount"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="已经提醒使用的数量"/> 
#define FIELD_PROP_REMIND_AMOUNT			"RemindAmount" 
 
//<property name="IsNoNeedLog"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="是否不需要记录日志"/> 
#define FIELD_PROP_IS_NO_NEED_LOG			"IsNoNeedLog" 
 
//<property name="ItemFrozenTime"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="冻结时间(在这时间之后可使用)"/> 
#define FIELD_PROP_ITEM_FROZEN_TIME			"ItemFrozenTime" 
 
//<property name="BindAble"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="物品是否支持绑定"/> 
#define FIELD_PROP_BIND_ABLE			"BindAble" 
 
//<property name="Level"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="玉珏等级"/> 
#define FIELD_PROP_LEVEL			"Level" 
 
//<property name="Step"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="玉珏阶级"/> 
#define FIELD_PROP_STEP			"Step" 
 
//<property name="PointValue"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="价值点数"/> 
#define FIELD_PROP_POINT_VALUE			"PointValue" 
 
//<property name="UpMoney"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="升级需要铜币"/> 
#define FIELD_PROP_UP_MONEY			"UpMoney" 
 
//<property name="UpLevel"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="升级需要的玩家最低等级"/> 
#define FIELD_PROP_UP_LEVEL			"UpLevel" 
 
//<property name="MountCost"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="镶嵌此宝石的费用(铜币)"/> 
#define FIELD_PROP_MOUNT_COST			"MountCost" 
 
//<property name="ExtirpateCost"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="摘除此宝石的费用(铜币)"/> 
#define FIELD_PROP_EXTIRPATE_COST			"ExtirpateCost" 
 
//<property name="Index"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="宝石索引"/> 
#define FIELD_PROP_INDEX			"Index" 
 
//<property name="BaseAddPkg"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="基础修正包id"/> 
#define FIELD_PROP_BASE_ADD_PKG			"BaseAddPkg" 
 
//<property name="PreRideAddPkg"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="上一个修正包id"/> 
#define FIELD_PROP_PRE_RIDE_ADD_PKG			"PreRideAddPkg" 
 
//<property name="RideAddPkg"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前修正包id"/> 
#define FIELD_PROP_RIDE_ADD_PKG			"RideAddPkg" 
 
//<property name="RideActived"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="是否激活"/> 
#define FIELD_PROP_RIDE_ACTIVED			"RideActived" 
 
//<property name="RideStar"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="坐骑星级"/> 
#define FIELD_PROP_RIDE_STAR			"RideStar" 
 
//<property name="RideStep"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="坐骑阶级"/> 
#define FIELD_PROP_RIDE_STEP			"RideStep" 
 
//<property name="DefaultSkin"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="坐骑默认皮肤"/> 
#define FIELD_PROP_DEFAULT_SKIN			"DefaultSkin" 
 
//<property name="CurState"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前状态"/> 
#define FIELD_PROP_CUR_STATE			"CurState" 
 
//<property name="SubState"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前状态的子状态"/> 
#define FIELD_PROP_SUB_STATE			"SubState" 
 
//<property name="AITargetObejct"  
// 	type="object"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前AI目标对象"/> 
#define FIELD_PROP_AITARGET_OBEJCT			"AITargetObejct" 
 
//<property name="AITemplate"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="AI模块"/> 
#define FIELD_PROP_AITEMPLATE			"AITemplate" 
 
//<property name="Initiative"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="是否主动"/> 
#define FIELD_PROP_INITIATIVE			"Initiative" 
 
//<property name="FightAttackFreq"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="攻击频率"/> 
#define FIELD_PROP_FIGHT_ATTACK_FREQ			"FightAttackFreq" 
 
//<property name="LastAttackTime"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="从上次攻击到现在过去的攻击心跳检测时间(攻击心间隔回调累加值)"/> 
#define FIELD_PROP_LAST_ATTACK_TIME			"LastAttackTime" 
 
//<property name="PatrolMode"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="巡逻模式"/> 
#define FIELD_PROP_PATROL_MODE			"PatrolMode" 
 
//<property name="BornX"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="出生点"/> 
#define FIELD_PROP_BORN_X			"BornX" 
 
//<property name="BornZ"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="出生点"/> 
#define FIELD_PROP_BORN_Z			"BornZ" 
 
//<property name="BornOrient"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="出生点朝向"/> 
#define FIELD_PROP_BORN_ORIENT			"BornOrient" 
 
//<property name="MinAttackDist"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="最小攻击距离"/> 
#define FIELD_PROP_MIN_ATTACK_DIST			"MinAttackDist" 
 
//<property name="MaxAttackDist"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="最大攻击距离"/> 
#define FIELD_PROP_MAX_ATTACK_DIST			"MaxAttackDist" 
 
//<property name="PathID"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="寻路路径ID"/> 
#define FIELD_PROP_PATH_ID			"PathID" 
 
//<property name="Recuperate"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="休养时间"/> 
#define FIELD_PROP_RECUPERATE			"Recuperate" 
 
//<property name="EscapeWarningHPRate"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="逃跑警戒HP比例"/> 
#define FIELD_PROP_ESCAPE_WARNING_HPRATE			"EscapeWarningHPRate" 
 
//<property name="EscapeLastTime"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="逃跑行为的持续时间"/> 
#define FIELD_PROP_ESCAPE_LAST_TIME			"EscapeLastTime" 
 
//<property name="EscapeCD"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="触发逃跑的CD"/> 
#define FIELD_PROP_ESCAPE_CD			"EscapeCD" 
 
//<property name="RestBossNpc"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="休息状态npc"/> 
#define FIELD_PROP_REST_BOSS_NPC			"RestBossNpc" 
 
//<property name="GlobalStep"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前大波次进行到哪波"/> 
#define FIELD_PROP_GLOBAL_STEP			"GlobalStep" 
 
//<property name="LittleStepMax"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前波小波次次数"/> 
#define FIELD_PROP_LITTLE_STEP_MAX			"LittleStepMax" 
 
//<property name="LittlestepNow"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前波小波次次数"/> 
#define FIELD_PROP_LITTLESTEP_NOW			"LittlestepNow" 
 
//<property name="SceneId"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="场景id"/> 
#define FIELD_PROP_SCENE_ID			"SceneId" 
 
//<property name="MaxScope"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="环形外环半径"/> 
#define FIELD_PROP_MAX_SCOPE			"MaxScope" 
 
//<property name="MinScope"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="环形内环半径"/> 
#define FIELD_PROP_MIN_SCOPE			"MinScope" 
 
//<property name="SpringCount"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="进入触发范围的数量"/> 
#define FIELD_PROP_SPRING_COUNT			"SpringCount" 
 
//<property name="CreateType"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="0-触发后创建NPC，1-创建随机位置精英NPC，2-创建随机位置精英带波次怪物"/> 
#define FIELD_PROP_CREATE_TYPE			"CreateType" 
 
//<property name="TotalStep"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="怪物的波数"/> 
#define FIELD_PROP_TOTAL_STEP			"TotalStep" 
 
//<property name="CurStep"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前波数"/> 
#define FIELD_PROP_CUR_STEP			"CurStep" 
 
//<property name="RandRow"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="随机的行数"/> 
#define FIELD_PROP_RAND_ROW			"RandRow" 
 
//<property name="RandHelper"  
// 	type="object"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="随机的辅助创建器"/> 
#define FIELD_PROP_RAND_HELPER			"RandHelper" 
 
//<property name="MonsterAmount"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="怪物总数"/> 
#define FIELD_PROP_MONSTER_AMOUNT			"MonsterAmount" 
 
//<property name="IsDestroy"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="触发结束怪物是否销毁"/> 
#define FIELD_PROP_IS_DESTROY			"IsDestroy" 
 
//<property name="SceneAction"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="关卡秘境行进步骤"/> 
#define FIELD_PROP_SCENE_ACTION			"SceneAction" 
 
//<property name="NpcID"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="生成的NPC的Id"/> 
#define FIELD_PROP_NPC_ID			"NpcID" 
 
//<property name="CurAmount"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前数量"/> 
#define FIELD_PROP_CUR_AMOUNT			"CurAmount" 
 
//<property name="RefreshPeriod"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="刷新时间周期,单位为秒"/> 
#define FIELD_PROP_REFRESH_PERIOD			"RefreshPeriod" 
 
//<property name="Limit"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="杀多少怪刷新下一波"/> 
#define FIELD_PROP_LIMIT			"Limit" 
 
//<property name="TranslateSceneID"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="传送场景编号（公式）"/> 
#define FIELD_PROP_TRANSLATE_SCENE_ID			"TranslateSceneID" 
 
//<property name="TranslatePosX"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="坐标X"/> 
#define FIELD_PROP_TRANSLATE_POS_X			"TranslatePosX" 
 
//<property name="TranslatePosY"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="坐标Y"/> 
#define FIELD_PROP_TRANSLATE_POS_Y			"TranslatePosY" 
 
//<property name="TranslatePosZ"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="坐标Z"/> 
#define FIELD_PROP_TRANSLATE_POS_Z			"TranslatePosZ" 
 
//<property name="TranslateAy"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="传送朝向"/> 
#define FIELD_PROP_TRANSLATE_AY			"TranslateAy" 
 
//<property name="OwnSkills"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="拥有的技能（普通技能除外）"/> 
#define FIELD_PROP_OWN_SKILLS			"OwnSkills" 
 
//<property name="ChaseRange"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="追逐半径"/> 
#define FIELD_PROP_CHASE_RANGE			"ChaseRange" 
 
//<property name="PatrolRange"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="巡逻半径"/> 
#define FIELD_PROP_PATROL_RANGE			"PatrolRange" 
 
//<property name="DropType"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="掉落分类"/> 
#define FIELD_PROP_DROP_TYPE			"DropType" 
 
//<property name="DropToKillerCnt"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="高伤害分配人数"/> 
#define FIELD_PROP_DROP_TO_KILLER_CNT			"DropToKillerCnt" 
 
//<property name="ExpAward"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="经验"/> 
#define FIELD_PROP_EXP_AWARD			"ExpAward" 
 
//<property name="SkillStr"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="技能"/> 
#define FIELD_PROP_SKILL_STR			"SkillStr" 
 
//<property name="NpcBasePackage"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="基础属性包"/> 
#define FIELD_PROP_NPC_BASE_PACKAGE			"NpcBasePackage" 
 
//<property name="DropID"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="掉落ID, 支持用逗号分隔的多个ID"/> 
#define FIELD_PROP_DROP_ID			"DropID" 
 
//<property name="MinCapitalAward"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="资金奖励下限"/> 
#define FIELD_PROP_MIN_CAPITAL_AWARD			"MinCapitalAward" 
 
//<property name="MaxCapitalAward"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="资金奖励上限"/> 
#define FIELD_PROP_MAX_CAPITAL_AWARD			"MaxCapitalAward" 
 
//<property name="BornState"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="出生状态,1在出生状态中"/> 
#define FIELD_PROP_BORN_STATE			"BornState" 
 
//<property name="BornTime"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="出生持续时间"/> 
#define FIELD_PROP_BORN_TIME			"BornTime" 
 
//<property name="BornStand"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="出生不巡逻"/> 
#define FIELD_PROP_BORN_STAND			"BornStand" 
 
//<property name="TowerRatio"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="伤害值加成(与该数值相乘)"/> 
#define FIELD_PROP_TOWER_RATIO			"TowerRatio" 
 
//<property name="DropMeetLevel"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="如果和怪物等级相差大于等于就不掉落"/> 
#define FIELD_PROP_DROP_MEET_LEVEL			"DropMeetLevel" 
 
//<property name="FightMoveRate"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="战斗移动调整几率"/> 
#define FIELD_PROP_FIGHT_MOVE_RATE			"FightMoveRate" 
 
//<property name="FightMoveDis"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="战斗移动的范围"/> 
#define FIELD_PROP_FIGHT_MOVE_DIS			"FightMoveDis" 
 
//<property name="CantRestoreHP"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="脱战后不能恢复满血"/> 
#define FIELD_PROP_CANT_RESTORE_HP			"CantRestoreHP" 
 
//<property name="NpcDeadTime"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="死亡慢动作时间"/> 
#define FIELD_PROP_NPC_DEAD_TIME			"NpcDeadTime" 
 
//<property name="NpcPackageLevel"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="属性包等级"/> 
#define FIELD_PROP_NPC_PACKAGE_LEVEL			"NpcPackageLevel" 
 
//<property name="NpcType"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="NPC类型 0-200NormalNpc,201-400StaticNpc"/> 
#define FIELD_PROP_NPC_TYPE			"NpcType" 
 
//<property name="SafeRule"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="保护规则"/> 
#define FIELD_PROP_SAFE_RULE			"SafeRule" 
 
//<property name="Master"  
// 	type="object"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="主人"/> 
#define FIELD_PROP_MASTER			"Master" 
 
//<property name="Skill"  
// 	type="object"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="技能"/> 
#define FIELD_PROP_SKILL			"Skill" 
 
//<property name="SpringDestroy"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="触发是否就摧毁"/> 
#define FIELD_PROP_SPRING_DESTROY			"SpringDestroy" 
 
//<property name="SpringType"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="触发对象类型"/> 
#define FIELD_PROP_SPRING_TYPE			"SpringType" 
 
//<property name="SpringRelation"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="触发关系类型"/> 
#define FIELD_PROP_SPRING_RELATION			"SpringRelation" 
 
//<property name="SpringEvent"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="触发事件"/> 
#define FIELD_PROP_SPRING_EVENT			"SpringEvent" 
 
//<property name="EventValue"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="伤害数值"/> 
#define FIELD_PROP_EVENT_VALUE			"EventValue" 
 
//<property name="EventRange"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="摧毁距离"/> 
#define FIELD_PROP_EVENT_RANGE			"EventRange" 
 
//<property name="EventCount"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="群体触发最大个数"/> 
#define FIELD_PROP_EVENT_COUNT			"EventCount" 
 
//<property name="EndSpringEvent"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="脱离事件"/> 
#define FIELD_PROP_END_SPRING_EVENT			"EndSpringEvent" 
 
//<property name="DestroyEvent"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="摧毁事件"/> 
#define FIELD_PROP_DESTROY_EVENT			"DestroyEvent" 
 
//<property name="SpringEffect"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="触发特效"/> 
#define FIELD_PROP_SPRING_EFFECT			"SpringEffect" 
 
//<property name="Resource"  
// 	type="string"  
//	public="true"  
//	private="false"  
//	save="false"  
//	desc="触发效果"/> 
#define FIELD_PROP_RESOURCE			"Resource" 
 
//<property name="ResourceB"  
// 	type="string"  
//	public="true"  
//	private="false"  
//	save="false"  
//	desc="触发后效果"/> 
#define FIELD_PROP_RESOURCE_B			"ResourceB" 
 
//<property name="EffectTime"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="特效持续时间"/> 
#define FIELD_PROP_EFFECT_TIME			"EffectTime" 
 
//<property name="TrapRatio"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="伤害值加成(与该数值相乘)"/> 
#define FIELD_PROP_TRAP_RATIO			"TrapRatio" 
 
//<property name="DelayTime"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="延迟触发"/> 
#define FIELD_PROP_DELAY_TIME			"DelayTime" 
 
//<property name="ArenaFlag"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="竞技场标识"/> 
#define FIELD_PROP_ARENA_FLAG			"ArenaFlag" 
 
//<property name="ArenaChanceResetDate"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="竞技场次数的重置日期(YYYY-MM-DD)"/> 
#define FIELD_PROP_ARENA_CHANCE_RESET_DATE			"ArenaChanceResetDate" 
 
//<property name="ArenaChance"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="当日竞技场次数"/> 
#define FIELD_PROP_ARENA_CHANCE			"ArenaChance" 
 
//<property name="ArenaChanceUsed"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="当日竞技场已经挑战次数"/> 
#define FIELD_PROP_ARENA_CHANCE_USED			"ArenaChanceUsed" 
 
//<property name="ArenaChallengeeObj"  
// 	type="Object"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="挑战对象"/> 
#define FIELD_PROP_ARENA_CHALLENGEE_OBJ			"ArenaChallengeeObj" 
 
//<property name="ArenaChallengeeInfo"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="挑战对象信息"/> 
#define FIELD_PROP_ARENA_CHALLENGEE_INFO			"ArenaChallengeeInfo" 
 
//<property name="ArenaCurvRankList"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="上一次的竞技场榜"/> 
#define FIELD_PROP_ARENA_CURV_RANK_LIST			"ArenaCurvRankList" 
 
//<property name="ArenaSN"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前竞技场的流水号，每场战斗都会有新的编号生成"/> 
#define FIELD_PROP_ARENA_SN			"ArenaSN" 
 
//<property name="HighestArenaRank"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="获得的最高排名"/> 
#define FIELD_PROP_HIGHEST_ARENA_RANK			"HighestArenaRank" 
 
//<property name="BattleAbility"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="战斗力"/> 
#define FIELD_PROP_BATTLE_ABILITY			"BattleAbility" 
 
//<property name="HighestBattleAbility"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="历史最高战斗力"/> 
#define FIELD_PROP_HIGHEST_BATTLE_ABILITY			"HighestBattleAbility" 
 
//<property name="BossTrainNum"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="Boss训练次数"/> 
#define FIELD_PROP_BOSS_TRAIN_NUM			"BossTrainNum" 
 
//<property name="AsuraAddRate"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="修罗战场积分附加率"/> 
#define FIELD_PROP_ASURA_ADD_RATE			"AsuraAddRate" 
 
//<property name="AsuraCollectScore"  
// 	type="word"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="采集后,未提交的积分"/> 
#define FIELD_PROP_ASURA_COLLECT_SCORE			"AsuraCollectScore" 
 
//<property name="AsuraDeadNum"  
// 	type="byte"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="修罗战场死亡次数"/> 
#define FIELD_PROP_ASURA_DEAD_NUM			"AsuraDeadNum" 
 
//<property name="AsuraScore"  
// 	type="dword"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="修罗战场积分"/> 
#define FIELD_PROP_ASURA_SCORE			"AsuraScore" 
 
//<property name="GcfGuardDamVal"  
// 	type="dword"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="公会乱斗守卫总伤害"/> 
#define FIELD_PROP_GCF_GUARD_DAM_VAL			"GcfGuardDamVal" 
 
//<property name="GcfGuardScoreStage"  
// 	type="dword"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="公会乱斗守卫积分阶段"/> 
#define FIELD_PROP_GCF_GUARD_SCORE_STAGE			"GcfGuardScoreStage" 
 
//<property name="BeforeGroup"  
// 	type="word"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="进入分组前的分组号"/> 
#define FIELD_PROP_BEFORE_GROUP			"BeforeGroup" 
 
//<property name="SumFlower"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="历史收花"/> 
#define FIELD_PROP_SUM_FLOWER			"SumFlower" 
 
//<property name="WeekFlower"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="本周收花"/> 
#define FIELD_PROP_WEEK_FLOWER			"WeekFlower" 
 
//<property name="DailyIntimacyAward"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="亲密度领取状态"/> 
#define FIELD_PROP_DAILY_INTIMACY_AWARD			"DailyIntimacyAward" 
 
//<property name="GuildName"  
// 	type="widestr"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="公会名称"/> 
#define FIELD_PROP_GUILD_NAME			"GuildName" 
 
//<property name="GuildPosition"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="帮会中的职位"/> 
#define FIELD_PROP_GUILD_POSITION			"GuildPosition" 
 
//<property name="QuitGuildDate"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="退出公会日期"/> 
#define FIELD_PROP_QUIT_GUILD_DATE			"QuitGuildDate" 
 
//<property name="GuildListBeginRow"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="获取公会列表的起始行"/> 
#define FIELD_PROP_GUILD_LIST_BEGIN_ROW			"GuildListBeginRow" 
 
//<property name="GuildLevel"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="帮会等级"/> 
#define FIELD_PROP_GUILD_LEVEL			"GuildLevel" 
 
//<property name="OneKeyJoinTime"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="一键申请时间"/> 
#define FIELD_PROP_ONE_KEY_JOIN_TIME			"OneKeyJoinTime" 
 
//<property name="GuildMutualTimes"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="组织互助次数"/> 
#define FIELD_PROP_GUILD_MUTUAL_TIMES			"GuildMutualTimes" 
 
//<property name="GuildLastIssueMutualTimes"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="上一次发布组织互助时间"/> 
#define FIELD_PROP_GUILD_LAST_ISSUE_MUTUAL_TIMES			"GuildLastIssueMutualTimes" 
 
//<property name="GuildShortName"  
// 	type="widestr"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="组织短名"/> 
#define FIELD_PROP_GUILD_SHORT_NAME			"GuildShortName" 
 
//<property name="GuildIdentifying"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="组织标识"/> 
#define FIELD_PROP_GUILD_IDENTIFYING			"GuildIdentifying" 
 
//<property name="GuildDonateTimes"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="组织捐献次数"/> 
#define FIELD_PROP_GUILD_DONATE_TIMES			"GuildDonateTimes" 
 
//<property name="GuildDailyGif"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="领取组织礼包数"/> 
#define FIELD_PROP_GUILD_DAILY_GIF			"GuildDailyGif" 
 
//<property name="ActiveJade"  
// 	type="object"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前激活的玉珏"/> 
#define FIELD_PROP_ACTIVE_JADE			"ActiveJade" 
 
//<property name="ActiveJadeId"  
// 	type="string"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="当前激活的玉珏id"/> 
#define FIELD_PROP_ACTIVE_JADE_ID			"ActiveJadeId" 
 
//<property name="PlayerExp"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="经验"/> 
#define FIELD_PROP_PLAYER_EXP			"PlayerExp" 
 
//<property name="PlayerUpgradeExp"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="升级需要经验"/> 
#define FIELD_PROP_PLAYER_UPGRADE_EXP			"PlayerUpgradeExp" 
 
//<property name="ItemKNExpRate"  
// 	type="byte"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="物品附加的杀怪多倍经验"/> 
#define FIELD_PROP_ITEM_KNEXP_RATE			"ItemKNExpRate" 
 
//<property name="KNExpRate"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="杀怪经验比率"/> 
#define FIELD_PROP_KNEXP_RATE			"KNExpRate" 
 
//<property name="WorldLevelAddExp"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="世界等级当前附加经验值"/> 
#define FIELD_PROP_WORLD_LEVEL_ADD_EXP			"WorldLevelAddExp" 
 
//<property name="WorldLevelTotalExp"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="世界等级附加总经验值"/> 
#define FIELD_PROP_WORLD_LEVEL_TOTAL_EXP			"WorldLevelTotalExp" 
 
//<property name="AsynWait"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="传送门异步等待类型"/> 
#define FIELD_PROP_ASYN_WAIT			"AsynWait" 
 
//<property name="AsynWaitBeginTime"  
// 	type="int"  
//	public="false"  
//	private=""  
//	save="false"  
//	desc="传送门异步等待时间"/> 
#define FIELD_PROP_ASYN_WAIT_BEGIN_TIME			"AsynWaitBeginTime" 
 
//<property name="SkillPoint"  
// 	type="DWORD"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="技能点"/> 
#define FIELD_PROP_SKILL_POINT			"SkillPoint" 
 
//<property name="VipLevel"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="VIP等级"/> 
#define FIELD_PROP_VIP_LEVEL			"VipLevel" 
 
//<property name="VipExp"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="累计充值 可受道具影响"/> 
#define FIELD_PROP_VIP_EXP			"VipExp" 
 
//<property name="TotalPay"  
// 	type="float"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="累计充值 可受道具影响"/> 
#define FIELD_PROP_TOTAL_PAY			"TotalPay" 
 
//<property name="TotalPayReal"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="累计充值 真实充值额度"/> 
#define FIELD_PROP_TOTAL_PAY_REAL			"TotalPayReal" 
 
//<property name="PayTimes"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="总充值次数"/> 
#define FIELD_PROP_PAY_TIMES			"PayTimes" 
 
//<property name="BoughtVipItem"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="已经购买的VIP礼包"/> 
#define FIELD_PROP_BOUGHT_VIP_ITEM			"BoughtVipItem" 
 
//<property name="PickedVipItem"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="已经领取的VIP礼包"/> 
#define FIELD_PROP_PICKED_VIP_ITEM			"PickedVipItem" 
 
//<property name="WeekCardEndDate"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="周卡截止日期"/> 
#define FIELD_PROP_WEEK_CARD_END_DATE			"WeekCardEndDate" 
 
//<property name="MonthCardEndDate"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="月卡截止日期"/> 
#define FIELD_PROP_MONTH_CARD_END_DATE			"MonthCardEndDate" 
 
//<property name="QuarterCardEndDate"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="季卡截止日期"/> 
#define FIELD_PROP_QUARTER_CARD_END_DATE			"QuarterCardEndDate" 
 
//<property name="YearCardEndDate"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="年卡截止日期"/> 
#define FIELD_PROP_YEAR_CARD_END_DATE			"YearCardEndDate" 
 
//<property name="ForeverCardState"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="是否购买福利卡"/> 
#define FIELD_PROP_FOREVER_CARD_STATE			"ForeverCardState" 
 
//<property name="CardPickedFlag"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="每日领取标志(年卡，月卡，周卡...., 每一位表示一种卡, 1为领取状态)"/> 
#define FIELD_PROP_CARD_PICKED_FLAG			"CardPickedFlag" 
 
//<property name="VipPickedFlag"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="Vip每日礼包领取标识"/> 
#define FIELD_PROP_VIP_PICKED_FLAG			"VipPickedFlag" 
 
//<property name="PayedRebate"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="删档测试充值返利"/> 
#define FIELD_PROP_PAYED_REBATE			"PayedRebate" 
 
//<property name="PayedRebateType"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="删档测试充值返利类型，web和客户端定义"/> 
#define FIELD_PROP_PAYED_REBATE_TYPE			"PayedRebateType" 
 
//<property name="Invisible"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc=""/> 
#define FIELD_PROP_INVISIBLE			"Invisible" 
 
//<property name="Uid"  
// 	type="string"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="角色唯一标识"/> 
#define FIELD_PROP_UID			"Uid" 
 
//<property name="GroupID"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="分组场景组号"/> 
#define FIELD_PROP_GROUP_ID			"GroupID" 
 
//<property name="AccountID"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="帐号编号"/> 
#define FIELD_PROP_ACCOUNT_ID			"AccountID" 
 
//<property name="IssuerID"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="运营商编号"/> 
#define FIELD_PROP_ISSUER_ID			"IssuerID" 
 
//<property name="Account"  
// 	type="string"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="帐号"/> 
#define FIELD_PROP_ACCOUNT			"Account" 
 
//<property name="ServerID"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="服务器编号"/> 
#define FIELD_PROP_SERVER_ID			"ServerID" 
 
//<property name="Sex"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="性别 0:男性,1:女性"/> 
#define FIELD_PROP_SEX			"Sex" 
 
//<property name="Job"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="职业"/> 
#define FIELD_PROP_JOB			"Job" 
 
//<property name="LastObject"  
// 	type="Object"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="选中玩家"/> 
#define FIELD_PROP_LAST_OBJECT			"LastObject" 
 
//<property name="RoleCreateTime"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="创建时间"/> 
#define FIELD_PROP_ROLE_CREATE_TIME			"RoleCreateTime" 
 
//<property name="RoleLoginTime"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="登陆时间"/> 
#define FIELD_PROP_ROLE_LOGIN_TIME			"RoleLoginTime" 
 
//<property name="RoleLogoutTime"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="登出时间"/> 
#define FIELD_PROP_ROLE_LOGOUT_TIME			"RoleLogoutTime" 
 
//<property name="LoginDays"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="登陆天数"/> 
#define FIELD_PROP_LOGIN_DAYS			"LoginDays" 
 
//<property name="ClientType"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="客户端类型"/> 
#define FIELD_PROP_CLIENT_TYPE			"ClientType" 
 
//<property name="Token"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="mac地址"/> 
#define FIELD_PROP_TOKEN			"Token" 
 
//<property name="ServerName"  
// 	type="widestr"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="当前服务器名字"/> 
#define FIELD_PROP_SERVER_NAME			"ServerName" 
 
//<property name="AppPackage"  
// 	type="string"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="包名"/> 
#define FIELD_PROP_APP_PACKAGE			"AppPackage" 
 
//<property name="PrepareRole"  
// 	type="byte"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="预创建角色0:普通 1:机器人"/> 
#define FIELD_PROP_PREPARE_ROLE			"PrepareRole" 
 
//<property name="AccountUID"  
// 	type="string"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="某些第三方渠道UID"/> 
#define FIELD_PROP_ACCOUNT_UID			"AccountUID" 
 
//<property name="PlayerVersion"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="玩家版本号"/> 
#define FIELD_PROP_PLAYER_VERSION			"PlayerVersion" 
 
//<property name="CurAction"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="玩家当前行为"/> 
#define FIELD_PROP_CUR_ACTION			"CurAction" 
 
//<property name="StrenSuitPkg"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="强化套装属性包"/> 
#define FIELD_PROP_STREN_SUIT_PKG			"StrenSuitPkg" 
 
//<property name="SilenceTick"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="禁言时间（毫秒）"/> 
#define FIELD_PROP_SILENCE_TICK			"SilenceTick" 
 
//<property name="PKModel"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="PK模式"/> 
#define FIELD_PROP_PKMODEL			"PKModel" 
 
//<property name="CriminalValue"  
// 	type="dword"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="罪恶值"/> 
#define FIELD_PROP_CRIMINAL_VALUE			"CriminalValue" 
 
//<property name="CrimeState"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="罪恶状态"/> 
#define FIELD_PROP_CRIME_STATE			"CrimeState" 
 
//<property name="CrimieOnlineTime"  
// 	type="dword"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="罪恶状态在线时间"/> 
#define FIELD_PROP_CRIMIE_ONLINE_TIME			"CrimieOnlineTime" 
 
//<property name="DecCrimeScore"  
// 	type="dword"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="减少罪恶值的积分"/> 
#define FIELD_PROP_DEC_CRIME_SCORE			"DecCrimeScore" 
 
//<property name="ActivatedRide"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="当前骑乘的皮肤ID"/> 
#define FIELD_PROP_ACTIVATED_RIDE			"ActivatedRide" 
 
//<property name="CurMainTask"  
// 	type="dword"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="当前正在进行的主线任务ID"/> 
#define FIELD_PROP_CUR_MAIN_TASK			"CurMainTask" 
 
//<property name="TeamID"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="队伍编号"/> 
#define FIELD_PROP_TEAM_ID			"TeamID" 
 
//<property name="TeamCaptain"  
// 	type="widestr"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="队长"/> 
#define FIELD_PROP_TEAM_CAPTAIN			"TeamCaptain" 
 
//<property name="AutoMatch"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="自动匹配"/> 
#define FIELD_PROP_AUTO_MATCH			"AutoMatch" 
 
//<property name="WingLevel"  
// 	type="byte"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="翅膀等级"/> 
#define FIELD_PROP_WING_LEVEL			"WingLevel" 
 
//<property name="WingStep"  
// 	type="byte"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="翅膀阶级"/> 
#define FIELD_PROP_WING_STEP			"WingStep" 
 
//<property name="WingStepBless"  
// 	type="byte"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="翅膀升阶祝福值"/> 
#define FIELD_PROP_WING_STEP_BLESS			"WingStepBless" 
 
//<property name="CantMove"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="是否能够移动 0:可移动 1:不能移动"/> 
#define FIELD_PROP_CANT_MOVE			"CantMove" 
 
//<property name="CantRotate"  
// 	type="byte"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="是否能够转向 0:可转向 1:不能转向"/> 
#define FIELD_PROP_CANT_ROTATE			"CantRotate" 
 
//<property name="CantAttack"  
// 	type="byte"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="是否能够攻击"/> 
#define FIELD_PROP_CANT_ATTACK			"CantAttack" 
 
//<property name="CantBeAttack"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="是否能够被攻击 0:可被攻击 1：不可被攻击"/> 
#define FIELD_PROP_CANT_BE_ATTACK			"CantBeAttack" 
 
//<property name="CantUseSkill"  
// 	type="byte"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="是否能够使用技能"/> 
#define FIELD_PROP_CANT_USE_SKILL			"CantUseSkill" 
 
//<property name="ImmunoControlBuff"  
// 	type="byte"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="免疫控制类buff"/> 
#define FIELD_PROP_IMMUNO_CONTROL_BUFF			"ImmunoControlBuff" 
 
//<property name="Silent"  
// 	type="byte"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="沉默(不能释放技能,不过可以普通攻击)"/> 
#define FIELD_PROP_SILENT			"Silent" 
 
//<property name="FixBeDamaged"  
// 	type="byte"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="被固定数值伤害"/> 
#define FIELD_PROP_FIX_BE_DAMAGED			"FixBeDamaged" 
 
//<property name="GaintState"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="霸体状态"/> 
#define FIELD_PROP_GAINT_STATE			"GaintState" 
 
//<property name="StiffState"  
// 	type="byte"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="受击硬直状态"/> 
#define FIELD_PROP_STIFF_STATE			"StiffState" 
 
//<property name="Dead"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="死亡状态0:未死亡,1:已死亡"/> 
#define FIELD_PROP_DEAD			"Dead" 
 
//<property name="BuffDisplayID"  
// 	type="string"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="buff显示的id"/> 
#define FIELD_PROP_BUFF_DISPLAY_ID			"BuffDisplayID" 
 
//<property name="FightState"  
// 	type="byte"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="战斗状态 0否1是"/> 
#define FIELD_PROP_FIGHT_STATE			"FightState" 
 
//<property name="FightTime"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="开始战斗时间"/> 
#define FIELD_PROP_FIGHT_TIME			"FightTime" 
 
//<property name="FightActionState"  
// 	type="byte"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="战斗行为状态"/> 
#define FIELD_PROP_FIGHT_ACTION_STATE			"FightActionState" 
 
//<property name="Camp"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="阵营"/> 
#define FIELD_PROP_CAMP			"Camp" 
 
//<property name="HP"  
// 	type="int64"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="当前HP值"/> 
#define FIELD_PROP_HP			"HP" 
 
//<property name="MaxHP"  
// 	type="int64"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="最大气血值"/> 
#define FIELD_PROP_MAX_HP			"MaxHP" 
 
//<property name="MP"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="当前MP值"/> 
#define FIELD_PROP_MP			"MP" 
 
//<property name="MaxMP"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="最大MP值"/> 
#define FIELD_PROP_MAX_MP			"MaxMP" 
 
//<property name="PhysAttack"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="物理攻击"/> 
#define FIELD_PROP_PHYS_ATTACK			"PhysAttack" 
 
//<property name="MagicAttack"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="法术攻击"/> 
#define FIELD_PROP_MAGIC_ATTACK			"MagicAttack" 
 
//<property name="PhysDefend"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="物理防御"/> 
#define FIELD_PROP_PHYS_DEFEND			"PhysDefend" 
 
//<property name="MagicDefend"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="法术防御"/> 
#define FIELD_PROP_MAGIC_DEFEND			"MagicDefend" 
 
//<property name="Hit"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="命中"/> 
#define FIELD_PROP_HIT			"Hit" 
 
//<property name="Miss"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="闪避"/> 
#define FIELD_PROP_MISS			"Miss" 
 
//<property name="Crit"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="会心(暴击)"/> 
#define FIELD_PROP_CRIT			"Crit" 
 
//<property name="CritRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="会心率"/> 
#define FIELD_PROP_CRIT_RATE			"CritRate" 
 
//<property name="Toug"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="最终 会心抵抗"/> 
#define FIELD_PROP_TOUG			"Toug" 
 
//<property name="TougRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="会心抵抗率"/> 
#define FIELD_PROP_TOUG_RATE			"TougRate" 
 
//<property name="PhysPenetrate"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="物理穿透"/> 
#define FIELD_PROP_PHYS_PENETRATE			"PhysPenetrate" 
 
//<property name="MagicPenetrate"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="法术穿透"/> 
#define FIELD_PROP_MAGIC_PENETRATE			"MagicPenetrate" 
 
//<property name="AddHurtRate"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="增伤"/> 
#define FIELD_PROP_ADD_HURT_RATE			"AddHurtRate" 
 
//<property name="DecHurtRate"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="减伤"/> 
#define FIELD_PROP_DEC_HURT_RATE			"DecHurtRate" 
 
//<property name="FlowPrepareTime"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="准备时间"/> 
#define FIELD_PROP_FLOW_PREPARE_TIME			"FlowPrepareTime" 
 
//<property name="FlowHitTimes"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="打击次数"/> 
#define FIELD_PROP_FLOW_HIT_TIMES			"FlowHitTimes" 
 
//<property name="FlowLeadTime"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="引导持续时间"/> 
#define FIELD_PROP_FLOW_LEAD_TIME			"FlowLeadTime" 
 
//<property name="FlowLeadSepTime"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="引导间隔时间"/> 
#define FIELD_PROP_FLOW_LEAD_SEP_TIME			"FlowLeadSepTime" 
 
//<property name="FlowHits"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前命中次数(准备开始命中心跳时，取flow_hittime_rec表中哪一行的时间数值)"/> 
#define FIELD_PROP_FLOW_HITS			"FlowHits" 
 
//<property name="FlowCategory"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前使用的流程的分类名称"/> 
#define FIELD_PROP_FLOW_CATEGORY			"FlowCategory" 
 
//<property name="FlowType"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="流程类型：0：普通技能流程，1：引导技能流程"/> 
#define FIELD_PROP_FLOW_TYPE			"FlowType" 
 
//<property name="FlowBeginTime"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="流程开始的时间"/> 
#define FIELD_PROP_FLOW_BEGIN_TIME			"FlowBeginTime" 
 
//<property name="Flowing"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="是否在流程中"/> 
#define FIELD_PROP_FLOWING			"Flowing" 
 
//<property name="GaintVal"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="当前霸体值"/> 
#define FIELD_PROP_GAINT_VAL			"GaintVal" 
 
//<property name="MaxGaintVal"  
// 	type="dword"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="最大霸体值"/> 
#define FIELD_PROP_MAX_GAINT_VAL			"MaxGaintVal" 
 
//<property name="GaintValAdd"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="霸体附加值"/> 
#define FIELD_PROP_GAINT_VAL_ADD			"GaintValAdd" 
 
//<property name="GaintDecHurtRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="霸体减伤"/> 
#define FIELD_PROP_GAINT_DEC_HURT_RATE			"GaintDecHurtRate" 
 
//<property name="Str"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="力量"/> 
#define FIELD_PROP_STR			"Str" 
 
//<property name="Dex"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="敏捷"/> 
#define FIELD_PROP_DEX			"Dex" 
 
//<property name="Sta"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="体力"/> 
#define FIELD_PROP_STA			"Sta" 
 
//<property name="Ing"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="智力"/> 
#define FIELD_PROP_ING			"Ing" 
 
//<property name="Spi"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="精神"/> 
#define FIELD_PROP_SPI			"Spi" 
 
//<property name="TempHP"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="临时保存HP当前值"/> 
#define FIELD_PROP_TEMP_HP			"TempHP" 
 
//<property name="TempMP"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="临时保存MP当前值"/> 
#define FIELD_PROP_TEMP_MP			"TempMP" 
 
//<property name="HPAdd"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加气血"/> 
#define FIELD_PROP_HPADD			"HPAdd" 
 
//<property name="HPRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="气血增幅 2级属性"/> 
#define FIELD_PROP_HPRATE			"HPRate" 
 
//<property name="MPAdd"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加MP"/> 
#define FIELD_PROP_MPADD			"MPAdd" 
 
//<property name="MPRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加MP百分比"/> 
#define FIELD_PROP_MPRATE			"MPRate" 
 
//<property name="PhysAttackAdd"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加 物理攻击"/> 
#define FIELD_PROP_PHYS_ATTACK_ADD			"PhysAttackAdd" 
 
//<property name="MagicttackAdd"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加 法术攻击"/> 
#define FIELD_PROP_MAGICTTACK_ADD			"MagicttackAdd" 
 
//<property name="PhysAttackRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="物理攻击强度 2级属性"/> 
#define FIELD_PROP_PHYS_ATTACK_RATE			"PhysAttackRate" 
 
//<property name="MagicAttackRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="法术攻击强度 2级属性"/> 
#define FIELD_PROP_MAGIC_ATTACK_RATE			"MagicAttackRate" 
 
//<property name="PhysDefendAdd"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加 物理防御"/> 
#define FIELD_PROP_PHYS_DEFEND_ADD			"PhysDefendAdd" 
 
//<property name="MagicDefendAdd"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加 法术防御"/> 
#define FIELD_PROP_MAGIC_DEFEND_ADD			"MagicDefendAdd" 
 
//<property name="PhysDefendRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="物理防御强度 2级属性"/> 
#define FIELD_PROP_PHYS_DEFEND_RATE			"PhysDefendRate" 
 
//<property name="MagicDefendRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="法术防御强度 2级属性"/> 
#define FIELD_PROP_MAGIC_DEFEND_RATE			"MagicDefendRate" 
 
//<property name="PhysPenetrateAdd"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="物理穿透值"/> 
#define FIELD_PROP_PHYS_PENETRATE_ADD			"PhysPenetrateAdd" 
 
//<property name="PhysPenetrateRate"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="物理穿透率"/> 
#define FIELD_PROP_PHYS_PENETRATE_RATE			"PhysPenetrateRate" 
 
//<property name="MagicPenetrateAdd"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="法术穿透值"/> 
#define FIELD_PROP_MAGIC_PENETRATE_ADD			"MagicPenetrateAdd" 
 
//<property name="MagicPenetrateRate"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="法术穿透率"/> 
#define FIELD_PROP_MAGIC_PENETRATE_RATE			"MagicPenetrateRate" 
 
//<property name="HitAdd"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加 命中"/> 
#define FIELD_PROP_HIT_ADD			"HitAdd" 
 
//<property name="HitRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="命中率"/> 
#define FIELD_PROP_HIT_RATE			"HitRate" 
 
//<property name="MissAdd"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加 回避"/> 
#define FIELD_PROP_MISS_ADD			"MissAdd" 
 
//<property name="MissRate"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="回避率"/> 
#define FIELD_PROP_MISS_RATE			"MissRate" 
 
//<property name="CritAdd"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加 会心(暴击)"/> 
#define FIELD_PROP_CRIT_ADD			"CritAdd" 
 
//<property name="TougAdd"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附加 会心抵抗"/> 
#define FIELD_PROP_TOUG_ADD			"TougAdd" 
 
//<property name="CurSkill"  
// 	type="object"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前正在使用的技能"/> 
#define FIELD_PROP_CUR_SKILL			"CurSkill" 
 
//<property name="CurSkillUUID"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前正在使用技能的64位唯一标志"/> 
#define FIELD_PROP_CUR_SKILL_UUID			"CurSkillUUID" 
 
//<property name="PreSkillUUID"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="前一个使用技能的64位唯一标志"/> 
#define FIELD_PROP_PRE_SKILL_UUID			"PreSkillUUID" 
 
//<property name="CurSkillTarget"  
// 	type="object"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前的技能目标"/> 
#define FIELD_PROP_CUR_SKILL_TARGET			"CurSkillTarget" 
 
//<property name="CurSkillTargetX"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前的技能坐标"/> 
#define FIELD_PROP_CUR_SKILL_TARGET_X			"CurSkillTargetX" 
 
//<property name="CurSkillTargetY"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前的技能坐标"/> 
#define FIELD_PROP_CUR_SKILL_TARGET_Y			"CurSkillTargetY" 
 
//<property name="CurSkillTargetZ"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前的技能坐标"/> 
#define FIELD_PROP_CUR_SKILL_TARGET_Z			"CurSkillTargetZ" 
 
//<property name="CurSkillStartTime"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="当前技能的开始时间"/> 
#define FIELD_PROP_CUR_SKILL_START_TIME			"CurSkillStartTime" 
 
//<property name="MaxFlyEnergy"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="鏈�澶ц交鍔熺簿鍔涘��"/> 
#define FIELD_PROP_MAX_FLY_ENERGY			"MaxFlyEnergy" 
 
//<property name="FlyEnergyRestore"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="杞诲姛绮惧姏鍊煎洖澶嶉�熷害(/s)"/> 
#define FIELD_PROP_FLY_ENERGY_RESTORE			"FlyEnergyRestore" 
 
//<property name="FlyEnergy"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="杞诲姛绮惧姏鍊�"/> 
#define FIELD_PROP_FLY_ENERGY			"FlyEnergy" 
 
//<property name="JumpSec"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="褰撳墠杞诲姛娈垫暟"/> 
#define FIELD_PROP_JUMP_SEC			"JumpSec" 
 
//<property name="JumpHeight"  
// 	type="float"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="璺宠穬楂樺害"/> 
#define FIELD_PROP_JUMP_HEIGHT			"JumpHeight" 
 
//<property name="CantUseFlySkill"  
// 	type="byte"  
//	public="flase"  
//	private="true"  
//	save="false"  
//	desc="鏄惁鍙互浣跨敤杞诲姛"/> 
#define FIELD_PROP_CANT_USE_FLY_SKILL			"CantUseFlySkill" 
 
//<property name="MoveSpeed"  
// 	type="float"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="移动速度"/> 
#define FIELD_PROP_MOVE_SPEED			"MoveSpeed" 
 
//<property name="RunSpeed"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="跑动速度"/> 
#define FIELD_PROP_RUN_SPEED			"RunSpeed" 
 
//<property name="RunSpeedAdd"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="移动速度的改变"/> 
#define FIELD_PROP_RUN_SPEED_ADD			"RunSpeedAdd" 
 
//<property name="RollSpeed"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="旋转速度"/> 
#define FIELD_PROP_ROLL_SPEED			"RollSpeed" 
 
//<property name="Weapon"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="武器"/> 
#define FIELD_PROP_WEAPON			"Weapon" 
 
//<property name="Cloth"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc=""/> 
#define FIELD_PROP_CLOTH			"Cloth" 
 
//<property name="Hair"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc=""/> 
#define FIELD_PROP_HAIR			"Hair" 
 
//<property name="Wing"  
// 	type="int"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc=""/> 
#define FIELD_PROP_WING			"Wing" 
 
//<property name="WinCamp"  
// 	type="byte"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="获胜的阵营"/> 
#define FIELD_PROP_WIN_CAMP			"WinCamp" 
 
//<property name="AsuraBattleId"  
// 	type="byte"  
//	public="true"  
//	private="false"  
//	save="false"  
//	desc="活动标志(2:中午 3:晚上)"/> 
#define FIELD_PROP_ASURA_BATTLE_ID			"AsuraBattleId" 
 
//<property name="RedMVP"  
// 	type="widestr"  
//	public="true"  
//	private="false"  
//	save="false"  
//	desc="红方mvp"/> 
#define FIELD_PROP_RED_MVP			"RedMVP" 
 
//<property name="BlueMVP"  
// 	type="widestr"  
//	public="true"  
//	private="false"  
//	save="false"  
//	desc="蓝方mvp"/> 
#define FIELD_PROP_BLUE_MVP			"BlueMVP" 
 
//<property name="AsuraBoss"  
// 	type="object"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="修罗战场boss"/> 
#define FIELD_PROP_ASURA_BOSS			"AsuraBoss" 
 
//<property name="ID"  
// 	type="int"  
//	public="true"  
//	private="false"  
//	save="false"  
//	desc="场景基础资源名称"/> 
#define FIELD_PROP_ID			"ID" 
 
//<property name="VisualRange"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="场景内玩家之间的可视范围"/> 
#define FIELD_PROP_VISUAL_RANGE			"VisualRange" 
 
//<property name="LocallLevelLim"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="本国进场景限制"/> 
#define FIELD_PROP_LOCALL_LEVEL_LIM			"LocallLevelLim" 
 
//<property name="AttackType"  
// 	type="byte"  
//	public="true"  
//	private="false"  
//	save="false"  
//	desc="场景攻击类型"/> 
#define FIELD_PROP_ATTACK_TYPE			"AttackType" 
 
//<property name="ProtoSceneID"  
// 	type="int"  
//	public="true"  
//	private="false"  
//	save="false"  
//	desc="原型场景ID"/> 
#define FIELD_PROP_PROTO_SCENE_ID			"ProtoSceneID" 
 
//<property name="CanShowRide"  
// 	type="byte"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="可否显示坐骑 0：不显示 1：显示"/> 
#define FIELD_PROP_CAN_SHOW_RIDE			"CanShowRide" 
 
//<property name="CanFly"  
// 	type="byte"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="可否飞行 0不可飞行 1可飞行"/> 
#define FIELD_PROP_CAN_FLY			"CanFly" 
 
//<property name="WorldBossVisitFlag"  
// 	type="int"  
//	public="true"  
//	private="false"  
//	save="false"  
//	desc="世界boss活动状态标识"/> 
#define FIELD_PROP_WORLD_BOSS_VISIT_FLAG			"WorldBossVisitFlag" 
 
//<property name="WorldBossCreateTime"  
// 	type="int64"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="世界boss创建时间"/> 
#define FIELD_PROP_WORLD_BOSS_CREATE_TIME			"WorldBossCreateTime" 
 
//<property name="LifeTime"  
// 	type="int"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="持续时间(ms) 如果为0,则持久有效"/> 
#define FIELD_PROP_LIFE_TIME			"LifeTime" 
 
//<property name="Sender"  
// 	type="object"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="BUFFER的施加者"/> 
#define FIELD_PROP_SENDER			"Sender" 
 
//<property name="AddTime"  
// 	type="int64"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="BUFFER添加的时间 单位s(time_t)"/> 
#define FIELD_PROP_ADD_TIME			"AddTime" 
 
//<property name="Active"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="BUFFER是否有效"/> 
#define FIELD_PROP_ACTIVE			"Active" 
 
//<property name="Counter"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="BUFFER已计次的次数"/> 
#define FIELD_PROP_COUNTER			"Counter" 
 
//<property name="Timer"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="BUFFER已存在的时间 单位ms"/> 
#define FIELD_PROP_TIMER			"Timer" 
 
//<property name="HurtCount"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="技能总命中打击次数,用于计算伤害"/> 
#define FIELD_PROP_HURT_COUNT			"HurtCount" 
 
//<property name="CurHits"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="技能当前打击次数"/> 
#define FIELD_PROP_CUR_HITS			"CurHits" 
 
//<property name="SkillAttackAdd"  
// 	type="int"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="技能攻击力"/> 
#define FIELD_PROP_SKILL_ATTACK_ADD			"SkillAttackAdd" 
 
//<property name="SkillDamageRate"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="技能伤害倍率"/> 
#define FIELD_PROP_SKILL_DAMAGE_RATE			"SkillDamageRate" 
 
//<property name="SkillFormula"  
// 	type="float"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="技能公式结算的值"/> 
#define FIELD_PROP_SKILL_FORMULA			"SkillFormula" 
 
//<property name="Fixed"  
// 	type="byte"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc=""/> 
#define FIELD_PROP_FIXED			"Fixed" 
 
//<property name="Photo"  
// 	type="string"  
//	public="true"  
//	private="true"  
//	save="true"  
//	desc="图像"/> 
#define FIELD_PROP_PHOTO			"Photo" 
 
//<property name="State"  
// 	type="string"  
//	public="true"  
//	private="true"  
//	save="false"  
//	desc="状态"/> 
#define FIELD_PROP_STATE			"State" 
 
 
// 表定义============================================================== 
 
 
//<record name="AIFindPathRec" 
//	cols="2"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="寻路表"/> 
 
#define FIELD_RECORD_AIFIND_PATH_REC			"AIFindPathRec" 
// AIFindPathRec column index define 
enum COLUMNS_OF_AIFIND_PATH_REC 
{ 
 
	// <column type="float" desc="x"/> 
	COLUMN_AIFIND_PATH_REC_0000, 
 
	// <column type="float" desc="z"/> 
	COLUMN_AIFIND_PATH_REC_0001, 
 
}; 
 
 
//<record name="RoundPathListRec" 
//	cols="2"  
//	maxrows="128"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="绕开障碍物所走过的格子"/> 
 
#define FIELD_RECORD_ROUND_PATH_LIST_REC			"RoundPathListRec" 
// RoundPathListRec column index define 
enum COLUMNS_OF_ROUND_PATH_LIST_REC 
{ 
 
	// <column type="dword" desc="格子索引"/> 
	COLUMN_ROUND_PATH_LIST_REC_0000, 
 
	// <column type="dword" desc="重复走过的次数"/> 
	COLUMN_ROUND_PATH_LIST_REC_0001, 
 
}; 
 
 
//<record name="FindRoundPathRec" 
//	cols="2"  
//	maxrows="128"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="动态寻路路径"/> 
 
#define FIELD_RECORD_FIND_ROUND_PATH_REC			"FindRoundPathRec" 
// FindRoundPathRec column index define 
enum COLUMNS_OF_FIND_ROUND_PATH_REC 
{ 
 
	// <column type="dword" desc="格子索引"/> 
	COLUMN_FIND_ROUND_PATH_REC_0000, 
 
	// <column type="dword" desc="被访问次数"/> 
	COLUMN_FIND_ROUND_PATH_REC_0001, 
 
}; 
 
 
//<record name="CantArriveGridListRec" 
//	cols="1"  
//	maxrows="128"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="无法到达的格子列表"/> 
 
#define FIELD_RECORD_CANT_ARRIVE_GRID_LIST_REC			"CantArriveGridListRec" 
// CantArriveGridListRec column index define 
enum COLUMNS_OF_CANT_ARRIVE_GRID_LIST_REC 
{ 
 
	// <column type="dword" desc="格子索引"/> 
	COLUMN_CANT_ARRIVE_GRID_LIST_REC_0000, 
 
}; 
 
 
//<record name="ride_skin_rec" 
//	cols="3"  
//	maxrows="100"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="坐骑皮肤表"/> 
 
#define FIELD_RECORD_RIDE_SKIN_REC			"ride_skin_rec" 
// ride_skin_rec column index define 
enum COLUMNS_OF_RIDE_SKIN_REC 
{ 
 
	// <column type="int" desc="皮肤编号"/> 
	COLUMN_RIDE_SKIN_REC_ID, 
 
	// <column type="byte" desc="状态"/> 
	COLUMN_RIDE_SKIN_REC_STATE, 
 
	// <column type="byte" desc="新皮肤标识"/> 
	COLUMN_RIDE_SKIN_REC_FLAG, 
 
}; 
 
 
//<record name="PatrolPointRec" 
//	cols="3"  
//	maxrows="64"  
//	public=""  
//	private=""  
//	save="false"  
//	desc="定点巡逻表"/> 
 
#define FIELD_RECORD_PATROL_POINT_REC			"PatrolPointRec" 
// PatrolPointRec column index define 
enum COLUMNS_OF_PATROL_POINT_REC 
{ 
 
	// <column type="float" desc=""/> 
	COLUMN_PATROL_POINT_REC_X, 
 
	// <column type="float" desc=""/> 
	COLUMN_PATROL_POINT_REC_Z, 
 
	// <column type="dword" desc="停留时间，单位ms"/> 
	COLUMN_PATROL_POINT_REC_STAY_TIME, 
 
}; 
 
 
//<record name="AttackerList" 
//	cols="4"  
//	maxrows="2000"  
//	public=""  
//	private=""  
//	save="false"  
//	desc="攻击对象表"/> 
 
#define FIELD_RECORD_ATTACKER_LIST			"AttackerList" 
// AttackerList column index define 
enum COLUMNS_OF_ATTACKER_LIST 
{ 
 
	// <column type="object" desc="对象"/> 
	COLUMN_ATTACKER_LIST_0000, 
 
	// <column type="dword" desc="仇恨值"/> 
	COLUMN_ATTACKER_LIST_0001, 
 
	// <column type="int64" desc="最近攻击时间"/> 
	COLUMN_ATTACKER_LIST_0002, 
 
	// <column type="int64" desc="第一次攻击时间"/> 
	COLUMN_ATTACKER_LIST_0003, 
 
}; 
 
 
//<record name="FindPathPointList" 
//	cols="2"  
//	maxrows="64"  
//	public=""  
//	private=""  
//	save="false"  
//	desc="寻路路径点表"/> 
 
#define FIELD_RECORD_FIND_PATH_POINT_LIST			"FindPathPointList" 
// FindPathPointList column index define 
enum COLUMNS_OF_FIND_PATH_POINT_LIST 
{ 
 
	// <column type="float" desc="X坐标"/> 
	COLUMN_FIND_PATH_POINT_LIST_X, 
 
	// <column type="float" desc="Y坐标"/> 
	COLUMN_FIND_PATH_POINT_LIST_Y, 
 
}; 
 
 
//<record name="boss_skill_rec" 
//	cols="2"  
//	maxrows="10"  
//	public=""  
//	private=""  
//	save="false"  
//	desc="NPC技能表"/> 
 
#define FIELD_RECORD_BOSS_SKILL_REC			"boss_skill_rec" 
// boss_skill_rec column index define 
enum COLUMNS_OF_BOSS_SKILL_REC 
{ 
 
	// <column type="string" desc="技能ID"/> 
	COLUMN_BOSS_SKILL_REC_0000, 
 
	// <column type="int" desc="当前权值"/> 
	COLUMN_BOSS_SKILL_REC_0001, 
 
}; 
 
 
//<record name="asuraboss_attack_list_rec" 
//	cols="3"  
//	maxrows="1500"  
//	public=""  
//	private=""  
//	save="false"  
//	desc="攻击对象表"/> 
 
#define FIELD_RECORD_ASURABOSS_ATTACK_LIST_REC			"asuraboss_attack_list_rec" 
// asuraboss_attack_list_rec column index define 
enum COLUMNS_OF_ASURABOSS_ATTACK_LIST_REC 
{ 
 
	// <column type="widestr" desc="名字"/> 
	COLUMN_ASURABOSS_ATTACK_LIST_REC_NAME, 
 
	// <column type="dword" desc="阵营"/> 
	COLUMN_ASURABOSS_ATTACK_LIST_REC_CAMP, 
 
	// <column type="dword" desc="伤害"/> 
	COLUMN_ASURABOSS_ATTACK_LIST_REC_DAMVAL, 
 
}; 
 
 
//<record name="boss_pick_player_rec" 
//	cols="1"  
//	maxrows="200"  
//	public=""  
//	private=""  
//	save="false"  
//	desc="获得奖励记录表"/> 
 
#define FIELD_RECORD_BOSS_PICK_PLAYER_REC			"boss_pick_player_rec" 
// boss_pick_player_rec column index define 
enum COLUMNS_OF_BOSS_PICK_PLAYER_REC 
{ 
 
	// <column type="object" desc=""/> 
	COLUMN_BOSS_PICK_PLAYER_REC_PLAYER, 
 
}; 
 
 
//<record name="object_list_rec" 
//	cols="1"  
//	maxrows="256"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="本生成器生成的对象"/> 
 
#define FIELD_RECORD_OBJECT_LIST_REC			"object_list_rec" 
// object_list_rec column index define 
enum COLUMNS_OF_OBJECT_LIST_REC 
{ 
 
	// <column type="object" desc=""/> 
	COLUMN_OBJECT_LIST_REC_0000, 
 
}; 
 
 
//<record name="damage_rec" 
//	cols="3"  
//	maxrows="100"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="伤害表"/> 
 
#define FIELD_RECORD_DAMAGE_REC			"damage_rec" 
// damage_rec column index define 
enum COLUMNS_OF_DAMAGE_REC 
{ 
 
	// <column type="widestr" desc="玩家名字"/> 
	COLUMN_DAMAGE_REC_PLAYER_NAME, 
 
	// <column type="byte" desc="职业"/> 
	COLUMN_DAMAGE_REC_JOB, 
 
	// <column type="dword" desc="总伤害"/> 
	COLUMN_DAMAGE_REC_DAMAGE, 
 
}; 
 
 
//<record name="position_info_rec" 
//	cols="7"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="对象随机位置信息"/> 
 
#define FIELD_RECORD_POSITION_INFO_REC			"position_info_rec" 
// position_info_rec column index define 
enum COLUMNS_OF_POSITION_INFO_REC 
{ 
 
	// <column type="float" desc="X"/> 
	COLUMN_POSITION_INFO_REC_0000, 
 
	// <column type="float" desc="Y"/> 
	COLUMN_POSITION_INFO_REC_0001, 
 
	// <column type="float" desc="Z"/> 
	COLUMN_POSITION_INFO_REC_0002, 
 
	// <column type="float" desc="Orient"/> 
	COLUMN_POSITION_INFO_REC_0003, 
 
	// <column type="int" desc="used:是否已被使用"/> 
	COLUMN_POSITION_INFO_REC_0004, 
 
	// <column type="int64" desc="上次销毁时间"/> 
	COLUMN_POSITION_INFO_REC_0005, 
 
	// <column type="float" desc="随机刷新半径"/> 
	COLUMN_POSITION_INFO_REC_0006, 
 
}; 
 
 
//<record name="SpringInfoRec" 
//	cols="2"  
//	maxrows="64"  
//	public=""  
//	private=""  
//	save="false"  
//	desc="触发目标信息表"/> 
 
#define FIELD_RECORD_SPRING_INFO_REC			"SpringInfoRec" 
// SpringInfoRec column index define 
enum COLUMNS_OF_SPRING_INFO_REC 
{ 
 
	// <column type="object" desc="对象号"/> 
	COLUMN_SPRING_INFO_REC_0000, 
 
	// <column type="string" desc="增加的BUFF"/> 
	COLUMN_SPRING_INFO_REC_0001, 
 
}; 
 
 
//<record name="worldboss_attack_list_rec" 
//	cols="2"  
//	maxrows="1500"  
//	public=""  
//	private=""  
//	save="false"  
//	desc="攻击对象表"/> 
 
#define FIELD_RECORD_WORLDBOSS_ATTACK_LIST_REC			"worldboss_attack_list_rec" 
// worldboss_attack_list_rec column index define 
enum COLUMNS_OF_WORLDBOSS_ATTACK_LIST_REC 
{ 
 
	// <column type="widestr" desc=""/> 
	COLUMN_WORLDBOSS_ATTACK_LIST_REC_对象名字, 
 
	// <column type="dword" desc=""/> 
	COLUMN_WORLDBOSS_ATTACK_LIST_REC_总伤害值, 
 
}; 
 
 
//<record name="activate_function_rec" 
//	cols="1"  
//	maxrows="500"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="功能激活表"/> 
 
#define FIELD_RECORD_ACTIVATE_FUNCTION_REC			"activate_function_rec" 
// activate_function_rec column index define 
enum COLUMNS_OF_ACTIVATE_FUNCTION_REC 
{ 
 
	// <column type="byte" desc="功能类型"/> 
	COLUMN_ACTIVATE_FUNCTION_REC_TYPE, 
 
}; 
 
 
//<record name="arena_fight_result" 
//	cols="5"  
//	maxrows="20"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="竞技场战斗结果"/> 
 
#define FIELD_RECORD_ARENA_FIGHT_RESULT			"arena_fight_result" 
// arena_fight_result column index define 
enum COLUMNS_OF_ARENA_FIGHT_RESULT 
{ 
 
	// <column type="int" desc="战斗结果"/> 
	COLUMN_ARENA_FIGHT_RESULT_RESULT, 
 
	// <column type="widestr" desc="敌方名字"/> 
	COLUMN_ARENA_FIGHT_RESULT_NAME, 
 
	// <column type="int" desc="战斗前排名"/> 
	COLUMN_ARENA_FIGHT_RESULT_OLDRANK, 
 
	// <column type="int" desc="战斗后排名"/> 
	COLUMN_ARENA_FIGHT_RESULT_CURRANK, 
 
	// <column type="int64" desc="战斗时间"/> 
	COLUMN_ARENA_FIGHT_RESULT_TIME, 
 
}; 
 
 
//<record name="battlle_ability_rec" 
//	cols="2"  
//	maxrows="100"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="战斗力统计表"/> 
 
#define FIELD_RECORD_BATTLLE_ABILITY_REC			"battlle_ability_rec" 
// battlle_ability_rec column index define 
enum COLUMNS_OF_BATTLLE_ABILITY_REC 
{ 
 
	// <column type="byte" desc="战斗力类型"/> 
	COLUMN_BATTLLE_ABILITY_REC_BATYPE, 
 
	// <column type="float" desc="战斗力数值"/> 
	COLUMN_BATTLLE_ABILITY_REC_BABVALUE, 
 
}; 
 
 
//<record name="asura_fight_rec" 
//	cols="4"  
//	maxrows="1024"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="阵营战斗数据"/> 
 
#define FIELD_RECORD_ASURA_FIGHT_REC			"asura_fight_rec" 
// asura_fight_rec column index define 
enum COLUMNS_OF_ASURA_FIGHT_REC 
{ 
 
	// <column type="dword" desc="积分"/> 
	COLUMN_ASURA_FIGHT_REC_SCORE, 
 
	// <column type="dword" desc="杀人数"/> 
	COLUMN_ASURA_FIGHT_REC_KILL, 
 
	// <column type="dword" desc="死亡数"/> 
	COLUMN_ASURA_FIGHT_REC_DEAD, 
 
	// <column type="dword" desc="助攻数"/> 
	COLUMN_ASURA_FIGHT_REC_ASSIST, 
 
}; 
 
 
//<record name="gcf_score_rec" 
//	cols="5"  
//	maxrows="1024"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="公会乱斗积分表"/> 
 
#define FIELD_RECORD_GCF_SCORE_REC			"gcf_score_rec" 
// gcf_score_rec column index define 
enum COLUMNS_OF_GCF_SCORE_REC 
{ 
 
	// <column type="byte" desc="标识"/> 
	COLUMN_GCF_SCORE_REC_KEY, 
 
	// <column type="dword" desc="积分"/> 
	COLUMN_GCF_SCORE_REC_SCORE, 
 
	// <column type="dword" desc="杀人数"/> 
	COLUMN_GCF_SCORE_REC_KILL, 
 
	// <column type="dword" desc="死亡数"/> 
	COLUMN_GCF_SCORE_REC_DEAD, 
 
	// <column type="dword" desc="助攻数"/> 
	COLUMN_GCF_SCORE_REC_ASSIST, 
 
}; 
 
 
//<record name="capital_rec" 
//	cols="3"  
//	maxrows="30"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="资产表"/> 
 
#define FIELD_RECORD_CAPITAL_REC			"capital_rec" 
// capital_rec column index define 
enum COLUMNS_OF_CAPITAL_REC 
{ 
 
	// <column type="string" desc="资产名称"/> 
	COLUMN_CAPITAL_REC_0000, 
 
	// <column type="byte" desc="资产类型"/> 
	COLUMN_CAPITAL_REC_0001, 
 
	// <column type="int64" desc="资产数量"/> 
	COLUMN_CAPITAL_REC_0002, 
 
}; 
 
 
//<record name="dayToplimitCapital" 
//	cols="3"  
//	maxrows="30"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="今日资产增加记录表"/> 
 
#define FIELD_RECORD_DAY_TOPLIMIT_CAPITAL			"dayToplimitCapital" 
// dayToplimitCapital column index define 
enum COLUMNS_OF_DAY_TOPLIMIT_CAPITAL 
{ 
 
	// <column type="string" desc="资产名称"/> 
	COLUMN_DAY_TOPLIMIT_CAPITAL_0000, 
 
	// <column type="byte" desc="资产类型"/> 
	COLUMN_DAY_TOPLIMIT_CAPITAL_0001, 
 
	// <column type="int64" desc="增加资产数量"/> 
	COLUMN_DAY_TOPLIMIT_CAPITAL_0002, 
 
}; 
 
 
//<record name="valid_damage_rec" 
//	cols="2"  
//	maxrows="1000"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="有效伤害记录表"/> 
 
#define FIELD_RECORD_VALID_DAMAGE_REC			"valid_damage_rec" 
// valid_damage_rec column index define 
enum COLUMNS_OF_VALID_DAMAGE_REC 
{ 
 
	// <column type="string" desc="玩家uid"/> 
	COLUMN_VALID_DAMAGE_REC_UID, 
 
	// <column type="int64" desc="伤害时间"/> 
	COLUMN_VALID_DAMAGE_REC_TIME, 
 
}; 
 
 
//<record name="valid_kill_rec" 
//	cols="2"  
//	maxrows="1000"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="有效击杀玩家记录表"/> 
 
#define FIELD_RECORD_VALID_KILL_REC			"valid_kill_rec" 
// valid_kill_rec column index define 
enum COLUMNS_OF_VALID_KILL_REC 
{ 
 
	// <column type="string" desc="玩家uid"/> 
	COLUMN_VALID_KILL_REC_UID, 
 
	// <column type="int64" desc="击杀时间"/> 
	COLUMN_VALID_KILL_REC_TIME, 
 
}; 
 
 
//<record name="EquStrengthenRec" 
//	cols="8"  
//	maxrows="6"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="装备格子强化等级"/> 
 
#define FIELD_RECORD_EQU_STRENGTHEN_REC			"EquStrengthenRec" 
// EquStrengthenRec column index define 
enum COLUMNS_OF_EQU_STRENGTHEN_REC 
{ 
 
	// <column type="BYTE" desc="装备格子索引(1-6)"/> 
	COLUMN_EQU_STRENGTHEN_REC_0000, 
 
	// <column type="WORD" desc="强化等级"/> 
	COLUMN_EQU_STRENGTHEN_REC_0001, 
 
	// <column type="STRING" desc="每件装备镶嵌的灵魂,没有用''占位表示"/> 
	COLUMN_EQU_STRENGTHEN_REC_0002, 
 
	// <column type="WORD" desc="灵魂吞噬数量"/> 
	COLUMN_EQU_STRENGTHEN_REC_0003, 
 
	// <column type="STRING" desc="每件装备镶嵌的宝石1,没有用''占位表示"/> 
	COLUMN_EQU_STRENGTHEN_REC_0004, 
 
	// <column type="STRING" desc="每件装备镶嵌的宝石2,没有用''占位表示"/> 
	COLUMN_EQU_STRENGTHEN_REC_0005, 
 
	// <column type="STRING" desc="每件装备镶嵌的宝石3,没有用''占位表示"/> 
	COLUMN_EQU_STRENGTHEN_REC_0006, 
 
	// <column type="STRING" desc="每件装备镶嵌的宝石4,没有用''占位表示"/> 
	COLUMN_EQU_STRENGTHEN_REC_0007, 
 
}; 
 
 
//<record name="BaptiseRec" 
//	cols="3"  
//	maxrows="6"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="洗炼表"/> 
 
#define FIELD_RECORD_BAPTISE_REC			"BaptiseRec" 
// BaptiseRec column index define 
enum COLUMNS_OF_BAPTISE_REC 
{ 
 
	// <column type="BYTE" desc="装备格子索引(1-6)"/> 
	COLUMN_BAPTISE_REC_POS, 
 
	// <column type="STRING" desc="属性洗练值（json转化的字符串）"/> 
	COLUMN_BAPTISE_REC_VALUE_INFO, 
 
	// <column type="STRING" desc="属性锁定状态（json转化的字符串）"/> 
	COLUMN_BAPTISE_REC_LOCK_INFO, 
 
}; 
 
 
//<record name="BaptiseResultRec" 
//	cols="2"  
//	maxrows="6"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="装备洗炼结果表"/> 
 
#define FIELD_RECORD_BAPTISE_RESULT_REC			"BaptiseResultRec" 
// BaptiseResultRec column index define 
enum COLUMNS_OF_BAPTISE_RESULT_REC 
{ 
 
	// <column type="BYTE" desc="装备格子索引(1-6)"/> 
	COLUMN_BAPTISE_RESULT_REC_POS, 
 
	// <column type="STRING" desc="洗练结果（json转化的字符串）"/> 
	COLUMN_BAPTISE_RESULT_REC_RESULT_INFO, 
 
}; 
 
 
//<record name="friend_rec" 
//	cols="21"  
//	maxrows="50"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="好友列表"/> 
 
#define FIELD_RECORD_FRIEND_REC			"friend_rec" 
// friend_rec column index define 
enum COLUMNS_OF_FRIEND_REC 
{ 
 
	// <column type="string" desc="对方UID"/> 
	COLUMN_FRIEND_REC_UID, 
 
	// <column type="widestr" desc="对方名称"/> 
	COLUMN_FRIEND_REC_NAME, 
 
	// <column type="word" desc="对方等级"/> 
	COLUMN_FRIEND_REC_LEVEL, 
 
	// <column type="byte" desc="对方职业"/> 
	COLUMN_FRIEND_REC_JOB, 
 
	// <column type="byte" desc="对方性别"/> 
	COLUMN_FRIEND_REC_SEX, 
 
	// <column type="dword" desc="战斗力"/> 
	COLUMN_FRIEND_REC_POWER, 
 
	// <column type="widestr" desc="帮会名称"/> 
	COLUMN_FRIEND_REC_GUILD_NAME, 
 
	// <column type="byte" desc="对方在线状态"/> 
	COLUMN_FRIEND_REC_ONLINE, 
 
	// <column type="int64" desc="最后一次离线时间"/> 
	COLUMN_FRIEND_REC_LAST_TIME, 
 
	// <column type="word" desc="亲密度等级"/> 
	COLUMN_FRIEND_REC_INTIMACY_LEVEL, 
 
	// <column type="dword" desc="亲密度"/> 
	COLUMN_FRIEND_REC_INTIMACY_EXP, 
 
	// <column type="dword" desc="历史收花"/> 
	COLUMN_FRIEND_REC_SUM_FLOWER, 
 
	// <column type="dword" desc="本周收花"/> 
	COLUMN_FRIEND_REC_WEEK_FLOWER, 
 
	// <column type="dword" desc="我的送花数"/> 
	COLUMN_FRIEND_REC_SEND_FLOWER, 
 
	// <column type="dword" desc="我的收花数"/> 
	COLUMN_FRIEND_REC_RECEIVE_FLOWER, 
 
	// <column type="dword" desc="好友teamID"/> 
	COLUMN_FRIEND_REC_TEAM_ID, 
 
	// <column type="byte" desc="关系"/> 
	COLUMN_FRIEND_REC_RELATION, 
 
	// <column type="widestr" desc="称谓"/> 
	COLUMN_FRIEND_REC_TITLE, 
 
	// <column type="int64" desc="寻求援助时间"/> 
	COLUMN_FRIEND_REC_SEEK_SWORN_AID_TIME, 
 
	// <column type="dword" desc="vip等级"/> 
	COLUMN_FRIEND_REC_VIP_LEVEL, 
 
	// <column type="dword" desc="每日增加亲密度值"/> 
	COLUMN_FRIEND_REC_DAILY_INTIMACY, 
 
}; 
 
 
//<record name="blacklist_rec" 
//	cols="4"  
//	maxrows="50"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="黑名单列表"/> 
 
#define FIELD_RECORD_BLACKLIST_REC			"blacklist_rec" 
// blacklist_rec column index define 
enum COLUMNS_OF_BLACKLIST_REC 
{ 
 
	// <column type="string" desc="对方UID"/> 
	COLUMN_BLACKLIST_REC_UID, 
 
	// <column type="widestr" desc="对方名称"/> 
	COLUMN_BLACKLIST_REC_NAME, 
 
	// <column type="byte" desc="对方职业"/> 
	COLUMN_BLACKLIST_REC_JOB, 
 
	// <column type="byte" desc="对方性别"/> 
	COLUMN_BLACKLIST_REC_SEX, 
 
}; 
 
 
//<record name="enemy_rec" 
//	cols="12"  
//	maxrows="50"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="仇人列表"/> 
 
#define FIELD_RECORD_ENEMY_REC			"enemy_rec" 
// enemy_rec column index define 
enum COLUMNS_OF_ENEMY_REC 
{ 
 
	// <column type="string" desc="仇人UID"/> 
	COLUMN_ENEMY_REC_UID, 
 
	// <column type="widestr" desc="对方名称"/> 
	COLUMN_ENEMY_REC_NAME, 
 
	// <column type="word" desc="对方等级"/> 
	COLUMN_ENEMY_REC_LEVEL, 
 
	// <column type="byte" desc="对方职业"/> 
	COLUMN_ENEMY_REC_JOB, 
 
	// <column type="byte" desc="对方性别"/> 
	COLUMN_ENEMY_REC_SEX, 
 
	// <column type="dword" desc="战斗力"/> 
	COLUMN_ENEMY_REC_POWER, 
 
	// <column type="widestr" desc="帮会名称"/> 
	COLUMN_ENEMY_REC_GUILD_NAME, 
 
	// <column type="string" desc="玩家账号"/> 
	COLUMN_ENEMY_REC_ACCOUNT, 
 
	// <column type="byte" desc="对方在线状态"/> 
	COLUMN_ENEMY_REC_ONLINE, 
 
	// <column type="dword" desc="仇恨值"/> 
	COLUMN_ENEMY_REC_HATRED, 
 
	// <column type="int64" desc="被杀时间"/> 
	COLUMN_ENEMY_REC_BE_KILL_TIME, 
 
	// <column type="dword" desc="vip等级"/> 
	COLUMN_ENEMY_REC_VIP_LEVEL, 
 
}; 
 
 
//<record name="friend_apply_rec" 
//	cols="9"  
//	maxrows="20"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="好友申请未处理表"/> 
 
#define FIELD_RECORD_FRIEND_APPLY_REC			"friend_apply_rec" 
// friend_apply_rec column index define 
enum COLUMNS_OF_FRIEND_APPLY_REC 
{ 
 
	// <column type="string" desc="对方UID"/> 
	COLUMN_FRIEND_APPLY_REC_UID, 
 
	// <column type="widestr" desc="对方名称"/> 
	COLUMN_FRIEND_APPLY_REC_NAME, 
 
	// <column type="word" desc="对方等级"/> 
	COLUMN_FRIEND_APPLY_REC_LEVEL, 
 
	// <column type="byte" desc="对方职业"/> 
	COLUMN_FRIEND_APPLY_REC_JOB, 
 
	// <column type="byte" desc="对方性别"/> 
	COLUMN_FRIEND_APPLY_REC_SEX, 
 
	// <column type="dword" desc="战斗力"/> 
	COLUMN_FRIEND_APPLY_REC_POWER, 
 
	// <column type="widestr" desc="帮会名称"/> 
	COLUMN_FRIEND_APPLY_REC_GUILD_NAME, 
 
	// <column type="byte" desc="0-好友申请，1-伙伴申请"/> 
	COLUMN_FRIEND_APPLY_REC_APPLY_TYPE, 
 
	// <column type="dword" desc="vip等级"/> 
	COLUMN_FRIEND_APPLY_REC_VIP_LEVEL, 
 
}; 
 
 
//<record name="friend_recommend_mid_rec" 
//	cols="8"  
//	maxrows="100"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="符合好友推荐条件的表(不保存)"/> 
 
#define FIELD_RECORD_FRIEND_RECOMMEND_MID_REC			"friend_recommend_mid_rec" 
// friend_recommend_mid_rec column index define 
enum COLUMNS_OF_FRIEND_RECOMMEND_MID_REC 
{ 
 
	// <column type="string" desc="对方UID"/> 
	COLUMN_FRIEND_RECOMMEND_MID_REC_UID, 
 
	// <column type="widestr" desc="对方名称"/> 
	COLUMN_FRIEND_RECOMMEND_MID_REC_NAME, 
 
	// <column type="word" desc="对方等级"/> 
	COLUMN_FRIEND_RECOMMEND_MID_REC_LEVEL, 
 
	// <column type="byte" desc="对方职业"/> 
	COLUMN_FRIEND_RECOMMEND_MID_REC_JOB, 
 
	// <column type="byte" desc="对方性别"/> 
	COLUMN_FRIEND_RECOMMEND_MID_REC_SEX, 
 
	// <column type="dword" desc="战斗力"/> 
	COLUMN_FRIEND_RECOMMEND_MID_REC_POWER, 
 
	// <column type="widestr" desc="帮会名称"/> 
	COLUMN_FRIEND_RECOMMEND_MID_REC_GUILD_NAME, 
 
	// <column type="dword" desc="vip等级"/> 
	COLUMN_FRIEND_RECOMMEND_MID_REC_VIP_LEVEL, 
 
}; 
 
 
//<record name="friend_invitation_send_rec" 
//	cols="1"  
//	maxrows="100"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="已经发出的邀请(不保存)"/> 
 
#define FIELD_RECORD_FRIEND_INVITATION_SEND_REC			"friend_invitation_send_rec" 
// friend_invitation_send_rec column index define 
enum COLUMNS_OF_FRIEND_INVITATION_SEND_REC 
{ 
 
	// <column type="string" desc="对方UID"/> 
	COLUMN_FRIEND_INVITATION_SEND_REC_UID, 
 
}; 
 
 
//<record name="friend_recommend_rec" 
//	cols="8"  
//	maxrows="5"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="好友推荐表(不保存)"/> 
 
#define FIELD_RECORD_FRIEND_RECOMMEND_REC			"friend_recommend_rec" 
// friend_recommend_rec column index define 
enum COLUMNS_OF_FRIEND_RECOMMEND_REC 
{ 
 
	// <column type="string" desc="对方UID"/> 
	COLUMN_FRIEND_RECOMMEND_REC_UID, 
 
	// <column type="widestr" desc="对方名称"/> 
	COLUMN_FRIEND_RECOMMEND_REC_NAME, 
 
	// <column type="word" desc="对方等级"/> 
	COLUMN_FRIEND_RECOMMEND_REC_LEVEL, 
 
	// <column type="byte" desc="对方职业"/> 
	COLUMN_FRIEND_RECOMMEND_REC_JOB, 
 
	// <column type="byte" desc="对方性别"/> 
	COLUMN_FRIEND_RECOMMEND_REC_SEX, 
 
	// <column type="dword" desc="战斗力"/> 
	COLUMN_FRIEND_RECOMMEND_REC_POWER, 
 
	// <column type="widestr" desc="帮会名称"/> 
	COLUMN_FRIEND_RECOMMEND_REC_GUILD_NAME, 
 
	// <column type="dword" desc="vip等级"/> 
	COLUMN_FRIEND_RECOMMEND_REC_VIP_LEVEL, 
 
}; 
 
 
//<record name="nearby_recommend_rec" 
//	cols="9"  
//	maxrows="20"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附近推荐表(不保存)"/> 
 
#define FIELD_RECORD_NEARBY_RECOMMEND_REC			"nearby_recommend_rec" 
// nearby_recommend_rec column index define 
enum COLUMNS_OF_NEARBY_RECOMMEND_REC 
{ 
 
	// <column type="string" desc="对方UID"/> 
	COLUMN_NEARBY_RECOMMEND_REC_UID, 
 
	// <column type="widestr" desc="对方名称"/> 
	COLUMN_NEARBY_RECOMMEND_REC_NAME, 
 
	// <column type="word" desc="对方等级"/> 
	COLUMN_NEARBY_RECOMMEND_REC_LEVEL, 
 
	// <column type="byte" desc="对方职业"/> 
	COLUMN_NEARBY_RECOMMEND_REC_JOB, 
 
	// <column type="byte" desc="对方性别"/> 
	COLUMN_NEARBY_RECOMMEND_REC_SEX, 
 
	// <column type="dword" desc="战斗力"/> 
	COLUMN_NEARBY_RECOMMEND_REC_POWER, 
 
	// <column type="widestr" desc="帮会名称"/> 
	COLUMN_NEARBY_RECOMMEND_REC_GUILD_NAME, 
 
	// <column type="dword" desc="好友teamID"/> 
	COLUMN_NEARBY_RECOMMEND_REC_TEAM_ID, 
 
	// <column type="dword" desc="vip等级"/> 
	COLUMN_NEARBY_RECOMMEND_REC_VIP_LEVEL, 
 
}; 
 
 
//<record name="system_recommend_rec" 
//	cols="9"  
//	maxrows="20"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="系统推荐好友(不保存)"/> 
 
#define FIELD_RECORD_SYSTEM_RECOMMEND_REC			"system_recommend_rec" 
// system_recommend_rec column index define 
enum COLUMNS_OF_SYSTEM_RECOMMEND_REC 
{ 
 
	// <column type="string" desc="对方UID"/> 
	COLUMN_SYSTEM_RECOMMEND_REC_UID, 
 
	// <column type="widestr" desc="对方名称"/> 
	COLUMN_SYSTEM_RECOMMEND_REC_NAME, 
 
	// <column type="word" desc="对方等级"/> 
	COLUMN_SYSTEM_RECOMMEND_REC_LEVEL, 
 
	// <column type="byte" desc="对方职业"/> 
	COLUMN_SYSTEM_RECOMMEND_REC_JOB, 
 
	// <column type="byte" desc="对方性别"/> 
	COLUMN_SYSTEM_RECOMMEND_REC_SEX, 
 
	// <column type="dword" desc="战斗力"/> 
	COLUMN_SYSTEM_RECOMMEND_REC_POWER, 
 
	// <column type="widestr" desc="帮会名称"/> 
	COLUMN_SYSTEM_RECOMMEND_REC_GUILD_NAME, 
 
	// <column type="dword" desc="好友teamID"/> 
	COLUMN_SYSTEM_RECOMMEND_REC_TEAM_ID, 
 
	// <column type="dword" desc="vip等级"/> 
	COLUMN_SYSTEM_RECOMMEND_REC_VIP_LEVEL, 
 
}; 
 
 
//<record name="friend_receive_flower_rec" 
//	cols="5"  
//	maxrows="20"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="收花记录表"/> 
 
#define FIELD_RECORD_FRIEND_RECEIVE_FLOWER_REC			"friend_receive_flower_rec" 
// friend_receive_flower_rec column index define 
enum COLUMNS_OF_FRIEND_RECEIVE_FLOWER_REC 
{ 
 
	// <column type="string" desc="对方UID"/> 
	COLUMN_FRIEND_RECEIVE_FLOWER_REC_UID, 
 
	// <column type="widestr" desc="对方名称"/> 
	COLUMN_FRIEND_RECEIVE_FLOWER_REC_NAME, 
 
	// <column type="word" desc="送花数"/> 
	COLUMN_FRIEND_RECEIVE_FLOWER_REC_COUNT, 
 
	// <column type="byte" desc="对方职业"/> 
	COLUMN_FRIEND_RECEIVE_FLOWER_REC_JOB, 
 
	// <column type="byte" desc="对方性别"/> 
	COLUMN_FRIEND_RECEIVE_FLOWER_REC_SEX, 
 
}; 
 
 
//<record name="friend_send_flower_rec" 
//	cols="5"  
//	maxrows="20"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="送花记录表"/> 
 
#define FIELD_RECORD_FRIEND_SEND_FLOWER_REC			"friend_send_flower_rec" 
// friend_send_flower_rec column index define 
enum COLUMNS_OF_FRIEND_SEND_FLOWER_REC 
{ 
 
	// <column type="string" desc="对方UID"/> 
	COLUMN_FRIEND_SEND_FLOWER_REC_UID, 
 
	// <column type="widestr" desc="对方名称"/> 
	COLUMN_FRIEND_SEND_FLOWER_REC_NAME, 
 
	// <column type="word" desc="送花数"/> 
	COLUMN_FRIEND_SEND_FLOWER_REC_COUNT, 
 
	// <column type="byte" desc="对方职业"/> 
	COLUMN_FRIEND_SEND_FLOWER_REC_JOB, 
 
	// <column type="byte" desc="对方性别"/> 
	COLUMN_FRIEND_SEND_FLOWER_REC_SEX, 
 
}; 
 
 
//<record name="friend_applay_sworn_rec" 
//	cols="1"  
//	maxrows="50"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="请求结义"/> 
 
#define FIELD_RECORD_FRIEND_APPLAY_SWORN_REC			"friend_applay_sworn_rec" 
// friend_applay_sworn_rec column index define 
enum COLUMNS_OF_FRIEND_APPLAY_SWORN_REC 
{ 
 
	// <column type="widestr" desc="对方Name"/> 
	COLUMN_FRIEND_APPLAY_SWORN_REC_NAME, 
 
}; 
 
 
//<record name="guild_skill_rec" 
//	cols="1"  
//	maxrows="100"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="组织技能"/> 
 
#define FIELD_RECORD_GUILD_SKILL_REC			"guild_skill_rec" 
// guild_skill_rec column index define 
enum COLUMNS_OF_GUILD_SKILL_REC 
{ 
 
	// <column type="dword" desc="互助索引"/> 
	COLUMN_GUILD_SKILL_REC_0000, 
 
}; 
 
 
//<record name="guild_teach_req_rec" 
//	cols="3"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="传功请求表"/> 
 
#define FIELD_RECORD_GUILD_TEACH_REQ_REC			"guild_teach_req_rec" 
// guild_teach_req_rec column index define 
enum COLUMNS_OF_GUILD_TEACH_REQ_REC 
{ 
 
	// <column type="widestr" desc="对方昵称"/> 
	COLUMN_GUILD_TEACH_REQ_REC_NAME, 
 
	// <column type="dword" desc="请求类型"/> 
	COLUMN_GUILD_TEACH_REQ_REC_TYPE, 
 
	// <column type="int64" desc="请求时间"/> 
	COLUMN_GUILD_TEACH_REQ_REC_TIME, 
 
}; 
 
 
//<record name="shop_manager_rec" 
//	cols="7"  
//	maxrows="5"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="商店管理表"/> 
 
#define FIELD_RECORD_SHOP_MANAGER_REC			"shop_manager_rec" 
// shop_manager_rec column index define 
enum COLUMNS_OF_SHOP_MANAGER_REC 
{ 
 
	// <column type="byte" desc="商店类型"/> 
	COLUMN_SHOP_MANAGER_REC_0000, 
 
	// <column type="byte" desc="当前刷新次数"/> 
	COLUMN_SHOP_MANAGER_REC_0001, 
 
	// <column type="byte" desc="当前付费刷新次数"/> 
	COLUMN_SHOP_MANAGER_REC_0002, 
 
	// <column type="byte" desc="免费刷新最大次数"/> 
	COLUMN_SHOP_MANAGER_REC_0003, 
 
	// <column type="byte" desc="商店使用的货币类型"/> 
	COLUMN_SHOP_MANAGER_REC_0004, 
 
	// <column type="dword" desc="刷新价格"/> 
	COLUMN_SHOP_MANAGER_REC_0005, 
 
	// <column type="byte" desc="是否第一次手动刷新"/> 
	COLUMN_SHOP_MANAGER_REC_0006, 
 
}; 
 
 
//<record name="shop_gold_rec" 
//	cols="6"  
//	maxrows="12"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="元宝商店刷新物品表"/> 
 
#define FIELD_RECORD_SHOP_GOLD_REC			"shop_gold_rec" 
// shop_gold_rec column index define 
enum COLUMNS_OF_SHOP_GOLD_REC 
{ 
 
	// <column type="string" desc="物品ID"/> 
	COLUMN_SHOP_GOLD_REC_0000, 
 
	// <column type="dword" desc="物品品质"/> 
	COLUMN_SHOP_GOLD_REC_0001, 
 
	// <column type="dword" desc="物品数目"/> 
	COLUMN_SHOP_GOLD_REC_0002, 
 
	// <column type="dword" desc="价格"/> 
	COLUMN_SHOP_GOLD_REC_0003, 
 
	// <column type="dword" desc="元宝价格"/> 
	COLUMN_SHOP_GOLD_REC_0004, 
 
	// <column type="float" desc="折扣"/> 
	COLUMN_SHOP_GOLD_REC_0005, 
 
}; 
 
 
//<record name="shop_commerce_purchase_record" 
//	cols="3"  
//	maxrows="1024"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="购买商会物品记录"/> 
 
#define FIELD_RECORD_SHOP_COMMERCE_PURCHASE_RECORD			"shop_commerce_purchase_record" 
// shop_commerce_purchase_record column index define 
enum COLUMNS_OF_SHOP_COMMERCE_PURCHASE_RECORD 
{ 
 
	// <column type="string" desc="物品索引"/> 
	COLUMN_SHOP_COMMERCE_PURCHASE_RECORD_ITEM_ID, 
 
	// <column type="dword" desc="已经购买的个数"/> 
	COLUMN_SHOP_COMMERCE_PURCHASE_RECORD_PUSRCHASE_NUM, 
 
	// <column type="dword" desc="已经出售的个数"/> 
	COLUMN_SHOP_COMMERCE_PURCHASE_RECORD_SALED_NUM, 
 
}; 
 
 
//<record name="shop_buy_plus_item_record" 
//	cols="4"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="购买运营礼包记录"/> 
 
#define FIELD_RECORD_SHOP_BUY_PLUS_ITEM_RECORD			"shop_buy_plus_item_record" 
// shop_buy_plus_item_record column index define 
enum COLUMNS_OF_SHOP_BUY_PLUS_ITEM_RECORD 
{ 
 
	// <column type="string" desc="物品索引"/> 
	COLUMN_SHOP_BUY_PLUS_ITEM_RECORD_0000, 
 
	// <column type="dword" desc="已经购买的个数"/> 
	COLUMN_SHOP_BUY_PLUS_ITEM_RECORD_0001, 
 
	// <column type="int64" desc="时间戳"/> 
	COLUMN_SHOP_BUY_PLUS_ITEM_RECORD_0002, 
 
	// <column type="dword" desc="刷新类型"/> 
	COLUMN_SHOP_BUY_PLUS_ITEM_RECORD_0003, 
 
}; 
 
 
//<record name="payed_order" 
//	cols="8"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="购买支付记录(记录最近的1024条)"/> 
 
#define FIELD_RECORD_PAYED_ORDER			"payed_order" 
// payed_order column index define 
enum COLUMNS_OF_PAYED_ORDER 
{ 
 
	// <column type="string" desc="订单id"/> 
	COLUMN_PAYED_ORDER_ORDER_ID, 
 
	// <column type="string" desc="商品id"/> 
	COLUMN_PAYED_ORDER_PRODUCT_ID, 
 
	// <column type="string" desc="商品数据"/> 
	COLUMN_PAYED_ORDER_ITEMS, 
 
	// <column type="string" desc="赠送物品"/> 
	COLUMN_PAYED_ORDER_REWARDS, 
 
	// <column type="string" desc="首充礼包"/> 
	COLUMN_PAYED_ORDER_GIFTS, 
 
	// <column type="float" desc="支付的金额"/> 
	COLUMN_PAYED_ORDER_AMOUNT, 
 
	// <column type="int64" desc="订单创建时间"/> 
	COLUMN_PAYED_ORDER_CREATE_TIME, 
 
	// <column type="int64" desc="订单完成时间"/> 
	COLUMN_PAYED_ORDER_PAYED_TIME, 
 
}; 
 
 
//<record name="payed_products" 
//	cols="4"  
//	maxrows="256"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="购买过的物品"/> 
 
#define FIELD_RECORD_PAYED_PRODUCTS			"payed_products" 
// payed_products column index define 
enum COLUMNS_OF_PAYED_PRODUCTS 
{ 
 
	// <column type="string" desc="商品id"/> 
	COLUMN_PAYED_PRODUCTS_PRODUCT_ID, 
 
	// <column type="int" desc="总购买次数"/> 
	COLUMN_PAYED_PRODUCTS_TATAL_TIMES, 
 
	// <column type="int" desc="购买次数"/> 
	COLUMN_PAYED_PRODUCTS_PURCHASE_TIMES, 
 
	// <column type="int64" desc="最后一次支付完成的下单时间"/> 
	COLUMN_PAYED_PRODUCTS_ORDER_TIME, 
 
}; 
 
 
//<record name="item_drop_record" 
//	cols="3"  
//	maxrows="30"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="保存玩家掉落物品"/> 
 
#define FIELD_RECORD_ITEM_DROP_RECORD			"item_drop_record" 
// item_drop_record column index define 
enum COLUMNS_OF_ITEM_DROP_RECORD 
{ 
 
	// <column type="string" desc="掉落物品id"/> 
	COLUMN_ITEM_DROP_RECORD_0000, 
 
	// <column type="int64" desc="掉落物品数量"/> 
	COLUMN_ITEM_DROP_RECORD_0001, 
 
	// <column type="WORD" desc="掉落物品cd时间"/> 
	COLUMN_ITEM_DROP_RECORD_0002, 
 
}; 
 
 
//<record name="system_mail_rec" 
//	cols="12"  
//	maxrows="256"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="邮件表"/> 
 
#define FIELD_RECORD_SYSTEM_MAIL_REC			"system_mail_rec" 
// system_mail_rec column index define 
enum COLUMNS_OF_SYSTEM_MAIL_REC 
{ 
 
	// <column type="string" desc="信件流水号"/> 
	COLUMN_SYSTEM_MAIL_REC_0000, 
 
	// <column type="widestr" desc="发件人"/> 
	COLUMN_SYSTEM_MAIL_REC_0001, 
 
	// <column type="int64" desc="存在时间"/> 
	COLUMN_SYSTEM_MAIL_REC_0002, 
 
	// <column type="int64" desc="邮寄时间"/> 
	COLUMN_SYSTEM_MAIL_REC_0003, 
 
	// <column type="byte" desc="信件类型"/> 
	COLUMN_SYSTEM_MAIL_REC_0004, 
 
	// <column type="widestr" desc="信件题目"/> 
	COLUMN_SYSTEM_MAIL_REC_0005, 
 
	// <column type="widestr" desc="信件内容"/> 
	COLUMN_SYSTEM_MAIL_REC_0006, 
 
	// <column type="string" desc="金钱附件"/> 
	COLUMN_SYSTEM_MAIL_REC_0007, 
 
	// <column type="string" desc="物品附件"/> 
	COLUMN_SYSTEM_MAIL_REC_0008, 
 
	// <column type="byte" desc="已读标记"/> 
	COLUMN_SYSTEM_MAIL_REC_0009, 
 
	// <column type="byte" desc="附件提取标记"/> 
	COLUMN_SYSTEM_MAIL_REC_0010, 
 
	// <column type="string" desc="属性附件"/> 
	COLUMN_SYSTEM_MAIL_REC_0011, 
 
}; 
 
 
//<record name="pvp_attacker_list" 
//	cols="1"  
//	maxrows="512"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="攻击者列表"/> 
 
#define FIELD_RECORD_PVP_ATTACKER_LIST			"pvp_attacker_list" 
// pvp_attacker_list column index define 
enum COLUMNS_OF_PVP_ATTACKER_LIST 
{ 
 
	// <column type="object" desc="玩家对象"/> 
	COLUMN_PVP_ATTACKER_LIST_OBJECT, 
 
}; 
 
 
//<record name="reset_timer_rec" 
//	cols="4"  
//	maxrows="250"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="定时刷新表"/> 
 
#define FIELD_RECORD_RESET_TIMER_REC			"reset_timer_rec" 
// reset_timer_rec column index define 
enum COLUMNS_OF_RESET_TIMER_REC 
{ 
 
	// <column type="dword" desc="刷新类型"/> 
	COLUMN_RESET_TIMER_REC_TYPE, 
 
	// <column type="word" desc="上次刷新weekday"/> 
	COLUMN_RESET_TIMER_REC_WEEKDAY, 
 
	// <column type="word" desc="上次刷新Hour"/> 
	COLUMN_RESET_TIMER_REC_HOUR, 
 
	// <column type="double" desc="上次刷新Date"/> 
	COLUMN_RESET_TIMER_REC_DATE, 
 
}; 
 
 
//<record name="TaskProgressRec" 
//	cols="3"  
//	maxrows="512"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="任务进度表"/> 
 
#define FIELD_RECORD_TASK_PROGRESS_REC			"TaskProgressRec" 
// TaskProgressRec column index define 
enum COLUMNS_OF_TASK_PROGRESS_REC 
{ 
 
	// <column type="dword" desc="任务编号"/> 
	COLUMN_TASK_PROGRESS_REC_ID, 
 
	// <column type="word" desc="任务状态"/> 
	COLUMN_TASK_PROGRESS_REC_STATUS, 
 
	// <column type="string" desc="当前进度"/> 
	COLUMN_TASK_PROGRESS_REC_PROGRESS, 
 
}; 
 
 
//<record name="TaskSubmitRec" 
//	cols="1"  
//	maxrows="5000"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="已提交任务表"/> 
 
#define FIELD_RECORD_TASK_SUBMIT_REC			"TaskSubmitRec" 
// TaskSubmitRec column index define 
enum COLUMNS_OF_TASK_SUBMIT_REC 
{ 
 
	// <column type="dword" desc="任务编号"/> 
	COLUMN_TASK_SUBMIT_REC_ID, 
 
}; 
 
 
//<record name="TaskNpcRec" 
//	cols="1"  
//	maxrows="512"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="任务NPC记录表"/> 
 
#define FIELD_RECORD_TASK_NPC_REC			"TaskNpcRec" 
// TaskNpcRec column index define 
enum COLUMNS_OF_TASK_NPC_REC 
{ 
 
	// <column type="object" desc="任务NPC对象"/> 
	COLUMN_TASK_NPC_REC_OBJECT, 
 
}; 
 
 
//<record name="TaskConfigRec" 
//	cols="2"  
//	maxrows="50"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="任务配置表"/> 
 
#define FIELD_RECORD_TASK_CONFIG_REC			"TaskConfigRec" 
// TaskConfigRec column index define 
enum COLUMNS_OF_TASK_CONFIG_REC 
{ 
 
	// <column type="word" desc="任务类型"/> 
	COLUMN_TASK_CONFIG_REC_TYPE, 
 
	// <column type="word" desc="已完成次数"/> 
	COLUMN_TASK_CONFIG_REC_COUNT, 
 
}; 
 
 
//<record name="team_rec" 
//	cols="22"  
//	maxrows="4"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="队伍成员列表"/> 
 
#define FIELD_RECORD_TEAM_REC			"team_rec" 
// team_rec column index define 
enum COLUMNS_OF_TEAM_REC 
{ 
 
	// <column type="string" desc="UID"/> 
	COLUMN_TEAM_REC_0000, 
 
	// <column type="widestr" desc="队员名"/> 
	COLUMN_TEAM_REC_0001, 
 
	// <column type="dword" desc="等级"/> 
	COLUMN_TEAM_REC_0002, 
 
	// <column type="byte" desc="职业"/> 
	COLUMN_TEAM_REC_0003, 
 
	// <column type="byte" desc="性别"/> 
	COLUMN_TEAM_REC_0004, 
 
	// <column type="dword" desc="战斗力"/> 
	COLUMN_TEAM_REC_0005, 
 
	// <column type="int64" desc="上次离线时间"/> 
	COLUMN_TEAM_REC_0006, 
 
	// <column type="byte" desc="队伍的职位"/> 
	COLUMN_TEAM_REC_0007, 
 
	// <column type="dword" desc="场景编号"/> 
	COLUMN_TEAM_REC_0008, 
 
	// <column type="string" desc="Buffers"/> 
	COLUMN_TEAM_REC_0009, 
 
	// <column type="int64" desc="HP"/> 
	COLUMN_TEAM_REC_0010, 
 
	// <column type="widestr" desc="公会名称"/> 
	COLUMN_TEAM_REC_0011, 
 
	// <column type="int64" desc="MaxHP"/> 
	COLUMN_TEAM_REC_0012, 
 
	// <column type="byte" desc="跟随状态"/> 
	COLUMN_TEAM_REC_0013, 
 
	// <column type="byte" desc="准备状态"/> 
	COLUMN_TEAM_REC_0014, 
 
	// <column type="dword" desc="副本ID"/> 
	COLUMN_TEAM_REC_0015, 
 
	// <column type="byte" desc="Online"/> 
	COLUMN_TEAM_REC_0016, 
 
	// <column type="float" desc="x坐标"/> 
	COLUMN_TEAM_REC_0017, 
 
	// <column type="float" desc="z坐标"/> 
	COLUMN_TEAM_REC_0018, 
 
	// <column type="byte" desc="能否被踢出队伍"/> 
	COLUMN_TEAM_REC_0019, 
 
	// <column type="byte" desc="战斗状态"/> 
	COLUMN_TEAM_REC_0020, 
 
	// <column type="word" desc="vip"/> 
	COLUMN_TEAM_REC_0021, 
 
}; 
 
 
//<record name="nearby_team_rec" 
//	cols="8"  
//	maxrows="10"  
//	public="false"  
//	private="true"  
//	save="false"  
//	desc="附近队伍表"/> 
 
#define FIELD_RECORD_NEARBY_TEAM_REC			"nearby_team_rec" 
// nearby_team_rec column index define 
enum COLUMNS_OF_NEARBY_TEAM_REC 
{ 
 
	// <column type="byte" desc="队伍编号"/> 
	COLUMN_NEARBY_TEAM_REC_0000, 
 
	// <column type="widestr" desc="队长名字"/> 
	COLUMN_NEARBY_TEAM_REC_0001, 
 
	// <column type="dword" desc="队长等级"/> 
	COLUMN_NEARBY_TEAM_REC_0002, 
 
	// <column type="byte" desc="队长职业"/> 
	COLUMN_NEARBY_TEAM_REC_0003, 
 
	// <column type="byte" desc="队长性别"/> 
	COLUMN_NEARBY_TEAM_REC_0004, 
 
	// <column type="dword" desc="队长战斗力"/> 
	COLUMN_NEARBY_TEAM_REC_0005, 
 
	// <column type="dword" desc="队伍目标"/> 
	COLUMN_NEARBY_TEAM_REC_0006, 
 
	// <column type="byte" desc="队伍人数"/> 
	COLUMN_NEARBY_TEAM_REC_0007, 
 
}; 
 
 
//<record name="request_rec" 
//	cols="9"  
//	maxrows="30"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="添加请求者表(记录当前玩家所发送过的所有请求)"/> 
 
#define FIELD_RECORD_REQUEST_REC			"request_rec" 
// request_rec column index define 
enum COLUMNS_OF_REQUEST_REC 
{ 
 
	// <column type="byte" desc="请求索引"/> 
	COLUMN_REQUEST_REC_0000, 
 
	// <column type="widestr" desc="请求者姓名"/> 
	COLUMN_REQUEST_REC_0001, 
 
	// <column type="byte" desc="请求类型"/> 
	COLUMN_REQUEST_REC_0002, 
 
	// <column type="byte" desc="请求时间"/> 
	COLUMN_REQUEST_REC_0003, 
 
	// <column type="byte" desc="请求状态"/> 
	COLUMN_REQUEST_REC_0004, 
 
	// <column type="byte" desc="职业"/> 
	COLUMN_REQUEST_REC_0005, 
 
	// <column type="dword" desc="战斗力"/> 
	COLUMN_REQUEST_REC_0006, 
 
	// <column type="word" desc="等级"/> 
	COLUMN_REQUEST_REC_0007, 
 
	// <column type="word" desc="性别"/> 
	COLUMN_REQUEST_REC_0008, 
 
}; 
 
 
//<record name="buff_add_rec" 
//	cols="2"  
//	maxrows="256"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="加buff统计表"/> 
 
#define FIELD_RECORD_BUFF_ADD_REC			"buff_add_rec" 
// buff_add_rec column index define 
enum COLUMNS_OF_BUFF_ADD_REC 
{ 
 
	// <column type="int64" desc="加buff的时间"/> 
	COLUMN_BUFF_ADD_REC_0000, 
 
	// <column type="dword" desc="debuff的类型"/> 
	COLUMN_BUFF_ADD_REC_0001, 
 
}; 
 
 
//<record name="flow_hittime_rec" 
//	cols="2"  
//	maxrows="64"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc=""/> 
 
#define FIELD_RECORD_FLOW_HITTIME_REC			"flow_hittime_rec" 
// flow_hittime_rec column index define 
enum COLUMNS_OF_FLOW_HITTIME_REC 
{ 
 
	// <column type="word" desc=""/> 
	COLUMN_FLOW_HITTIME_REC_0000, 
 
	// <column type="word" desc=""/> 
	COLUMN_FLOW_HITTIME_REC_0001, 
 
}; 
 
 
//<record name="flow_mutli_hit_timer_rec" 
//	cols="2"  
//	maxrows="64"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc=""/> 
 
#define FIELD_RECORD_FLOW_MUTLI_HIT_TIMER_REC			"flow_mutli_hit_timer_rec" 
// flow_mutli_hit_timer_rec column index define 
enum COLUMNS_OF_FLOW_MUTLI_HIT_TIMER_REC 
{ 
 
	// <column type="int64" desc="开始时间"/> 
	COLUMN_FLOW_MUTLI_HIT_TIMER_REC_0000, 
 
	// <column type="int64" desc="定时时间"/> 
	COLUMN_FLOW_MUTLI_HIT_TIMER_REC_0001, 
 
}; 
 
 
//<record name="cooldown_rec" 
//	cols="3"  
//	maxrows="36"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="冷却表"/> 
 
#define FIELD_RECORD_COOLDOWN_REC			"cooldown_rec" 
// cooldown_rec column index define 
enum COLUMNS_OF_COOLDOWN_REC 
{ 
 
	// <column type="dword" desc="冷却分类ID"/> 
	COLUMN_COOLDOWN_REC_0000, 
 
	// <column type="int64" desc="冷却开始时间，现实64位时间数据"/> 
	COLUMN_COOLDOWN_REC_0001, 
 
	// <column type="int64" desc="冷却结束时间，现实64位时间数据"/> 
	COLUMN_COOLDOWN_REC_0002, 
 
}; 
 
 
//<record name="PropModifyRec" 
//	cols="3"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="对象属性修正表"/> 
 
#define FIELD_RECORD_PROP_MODIFY_REC			"PropModifyRec" 
// PropModifyRec column index define 
enum COLUMNS_OF_PROP_MODIFY_REC 
{ 
 
	// <column type="string" desc="修正属性名"/> 
	COLUMN_PROP_MODIFY_REC_0000, 
 
	// <column type="float" desc="修正属性值"/> 
	COLUMN_PROP_MODIFY_REC_0001, 
 
	// <column type="string" desc="修正来源"/> 
	COLUMN_PROP_MODIFY_REC_0002, 
 
}; 
 
 
//<record name="passive_skill_rec" 
//	cols="3"  
//	maxrows="1000"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc=""/> 
 
#define FIELD_RECORD_PASSIVE_SKILL_REC			"passive_skill_rec" 
// passive_skill_rec column index define 
enum COLUMNS_OF_PASSIVE_SKILL_REC 
{ 
 
	// <column type="DWORD" desc="技能id"/> 
	COLUMN_PASSIVE_SKILL_REC_0000, 
 
	// <column type="DWORD" desc="技能等级"/> 
	COLUMN_PASSIVE_SKILL_REC_0001, 
 
	// <column type="DWORD" desc="被动技能来源"/> 
	COLUMN_PASSIVE_SKILL_REC_0002, 
 
}; 
 
 
//<record name="PropModifyByEquip" 
//	cols="3"  
//	maxrows="300"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="属性刷新表"/> 
 
#define FIELD_RECORD_PROP_MODIFY_BY_EQUIP			"PropModifyByEquip" 
// PropModifyByEquip column index define 
enum COLUMNS_OF_PROP_MODIFY_BY_EQUIP 
{ 
 
	// <column type="string" desc="属性名"/> 
	COLUMN_PROP_MODIFY_BY_EQUIP_0000, 
 
	// <column type="float" desc="属性值"/> 
	COLUMN_PROP_MODIFY_BY_EQUIP_0001, 
 
	// <column type="string" desc="来源"/> 
	COLUMN_PROP_MODIFY_BY_EQUIP_0002, 
 
}; 
 
 
//<record name="fashion_unlock_rec" 
//	cols="4"  
//	maxrows="100"  
//	public="false"  
//	private="true"  
//	save="true"  
//	desc="已解锁时装表"/> 
 
#define FIELD_RECORD_FASHION_UNLOCK_REC			"fashion_unlock_rec" 
// fashion_unlock_rec column index define 
enum COLUMNS_OF_FASHION_UNLOCK_REC 
{ 
 
	// <column type="word" desc="时装id"/> 
	COLUMN_FASHION_UNLOCK_REC_ID, 
 
	// <column type="word" desc="时装类型"/> 
	COLUMN_FASHION_UNLOCK_REC_TYPE, 
 
	// <column type="int64" desc="解锁时间"/> 
	COLUMN_FASHION_UNLOCK_REC_UNLOCK_TIME, 
 
	// <column type="int64" desc="时效时间"/> 
	COLUMN_FASHION_UNLOCK_REC_VALID_TIME, 
 
}; 
 
 
//<record name="ApperanceRec" 
//	cols="3"  
//	maxrows="20"  
//	public="false"  
//	private="false"  
//	save="true"  
//	desc="外观管理"/> 
 
#define FIELD_RECORD_APPERANCE_REC			"ApperanceRec" 
// ApperanceRec column index define 
enum COLUMNS_OF_APPERANCE_REC 
{ 
 
	// <column type="WORD" desc="外观id"/> 
	COLUMN_APPERANCE_REC_ID, 
 
	// <column type="BYTE" desc="外观来源"/> 
	COLUMN_APPERANCE_REC_SOURCE, 
 
	// <column type="WORD" desc="外观类型"/> 
	COLUMN_APPERANCE_REC_TYPE, 
 
}; 
 
 
//<record name="camp_fight_rec" 
//	cols="4"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="阵营战斗数据"/> 
 
#define FIELD_RECORD_CAMP_FIGHT_REC			"camp_fight_rec" 
// camp_fight_rec column index define 
enum COLUMNS_OF_CAMP_FIGHT_REC 
{ 
 
	// <column type="dword" desc="阵营"/> 
	COLUMN_CAMP_FIGHT_REC_CAMP, 
 
	// <column type="dword" desc="采集总数"/> 
	COLUMN_CAMP_FIGHT_REC_NUM, 
 
	// <column type="dword" desc="阵营积分"/> 
	COLUMN_CAMP_FIGHT_REC_SCORE, 
 
	// <column type="dword" desc="采集阶段"/> 
	COLUMN_CAMP_FIGHT_REC_STATE, 
 
}; 
 
 
//<record name="blue_score_rec" 
//	cols="5"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="江湖玩家积分表"/> 
 
#define FIELD_RECORD_BLUE_SCORE_REC			"blue_score_rec" 
// blue_score_rec column index define 
enum COLUMNS_OF_BLUE_SCORE_REC 
{ 
 
	// <column type="widestr" desc="玩家名"/> 
	COLUMN_BLUE_SCORE_REC_PLAYER, 
 
	// <column type="int" desc="积分"/> 
	COLUMN_BLUE_SCORE_REC_SCORE, 
 
	// <column type="int" desc="杀人数"/> 
	COLUMN_BLUE_SCORE_REC_KILL, 
 
	// <column type="int" desc="死亡数"/> 
	COLUMN_BLUE_SCORE_REC_DEAD, 
 
	// <column type="int" desc="助攻数"/> 
	COLUMN_BLUE_SCORE_REC_ASSIST, 
 
}; 
 
 
//<record name="red_score_rec" 
//	cols="5"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="朝廷玩家积分表"/> 
 
#define FIELD_RECORD_RED_SCORE_REC			"red_score_rec" 
// red_score_rec column index define 
enum COLUMNS_OF_RED_SCORE_REC 
{ 
 
	// <column type="widestr" desc="玩家名"/> 
	COLUMN_RED_SCORE_REC_PLAYER, 
 
	// <column type="int" desc="积分"/> 
	COLUMN_RED_SCORE_REC_SCORE, 
 
	// <column type="int" desc="杀人数"/> 
	COLUMN_RED_SCORE_REC_KILL, 
 
	// <column type="int" desc="死亡数"/> 
	COLUMN_RED_SCORE_REC_DEAD, 
 
	// <column type="int" desc="助攻数"/> 
	COLUMN_RED_SCORE_REC_ASSIST, 
 
}; 
 
 
//<record name="creator_id_rec" 
//	cols="2"  
//	maxrows="4096"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="生成器和id对应表"/> 
 
#define FIELD_RECORD_CREATOR_ID_REC			"creator_id_rec" 
// creator_id_rec column index define 
enum COLUMNS_OF_CREATOR_ID_REC 
{ 
 
	// <column type="string" desc="生成器id"/> 
	COLUMN_CREATOR_ID_REC_0000, 
 
	// <column type="object" desc="生成器对象"/> 
	COLUMN_CREATOR_ID_REC_0001, 
 
}; 
 
 
//<record name="create_group_static_flow" 
//	cols="4"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="分组场景静态npc创建缓存"/> 
 
#define FIELD_RECORD_CREATE_GROUP_STATIC_FLOW			"create_group_static_flow" 
// create_group_static_flow column index define 
enum COLUMNS_OF_CREATE_GROUP_STATIC_FLOW 
{ 
 
	// <column type="word" desc="SubSceneNo"/> 
	COLUMN_CREATE_GROUP_STATIC_FLOW_0000, 
 
	// <column type="word" desc="分组号"/> 
	COLUMN_CREATE_GROUP_STATIC_FLOW_0001, 
 
	// <column type="word" desc="正在创建的文件编号"/> 
	COLUMN_CREATE_GROUP_STATIC_FLOW_0002, 
 
	// <column type="word" desc="正在创建的npc索引"/> 
	COLUMN_CREATE_GROUP_STATIC_FLOW_0003, 
 
}; 
 
 
//<record name="create_group_random_flow" 
//	cols="4"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="分组场景随机生成器创建缓存"/> 
 
#define FIELD_RECORD_CREATE_GROUP_RANDOM_FLOW			"create_group_random_flow" 
// create_group_random_flow column index define 
enum COLUMNS_OF_CREATE_GROUP_RANDOM_FLOW 
{ 
 
	// <column type="word" desc="SubSceneNo"/> 
	COLUMN_CREATE_GROUP_RANDOM_FLOW_0000, 
 
	// <column type="word" desc="分组号"/> 
	COLUMN_CREATE_GROUP_RANDOM_FLOW_0001, 
 
	// <column type="word" desc="正在创建的文件编号"/> 
	COLUMN_CREATE_GROUP_RANDOM_FLOW_0002, 
 
	// <column type="word" desc="正在创建的npc索引"/> 
	COLUMN_CREATE_GROUP_RANDOM_FLOW_0003, 
 
}; 
 
 
//<record name="world_boss_damage_rec" 
//	cols="3"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="世界boss伤害排名表"/> 
 
#define FIELD_RECORD_WORLD_BOSS_DAMAGE_REC			"world_boss_damage_rec" 
// world_boss_damage_rec column index define 
enum COLUMNS_OF_WORLD_BOSS_DAMAGE_REC 
{ 
 
	// <column type="dword" desc="排名"/> 
	COLUMN_WORLD_BOSS_DAMAGE_REC_RANK, 
 
	// <column type="widestr" desc="玩家名字"/> 
	COLUMN_WORLD_BOSS_DAMAGE_REC_PLAYER_NAME, 
 
	// <column type="dword" desc="总伤害"/> 
	COLUMN_WORLD_BOSS_DAMAGE_REC_DAMAGE, 
 
}; 
 
 
//<record name="world_boss_elite_npc_rec" 
//	cols="2"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="世界boss精英怪表"/> 
 
#define FIELD_RECORD_WORLD_BOSS_ELITE_NPC_REC			"world_boss_elite_npc_rec" 
// world_boss_elite_npc_rec column index define 
enum COLUMNS_OF_WORLD_BOSS_ELITE_NPC_REC 
{ 
 
	// <column type="object" desc="精英怪对象号"/> 
	COLUMN_WORLD_BOSS_ELITE_NPC_REC_NPC, 
 
	// <column type="int" desc="精英怪序号"/> 
	COLUMN_WORLD_BOSS_ELITE_NPC_REC_INDEX, 
 
}; 
 
 
//<record name="kiki_rec" 
//	cols="1"  
//	maxrows="1024"  
//	public="false"  
//	private="false"  
//	save="false"  
//	desc="测试表格"/> 
 
#define FIELD_RECORD_KIKI_REC			"kiki_rec" 
// kiki_rec column index define 
enum COLUMNS_OF_KIKI_REC 
{ 
 
	// <column type="int" desc="测试列"/> 
	COLUMN_KIKI_REC_0000, 
 
}; 
 
 
#endif // _FIELDS_DEFINE_H_