typedef uint16           CanReceiveHandle;
typedef uint8   nmStatusType;
extern nmStatusType IlNwmGetStatus( uint16 channel );
#define IlNwmStateNormalCommHalted(state)       ((((state) & 0x80u) != 0u) ? TRUE : FALSE)
#define IlNwmStateNoCommunication(state)        ((((state) & 0x20u) != 0u) ? TRUE : FALSE)
extern void SrlComInput_MsgProcess_RxWheelPulsesHS_x500(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxEngineGeneralStatus4_x4C1(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxPlatformEngCntrlRequests_x3F1(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxVehicleSpeedAndDistance_x3E9(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxNonDrivenWheelGrndVelocityHS_x34A(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxDrivenWheelGrndVelocityHS_x348(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxDrivingModeControlHS_x232(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxBrakePedalDriverStatusHS_x214(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxTransGeneralStatus2_x1F5(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxPlatformGeneralStatus_x1F1(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxChassisGeneralStatus1_x1E9(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxLKASteeringTorqueCmdHS_x180(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxAntilockBrakeandTCStatusHS_x17D(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxEngineGeneralStatus1_x0C9(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxNonDrivnWhlRotationlStat_x0C1(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxNonDrivenWheelGrndVelocityCE_x34A(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxDrivenWheelGrndVelocityCE_x348(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxParkAssistParallelCE_x337(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxVehicleDynamicsESCHybCE_x182(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxHybridGeneralStatus3_x0D3(CanReceiveHandle rcvObject);
extern void SrlComInput_MsgProcess_RxSteeringTorqueCmdCE_x180(CanReceiveHandle rcvObject);
#define CanTxPower_Steering_Information_HS_HW_OBJ 0u
#define CanTxPower_Steering_Information_HS_HW_CHANNEL 0u
#define CanTxLKA_Steering_Trq_Overlay_Stat_HS_HW_OBJ 1u
#define CanTxLKA_Steering_Trq_Overlay_Stat_HS_HW_CHANNEL 0u
#define CanTxPPEI_Steering_Wheel_Angle_HW_OBJ 2u
#define CanTxPPEI_Steering_Wheel_Angle_HW_CHANNEL 0u
#define CanTxUUDT_Resp_From_EHPS_EPS_HS_HW_OBJ 3u
#define CanTxUUDT_Resp_From_EHPS_EPS_HS_HW_CHANNEL 0u
#define CanTxUSDT_Resp_From_EHPS_EPS_HS_HW_OBJ 4u
#define CanTxUSDT_Resp_From_EHPS_EPS_HS_HW_CHANNEL 0u
#define CanTxXcp_Slave_Msg_HW_OBJ            5u
#define CanTxXcp_Slave_Msg_HW_CHANNEL        0u
#define CanTxDTC_Triggered_778_HW_OBJ        6u
#define CanTxDTC_Triggered_778_HW_CHANNEL    0u
#define C_TX_NORMAL_0_HW_OBJ                 7u
#define C_TX_NORMAL_0_HW_CHANNEL             0u
#define C_TX_LL_0_HW_OBJ                     8u
#define C_TX_LL_0_HW_CHANNEL                 0u
#define CanRxT1_HostToTarget_HW_OBJ          43u
#define CanRxT1_HostToTarget_HW_CHANNEL      0u
#define CanRxXcp_Master_Msg_HW_OBJ           44u
#define CanRxXcp_Master_Msg_HW_CHANNEL       0u
#define CanRxWheel_Pulses_HS_HW_OBJ          45u
#define CanRxWheel_Pulses_HS_HW_CHANNEL      0u
#define CanRxPPEI_Engine_General_Status_4_HW_OBJ 46u
#define CanRxPPEI_Engine_General_Status_4_HW_CHANNEL 0u
#define CanRxPPEI_Platform_Eng_Cntrl_Requests_HW_OBJ 47u
#define CanRxPPEI_Platform_Eng_Cntrl_Requests_HW_CHANNEL 0u
#define CanRxPPEI_Vehicle_Speed_and_Distance_HW_OBJ 48u
#define CanRxPPEI_Vehicle_Speed_and_Distance_HW_CHANNEL 0u
#define CanRxNonDriven_Wheel_Grnd_Velocity_HS_HW_OBJ 49u
#define CanRxNonDriven_Wheel_Grnd_Velocity_HS_HW_CHANNEL 0u
#define CanRxDriven_Wheel_Grnd_Velocity_HS_HW_OBJ 50u
#define CanRxDriven_Wheel_Grnd_Velocity_HS_HW_CHANNEL 0u
#define CanRxUSDT_Req_to_EHPS_EPS_HS_HW_OBJ  51u
#define CanRxUSDT_Req_to_EHPS_EPS_HS_HW_CHANNEL 0u
#define CanRxDriving_Mode_Control_HS_HW_OBJ  52u
#define CanRxDriving_Mode_Control_HS_HW_CHANNEL 0u
#define CanRxBrake_Pedal_Driver_Status_HS_HW_OBJ 53u
#define CanRxBrake_Pedal_Driver_Status_HS_HW_CHANNEL 0u
#define CanRxPPEI_Trans_General_Status_2_HW_OBJ 54u
#define CanRxPPEI_Trans_General_Status_2_HW_CHANNEL 0u
#define CanRxPPEI_Platform_General_Status_HW_OBJ 55u
#define CanRxPPEI_Platform_General_Status_HW_CHANNEL 0u
#define CanRxPPEI_Chassis_General_Status_1_HW_OBJ 56u
#define CanRxPPEI_Chassis_General_Status_1_HW_CHANNEL 0u
#define CanRxLKA_Steering_Torque_Cmd_HS_HW_OBJ 57u
#define CanRxLKA_Steering_Torque_Cmd_HS_HW_CHANNEL 0u
#define CanRxAntilock_Brake_and_TC_Status_HS_HW_OBJ 58u
#define CanRxAntilock_Brake_and_TC_Status_HS_HW_CHANNEL 0u
#define CanRxUSDT_Req_to_All_HS_ECUs_HW_OBJ  59u
#define CanRxUSDT_Req_to_All_HS_ECUs_HW_CHANNEL 0u
#define CanRxPPEI_Engine_General_Status_1_HW_OBJ 60u
#define CanRxPPEI_Engine_General_Status_1_HW_CHANNEL 0u
#define CanRxPPEI_Driven_Whl_Rotational_Stat_HW_OBJ 61u
#define CanRxPPEI_Driven_Whl_Rotational_Stat_HW_CHANNEL 0u
#define C_BASIC0_0_HW_OBJ                    62u
#define C_BASIC0_0_HW_CHANNEL                0u
#define CanTxPPEI_Steering_Wheel_Angle_CE_HW_OBJ 0u
#define CanTxPPEI_Steering_Wheel_Angle_CE_HW_CHANNEL 1u
#define CanTxElectric_Power_Steering_CE_HW_OBJ 1u
#define CanTxElectric_Power_Steering_CE_HW_CHANNEL 1u
#define CanTxUUDT_Resp_From_EPS_EPS_JR_CE_HW_OBJ 2u
#define CanTxUUDT_Resp_From_EPS_EPS_JR_CE_HW_CHANNEL 1u
#define CanTxUSDT_Resp_From_EPS_EPS_JR_CE_HW_OBJ 3u
#define CanTxUSDT_Resp_From_EPS_EPS_JR_CE_HW_CHANNEL 1u
#define C_TX_NORMAL_1_HW_OBJ                 4u
#define C_TX_NORMAL_1_HW_CHANNEL             1u
#define C_TX_LL_1_HW_OBJ                     5u
#define C_TX_LL_1_HW_CHANNEL                 1u
#define CanRxNonDriven_Wheel_Grnd_Velocity_CE_HW_OBJ 56u
#define CanRxNonDriven_Wheel_Grnd_Velocity_CE_HW_CHANNEL 1u
#define CanRxDriven_Wheel_Grnd_Velocity_CE_HW_OBJ 57u
#define CanRxDriven_Wheel_Grnd_Velocity_CE_HW_CHANNEL 1u
#define CanRxPark_Assist_Parallel_CE_HW_OBJ  58u
#define CanRxPark_Assist_Parallel_CE_HW_CHANNEL 1u
#define CanRxUSDT_Req_to_EPS_EPS_JR_CE_HW_OBJ 59u
#define CanRxUSDT_Req_to_EPS_EPS_JR_CE_HW_CHANNEL 1u
#define CanRxVehicle_Dynamics_ESC_Hyb_CE_HW_OBJ 60u
#define CanRxVehicle_Dynamics_ESC_Hyb_CE_HW_CHANNEL 1u
#define CanRxUSDT_Req_to_All_CE_ECUs_HW_OBJ  61u
#define CanRxUSDT_Req_to_All_CE_ECUs_HW_CHANNEL 1u
#define CanRxPPEI_Hybrid_General_Status_3_HS_HW_CHANNEL 0u
#define CanRxPPEI_Hybrid_General_Status_3_HS_HW_OBJ 60u
#define C_BASIC0_1_HW_OBJ                    62u
#define C_BASIC0_1_HW_CHANNEL                1u
#define CanRxSteering_Torque_Command_CE_HW_CHANNEL 0u
#define CanRxSteering_Torque_Command_CE_HW_OBJ 0u
