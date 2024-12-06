#define vuint8 uint8
#define vuint16 uint16
#define IlTxMsgHndPower_Steering_Information_HS 1u
#define kCanChannel_Channel0                 0u
#define kCanChannel_Channel1                 1u
#define C_SEND_GRP_NONE                      0x00u
#define C_SEND_GRP_ALL                       0xFFu
#define C_SEND_GRP_LKA                       0x01u
#define C_SEND_GRP_APA                       0x02u
typedef vuint8 IlTransmitHandle;

extern boolean Electric_Power_Steering_CE_conf_b;

extern void IlSetEvent(IlTransmitHandle ilTxHnd);
extern void IlPutTxDTCI_DTCTriggered_778(vuint8 sigData);
extern void IlPutTxDTCI_DTCSource_778(vuint8 sigData);
extern void IlPutTxDTCI_DTCNumber_778(vuint16 sigData);
extern void IlPutTxDTCI_DTCFailType_778(vuint8 sigData);
extern void IlPutTxDTCI_CodeSupported_778(vuint8 sigData);
extern void IlPutTxDTCI_CurrentStatus_778(vuint8 sigData);
extern void IlPutTxDTCI_TstNPsdCdClrdSt_778(vuint8 sigData);
extern void IlPutTxDTCI_TstFldCdClrdStat_778(vuint8 sigData);
extern void IlPutTxDTCI_HistStat_778(vuint8 sigData);
extern void IlPutTxDTCI_TstNPsdPwrUpSt_778(vuint8 sigData);
extern void IlPutTxDTCI_TstFldPwrUpSt_778(vuint8 sigData);
extern void IlPutTxDTCI_WrnIndRqdSt_778(vuint8 sigData);
extern void IlPutTxDTCI_DTCFaultType_778(vuint8 sigData);
extern void IlPutTxPwrStrIO(vuint8 sigData);
extern void IlPutTxSteerAsstRed(vuint8 sigData);
extern void IlPutTxDTCInfo_778(void);
extern void IlPutTxLKADrvAppldTrqV(uint8 sigData);
extern void IlPutTxHndsOffStrWhlDtSt(uint8 sigData);
extern void IlPutTxHndsOffStrWhlDtMd(uint8 sigData);
extern void IlPutTxHndsOffStrWhlDtStV(uint8 sigData);
extern void IlPutTxLKATrqOvrlTrqDStat(uint8 sigData);
extern void IlPutTxLKAElPwrStTtlTqDlvd(uint16 sigData);
extern void IlPutTxLKATrqOvrlDlvdRC(uint8 sigData);
extern void IlPutTxLKADrvAppldTrq(uint16 sigData);
extern void IlPutTxLKATrqOvrlStatChksm(uint16 sigData);
extern void IlPutTxElecPwrStrAvalStat(uint8 sigData);
extern void IlPutTxDrvStrIntfrDtcdV(uint8 sigData);
extern void IlPutTxDrvStrIntfrDtcd(boolean sigData);
extern void IlPutTxDrvStrIntfrDetARC(uint8 sigData);
extern void IlPutTxDrvStrIntfrDetARC(uint8 sigData);
extern void IlPutTxDrvStrIntfrDetPrtVal(uint8 sigData);
extern void IlPutTxElcPwrStrAvalStatARC(uint8 sigData);
extern void IlPutTxElcPwrStrAvalStatPVal(uint8 sigData);
extern void IlPutTxLKATrqOvrlDltTrqDlvd(uint16 sigData);
extern void IlPutTxElPwrStTtlTqDlrd(sint16);
extern void IlPutTxTrqOvrlTrqDStat(ESC_State_enum);
extern void IlPutTxTrqOvrlDvrdARC(uint8);
extern void IlPutTxTrqOvrlDltTrqDlrd(sint16);
extern void IlPutTxTrqOvrlDChksm(uint16);
extern void IlPutTxStrWhAngV_0(boolean);
extern void IlPutTxStrWhAngV_1(boolean);
extern void IlPutTxStrWhAngGrdV_0(boolean);
extern void IlPutTxStrWhAngGrdV_1(boolean);
extern void IlPutTxStrWhAng_0(sint16);
extern void IlPutTxStrWhAng_1(sint16);
extern void IlPutTxStrWhAngGrd_0(sint16);
extern void IlPutTxStrWhAngGrd_1(sint16);

extern void IlPutTxHndsOffStrWhlDtStGroup(void);
extern void IlPutTxLKADrvAppldTrqGroup(void);
extern void IlPutTxDrvStrIntfrDtcdGroup(void);

extern void CanPartOffline(uint8 channel, uint8 sendGroup);
extern void CanPartOnline(uint8 channel, uint8 sendGroup);
extern void IlTxTask(uint8 channel);

typedef union _c_PPEI_Steering_Wheel_Angle_CE_bufTag
{
  vuint8 _c[8];
}_c_PPEI_Steering_Wheel_Angle_CE_buf;

typedef union _c_PPEI_Steering_Wheel_Angle_bufTag
{
  vuint8 _c[8];
} _c_PPEI_Steering_Wheel_Angle_buf;


typedef struct _c_LKADrvAppldTrqGroup_msgTypeTag
{
  uint8 unused0 : 4;
  uint8 LKADrvAppldTrqV : 1;
  uint8 LKADrvAppldTrq_1 : 3;
  uint8 LKADrvAppldTrq_0 : 8;
} _c_LKADrvAppldTrqGroup_msgType;
typedef union _c_LKADrvAppldTrqGroup_bufTag
{
  vuint8 _c[2];
  _c_LKADrvAppldTrqGroup_msgType LKADrvAppldTrqGroup;
} _c_LKADrvAppldTrqGroup_buf;
typedef union _c_LKA_Steering_Trq_Overlay_Stat_HS_bufTag
{
  vuint8 _c[8];
} _c_LKA_Steering_Trq_Overlay_Stat_HS_buf;

_c_PPEI_Steering_Wheel_Angle_buf PPEI_Steering_Wheel_Angle;
_c_PPEI_Steering_Wheel_Angle_CE_buf PPEI_Steering_Wheel_Angle_CE;
_c_LKA_Steering_Trq_Overlay_Stat_HS_buf LKA_Steering_Trq_Overlay_Stat_HS;
_c_LKADrvAppldTrqGroup_buf LKADrvAppldTrqGroup;