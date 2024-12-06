typedef struct _c_Steering_Torque_Command_CE_msgTypeTag
{
  uint32 TrqOvrlARC : 4;
  uint32 TqOvrDltTqCmdAct : 1;
  uint32 TqOvrDltTqCmdVl_1 : 3;
  uint32 TqOvrDltTqCmdVl_0 : 8;
  uint32 unused0 : 8;
  uint32 unused1 : 8;
  uint32 unused2 : 8;
  uint32 unused3 : 8;
  uint32 unused4 : 5;
  uint32 TrqOvrlCmdChksm_1 : 3;
  uint32 TrqOvrlCmdChksm_0 : 8;
} _c_Steering_Torque_Command_CE_msgType;
typedef union _c_Steering_Torque_Command_CE_bufTag
{
  uint8 _c[8];
  _c_Steering_Torque_Command_CE_msgType Steering_Torque_Command_CE;
} _c_Steering_Torque_Command_CE_buf;
extern  _c_Steering_Torque_Command_CE_buf Steering_Torque_Command_CE;