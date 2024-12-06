/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2011 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Ap_SrlComOutput.h
 *     Workspace:  C:/02_EA3Int/C1xx/Wip_fz9hxm/GMSrlComOutput/autosar
 *     SW-C Type:  Ap_SrlComOutput
 *  Generated at:  Tue May  3 17:33:08 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <Ap_SrlComOutput> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_SRLCOMOUTPUT_H
# define _RTE_AP_SRLCOMOUTPUT_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"

typedef P2CONST(struct Rte_CDS_Ap_SrlComOutput, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_APADrvrInterventionDetected_Cnt_lgc (FALSE)
# define Rte_InitValue_APAState_State_enum (0U)
# define Rte_InitValue_BusOffCE_Cnt_lgc (FALSE)
# define Rte_InitValue_BusOffHS_Cnt_lgc (FALSE)
# define Rte_InitValue_DiagRmpToZeroActive_Cnt_lgc (FALSE)
# define Rte_InitValue_DiagStsHwPosDis_Cnt_lgc (FALSE)
# define Rte_InitValue_ESCState_State_enum (0U)
# define Rte_InitValue_ESCTorqueDelivered_HwNm_f32 (0.0F)
# define Rte_InitValue_HOWEstimate_Uls_f32 (0.0F)
# define Rte_InitValue_HandwheelVel_HwRadpS_f32 (0.0F)
# define Rte_InitValue_HwTrq_HwNm_f32 (0.0F)
# define Rte_InitValue_HwVelValid_Cnt_lgc (FALSE)
# define Rte_InitValue_LKAState_State_enum (0U)
# define Rte_InitValue_LKATrqDelivered_HwNm_f32 (0.0F)
# define Rte_InitValue_SrlComHwPos_HwDeg_f32 (0.0F)
# define Rte_InitValue_SrlComSysPwrMd_Cnt_enum (0U)
# define Rte_InitValue_TrimCompEOL_Cnt_lgc (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_APADrvrInterventionDetected_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_APAState_State_enum(P2VAR(APA_State_enum, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_DiagRmpToZeroActive_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_DiagStsHwPosDis_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_ESCState_State_enum(P2VAR(ESC_State_enum, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_ESCTorqueDelivered_HwNm_f32(P2VAR(Float, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_HOWEstimate_Uls_f32(P2VAR(Float, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_HandwheelVel_HwRadpS_f32(P2VAR(Float, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_HwTrq_HwNm_f32(P2VAR(Float, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_HwVelValid_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_LKAState_State_enum(P2VAR(LKA_State_enum, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_LKATrqDelivered_HwNm_f32(P2VAR(Float, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_SrlComHwPos_HwDeg_f32(P2VAR(Float, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_SrlComSysPwrMd_Cnt_enum(P2VAR(SysPwrMd, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComOutput_TrimCompEOL_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComOutput_BusOffCE_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComOutput_BusOffHS_Cnt_lgc(Boolean data);
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Ap_SrlComOutput_SystemState_Mode(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_ComM_UserRequest_0_RequestComMode(ComM_ModeType ComMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_ComM_UserRequest_1_RequestComMode(ComM_ModeType ComMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_ComM_UserRequest_2_RequestComMode(ComM_ModeType ComMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_ComM_UserRequest_3_RequestComMode(ComM_ModeType ComMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_ComM_UserRequest_4_RequestComMode(ComM_ModeType ComMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_ComM_UserRequest_5_RequestComMode(ComM_ModeType ComMode);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_DTCTrigSts_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_DTCTrigSts_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_NxtrDiagMgr_GetNTCActive(NTCNumber NTC_Cnt_T_enum, P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) NTCActive_Ptr_T_lgc);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComOutput_SystemTime_GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_AP_SRLCOMOUTPUT_APPL_VAR) CurrentTime);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_APADrvrInterventionDetected_Cnt_lgc Rte_Read_Ap_SrlComOutput_APADrvrInterventionDetected_Cnt_lgc
# define Rte_Read_APAState_State_enum Rte_Read_Ap_SrlComOutput_APAState_State_enum
# define Rte_Read_DiagRmpToZeroActive_Cnt_lgc Rte_Read_Ap_SrlComOutput_DiagRmpToZeroActive_Cnt_lgc
# define Rte_Read_DiagStsHwPosDis_Cnt_lgc Rte_Read_Ap_SrlComOutput_DiagStsHwPosDis_Cnt_lgc
# define Rte_Read_ESCState_State_enum Rte_Read_Ap_SrlComOutput_ESCState_State_enum
# define Rte_Read_ESCTorqueDelivered_HwNm_f32 Rte_Read_Ap_SrlComOutput_ESCTorqueDelivered_HwNm_f32
# define Rte_Read_HOWEstimate_Uls_f32 Rte_Read_Ap_SrlComOutput_HOWEstimate_Uls_f32
# define Rte_Read_HandwheelVel_HwRadpS_f32 Rte_Read_Ap_SrlComOutput_HandwheelVel_HwRadpS_f32
# define Rte_Read_HwTrq_HwNm_f32 Rte_Read_Ap_SrlComOutput_HwTrq_HwNm_f32
# define Rte_Read_HwVelValid_Cnt_lgc Rte_Read_Ap_SrlComOutput_HwVelValid_Cnt_lgc
# define Rte_Read_LKAState_State_enum Rte_Read_Ap_SrlComOutput_LKAState_State_enum
# define Rte_Read_LKATrqDelivered_HwNm_f32 Rte_Read_Ap_SrlComOutput_LKATrqDelivered_HwNm_f32
# define Rte_Read_SrlComHwPos_HwDeg_f32 Rte_Read_Ap_SrlComOutput_SrlComHwPos_HwDeg_f32
# define Rte_Read_SrlComSysPwrMd_Cnt_enum Rte_Read_Ap_SrlComOutput_SrlComSysPwrMd_Cnt_enum
# define Rte_Read_TrimCompEOL_Cnt_lgc Rte_Read_Ap_SrlComOutput_TrimCompEOL_Cnt_lgc


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_BusOffCE_Cnt_lgc Rte_Write_Ap_SrlComOutput_BusOffCE_Cnt_lgc
# define Rte_Write_BusOffHS_Cnt_lgc Rte_Write_Ap_SrlComOutput_BusOffHS_Cnt_lgc


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Ap_SrlComOutput_SystemState_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_ComM_UserRequest_0_RequestComMode Rte_Call_Ap_SrlComOutput_ComM_UserRequest_0_RequestComMode
# define Rte_Call_ComM_UserRequest_1_RequestComMode Rte_Call_Ap_SrlComOutput_ComM_UserRequest_1_RequestComMode
# define Rte_Call_ComM_UserRequest_2_RequestComMode Rte_Call_Ap_SrlComOutput_ComM_UserRequest_2_RequestComMode
# define Rte_Call_ComM_UserRequest_3_RequestComMode Rte_Call_Ap_SrlComOutput_ComM_UserRequest_3_RequestComMode
# define Rte_Call_ComM_UserRequest_4_RequestComMode Rte_Call_Ap_SrlComOutput_ComM_UserRequest_4_RequestComMode
# define Rte_Call_ComM_UserRequest_5_RequestComMode Rte_Call_Ap_SrlComOutput_ComM_UserRequest_5_RequestComMode
# define Rte_Call_DTCTrigSts_WriteBlock Rte_Call_Ap_SrlComOutput_DTCTrigSts_WriteBlock
# define Rte_Call_NxtrDiagMgr_GetNTCActive Rte_Call_Ap_SrlComOutput_NxtrDiagMgr_GetNTCActive
# define Rte_Call_NxtrDiagMgr_SetNTCStatus Rte_Call_Ap_SrlComOutput_NxtrDiagMgr_SetNTCStatus
# define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16 Rte_Call_Ap_SrlComOutput_SystemTime_DtrmnElapsedTime_mS_u16
# define Rte_Call_SystemTime_GetSystemTime_mS_u32 Rte_Call_Ap_SrlComOutput_SystemTime_GetSystemTime_mS_u32


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_DTCTrigSts() (*Rte_Inst_Ap_SrlComOutput->Pim_DTCTrigSts)
# else
#  define Rte_Pim_DTCTrigSts() (Rte_Inst_Ap_SrlComOutput->Pim_DTCTrigSts)
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Boolean *Rte_Pim_DTCTrigSts(void)
# else
 *   DTCStsFlg *Rte_Pim_DTCTrigSts(void)
# endif
 *
 *********************************************************************************************************************/


# define RTE_START_SEC_AP_SRLCOMOUTPUT_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComOutput_Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ComM_UserRequest_0_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_COMM_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_ComM_UserRequest_1_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_COMM_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_ComM_UserRequest_2_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_COMM_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_ComM_UserRequest_3_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_COMM_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_ComM_UserRequest_4_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_COMM_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_ComM_UserRequest_5_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_COMM_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMOUTPUT_APPL_CODE) SrlComOutput_Init1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComOutput_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *     and not in Mode(s) <OFF>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_APADrvrInterventionDetected_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_APAState_State_enum(APA_State_enum *data)
 *   Std_ReturnType Rte_Read_DiagRmpToZeroActive_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_ESCState_State_enum(ESC_State_enum *data)
 *   Std_ReturnType Rte_Read_ESCTorqueDelivered_HwNm_f32(Float *data)
 *   Std_ReturnType Rte_Read_HOWEstimate_Uls_f32(Float *data)
 *   Std_ReturnType Rte_Read_HwTrq_HwNm_f32(Float *data)
 *   Std_ReturnType Rte_Read_LKAState_State_enum(LKA_State_enum *data)
 *   Std_ReturnType Rte_Read_LKATrqDelivered_HwNm_f32(Float *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMOUTPUT_APPL_CODE) SrlComOutput_Per1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComOutput_Per2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *     and not in Mode(s) <OFF>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DiagStsHwPosDis_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_HandwheelVel_HwRadpS_f32(Float *data)
 *   Std_ReturnType Rte_Read_HwVelValid_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_SrlComHwPos_HwDeg_f32(Float *data)
 *   Std_ReturnType Rte_Read_SrlComSysPwrMd_Cnt_enum(SysPwrMd *data)
 *   Std_ReturnType Rte_Read_TrimCompEOL_Cnt_lgc(Boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_BusOffCE_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_BusOffHS_Cnt_lgc(Boolean data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_GetNTCActive(NTCNumber NTC_Cnt_T_enum, Boolean *NTCActive_Ptr_T_lgc)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMOUTPUT_APPL_CODE) SrlComOutput_Per2(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComOutput_Trns1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <OFF> of ModeDeclarationGroupPrototype <Mode> of PortPrototype <SystemState>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_DTCTrigSts_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_DTCTrigSts_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMOUTPUT_APPL_CODE) SrlComOutput_Trns1(void);

# define RTE_STOP_SEC_AP_SRLCOMOUTPUT_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_ComM_UserRequest_COMM_E_MODE_LIMITATION (2U)

# define RTE_E_ComM_UserRequest_E_NOT_OK (1U)

# define RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK (1U)

# define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1462306328
#    error "The magic number of the generated file <C:/02_EA3Int/C1xx/Wip_fz9hxm/GMSrlComOutput/utp/contract/Rte_Ap_SrlComOutput.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1462306328
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_SRLCOMOUTPUT_H */
