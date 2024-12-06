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
 *          File:  Rte_Ap_SrlComInput.h
 *     Workspace:  C:/02_EA3Int/C1xx/Wip_fz9hxm/GM_C1XX_EPS_TMS570/SwProject/SrlComInput/autosar
 *     SW-C Type:  Ap_SrlComInput
 *  Generated at:  Thu May 12 14:50:16 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <Ap_SrlComInput> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_SRLCOMINPUT_H
# define _RTE_AP_SRLCOMINPUT_H

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

typedef P2CONST(struct Rte_CDS_Ap_SrlComInput, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_APAMfgEnable_Cnt_lgc (FALSE)
# define Rte_InitValue_APANonRecoverableFaults_Cnt_lgc (FALSE)
# define Rte_InitValue_APARecoverableFaults_Cnt_lgc (FALSE)
# define Rte_InitValue_APARequest_Cnt_lgc (FALSE)
# define Rte_InitValue_BusOffCE_Cnt_lgc (FALSE)
# define Rte_InitValue_BusOffHS_Cnt_lgc (FALSE)
# define Rte_InitValue_DesiredTunPers_Cnt_u16 (0U)
# define Rte_InitValue_DiagRmpToZeroActive_Cnt_lgc (FALSE)
# define Rte_InitValue_DiagStsDefVehSpd_Cnt_lgc (FALSE)
# define Rte_InitValue_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc (FALSE)
# define Rte_InitValue_ESCCmd_HwNm_f32 (0.0F)
# define Rte_InitValue_ESCFault_Cnt_lgc (FALSE)
# define Rte_InitValue_ESCMfgEnable_Cnt_lgc (FALSE)
# define Rte_InitValue_ESCRequest_Cnt_lgc (FALSE)
# define Rte_InitValue_EngRunAtvForCTCInhibit_Cnt_lgc (FALSE)
# define Rte_InitValue_HapticRequest_Cnt_lgc (FALSE)
# define Rte_InitValue_LKACmd_HwNm_f32 (0.0F)
# define Rte_InitValue_LKAFault_Cnt_lgc (FALSE)
# define Rte_InitValue_LKAInhibit_Cnt_lgc (FALSE)
# define Rte_InitValue_LKAMfgEnable_Cnt_lgc (FALSE)
# define Rte_InitValue_LKARequest_Cnt_lgc (FALSE)
# define Rte_InitValue_MaxSecureVehicleSpeed_Kph_f32 (0.0F)
# define Rte_InitValue_MinSecureVehicleSpeed_Kph_f32 (0.0F)
# define Rte_InitValue_PowertrainCrankActive_Cnt_lgc (FALSE)
# define Rte_InitValue_PrevSrlComEngOn_Cnt_lgc (FALSE)
# define Rte_InitValue_RxMsgsSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_SPMForCTCInhibit_Cnt_lgc (FALSE)
# define Rte_InitValue_SWARTrgtAngRequest_HwDeg_f32 (0.0F)
# define Rte_InitValue_ShiftLeverIsInReverse_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComABSActive_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComAmbTemp_DegC_f32 (0.0F)
# define Rte_InitValue_SrlComESCActive_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComEngOn_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComEngTemp_DegC_f32 (0.0F)
# define Rte_InitValue_SrlComEngineSpeed_Rpm_f32 (0.0F)
# define Rte_InitValue_SrlComLWhlSpd_Hz_f32 (0.0F)
# define Rte_InitValue_SrlComLWhlSpdVld_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComLatAccel_g_f32 (0.0F)
# define Rte_InitValue_SrlComRWhlSpd_Hz_f32 (0.0F)
# define Rte_InitValue_SrlComRWhlSpdVld_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComSPMOn_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComSysPwrMd_Cnt_enum (0U)
# define Rte_InitValue_SrlComTCSActive_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComTSMitDefeat_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComTransmissionTrq_TransNm_f32 (0.0F)
# define Rte_InitValue_SrlComVehSpd_Kph_f32 (0.0F)
# define Rte_InitValue_SrlComVehicleLonAccel_KphpS_f32 (0.0F)
# define Rte_InitValue_SrlComYawRate_DegpS_f32 (0.0F)
# define Rte_InitValue_StrtStopFaultActive_Cnt_lgc (FALSE)
# define Rte_InitValue_VehicleSpeedValid_Cnt_lgc (FALSE)
# define Rte_InitValue_WIREnabled_Cnt_lgc (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComInput_DiagRmpToZeroActive_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComInput_DiagStsDefVehSpd_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComInput_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComInput_PrevSrlComEngOn_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComInput_RxMsgsSrlComSvcDft_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_SrlComInput_WIREnabled_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_APAMfgEnable_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_APANonRecoverableFaults_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_APARecoverableFaults_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_APARequest_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_DesiredTunPers_Cnt_u16(UInt16 data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_ESCCmd_HwNm_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_ESCFault_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_ESCMfgEnable_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_ESCRequest_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_EngRunAtvForCTCInhibit_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_HapticRequest_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_LKACmd_HwNm_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_LKAFault_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_LKAInhibit_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_LKAMfgEnable_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_LKARequest_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_MaxSecureVehicleSpeed_Kph_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_MinSecureVehicleSpeed_Kph_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_PowertrainCrankActive_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SPMForCTCInhibit_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SWARTrgtAngRequest_HwDeg_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_ShiftLeverIsInReverse_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComABSActive_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComAmbTemp_DegC_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComESCActive_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComEngOn_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComEngTemp_DegC_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComEngineSpeed_Rpm_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComLWhlSpd_Hz_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComLWhlSpdVld_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComLatAccel_g_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComRWhlSpd_Hz_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComRWhlSpdVld_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComSPMOn_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComSysPwrMd_Cnt_enum(SysPwrMd data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComTCSActive_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComTSMitDefeat_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComTransmissionTrq_TransNm_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComVehSpd_Kph_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComVehicleLonAccel_KphpS_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_SrlComYawRate_DegpS_f32(Float data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_StrtStopFaultActive_Cnt_lgc(Boolean data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_SrlComInput_VehicleSpeedValid_Cnt_lgc(Boolean data);
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Ap_SrlComInput_SystemState_Mode(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComInput_NxtrDiagMgr_GetNTCActive(NTCNumber NTC_Cnt_T_enum, P2VAR(Boolean, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) NTCActive_Ptr_T_lgc);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComInput_NxtrDiagMgr_GetNTCStatus(NTCNumber NTC_Cnt_T_enum, P2VAR(UInt8, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) Status_Ptr_T_u08);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComInput_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComInput_SrlComInput_Per2_CP0_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComInput_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SrlComInput_SystemTime_GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) CurrentTime);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_SrlComInput_Per2_BusOffCE_Cnt_lgc() \
  (Rte_Inst_Ap_SrlComInput->SrlComInput_Per2_BusOffCE_Cnt_lgc->value)

# define Rte_IRead_SrlComInput_Per2_BusOffHS_Cnt_lgc() \
  (Rte_Inst_Ap_SrlComInput->SrlComInput_Per2_BusOffHS_Cnt_lgc->value)


/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DiagRmpToZeroActive_Cnt_lgc Rte_Read_Ap_SrlComInput_DiagRmpToZeroActive_Cnt_lgc
# define Rte_Read_DiagStsDefVehSpd_Cnt_lgc Rte_Read_Ap_SrlComInput_DiagStsDefVehSpd_Cnt_lgc
# define Rte_Read_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc Rte_Read_Ap_SrlComInput_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc
# define Rte_Read_PrevSrlComEngOn_Cnt_lgc Rte_Read_Ap_SrlComInput_PrevSrlComEngOn_Cnt_lgc
# define Rte_Read_RxMsgsSrlComSvcDft_Cnt_lgc Rte_Read_Ap_SrlComInput_RxMsgsSrlComSvcDft_Cnt_lgc
# define Rte_Read_WIREnabled_Cnt_lgc Rte_Read_Ap_SrlComInput_WIREnabled_Cnt_lgc


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_APAMfgEnable_Cnt_lgc Rte_Write_Ap_SrlComInput_APAMfgEnable_Cnt_lgc
# define Rte_Write_APANonRecoverableFaults_Cnt_lgc Rte_Write_Ap_SrlComInput_APANonRecoverableFaults_Cnt_lgc
# define Rte_Write_APARecoverableFaults_Cnt_lgc Rte_Write_Ap_SrlComInput_APARecoverableFaults_Cnt_lgc
# define Rte_Write_APARequest_Cnt_lgc Rte_Write_Ap_SrlComInput_APARequest_Cnt_lgc
# define Rte_Write_DesiredTunPers_Cnt_u16 Rte_Write_Ap_SrlComInput_DesiredTunPers_Cnt_u16
# define Rte_Write_ESCCmd_HwNm_f32 Rte_Write_Ap_SrlComInput_ESCCmd_HwNm_f32
# define Rte_Write_ESCFault_Cnt_lgc Rte_Write_Ap_SrlComInput_ESCFault_Cnt_lgc
# define Rte_Write_ESCMfgEnable_Cnt_lgc Rte_Write_Ap_SrlComInput_ESCMfgEnable_Cnt_lgc
# define Rte_Write_ESCRequest_Cnt_lgc Rte_Write_Ap_SrlComInput_ESCRequest_Cnt_lgc
# define Rte_Write_EngRunAtvForCTCInhibit_Cnt_lgc Rte_Write_Ap_SrlComInput_EngRunAtvForCTCInhibit_Cnt_lgc
# define Rte_Write_HapticRequest_Cnt_lgc Rte_Write_Ap_SrlComInput_HapticRequest_Cnt_lgc
# define Rte_Write_LKACmd_HwNm_f32 Rte_Write_Ap_SrlComInput_LKACmd_HwNm_f32
# define Rte_Write_LKAFault_Cnt_lgc Rte_Write_Ap_SrlComInput_LKAFault_Cnt_lgc
# define Rte_Write_LKAInhibit_Cnt_lgc Rte_Write_Ap_SrlComInput_LKAInhibit_Cnt_lgc
# define Rte_Write_LKAMfgEnable_Cnt_lgc Rte_Write_Ap_SrlComInput_LKAMfgEnable_Cnt_lgc
# define Rte_Write_LKARequest_Cnt_lgc Rte_Write_Ap_SrlComInput_LKARequest_Cnt_lgc
# define Rte_Write_MaxSecureVehicleSpeed_Kph_f32 Rte_Write_Ap_SrlComInput_MaxSecureVehicleSpeed_Kph_f32
# define Rte_Write_MinSecureVehicleSpeed_Kph_f32 Rte_Write_Ap_SrlComInput_MinSecureVehicleSpeed_Kph_f32
# define Rte_Write_PowertrainCrankActive_Cnt_lgc Rte_Write_Ap_SrlComInput_PowertrainCrankActive_Cnt_lgc
# define Rte_Write_SPMForCTCInhibit_Cnt_lgc Rte_Write_Ap_SrlComInput_SPMForCTCInhibit_Cnt_lgc
# define Rte_Write_SWARTrgtAngRequest_HwDeg_f32 Rte_Write_Ap_SrlComInput_SWARTrgtAngRequest_HwDeg_f32
# define Rte_Write_ShiftLeverIsInReverse_Cnt_lgc Rte_Write_Ap_SrlComInput_ShiftLeverIsInReverse_Cnt_lgc
# define Rte_Write_SrlComABSActive_Cnt_lgc Rte_Write_Ap_SrlComInput_SrlComABSActive_Cnt_lgc
# define Rte_Write_SrlComAmbTemp_DegC_f32 Rte_Write_Ap_SrlComInput_SrlComAmbTemp_DegC_f32
# define Rte_Write_SrlComESCActive_Cnt_lgc Rte_Write_Ap_SrlComInput_SrlComESCActive_Cnt_lgc
# define Rte_Write_SrlComEngOn_Cnt_lgc Rte_Write_Ap_SrlComInput_SrlComEngOn_Cnt_lgc
# define Rte_Write_SrlComEngTemp_DegC_f32 Rte_Write_Ap_SrlComInput_SrlComEngTemp_DegC_f32
# define Rte_Write_SrlComEngineSpeed_Rpm_f32 Rte_Write_Ap_SrlComInput_SrlComEngineSpeed_Rpm_f32
# define Rte_Write_SrlComLWhlSpd_Hz_f32 Rte_Write_Ap_SrlComInput_SrlComLWhlSpd_Hz_f32
# define Rte_Write_SrlComLWhlSpdVld_Cnt_lgc Rte_Write_Ap_SrlComInput_SrlComLWhlSpdVld_Cnt_lgc
# define Rte_Write_SrlComLatAccel_g_f32 Rte_Write_Ap_SrlComInput_SrlComLatAccel_g_f32
# define Rte_Write_SrlComRWhlSpd_Hz_f32 Rte_Write_Ap_SrlComInput_SrlComRWhlSpd_Hz_f32
# define Rte_Write_SrlComRWhlSpdVld_Cnt_lgc Rte_Write_Ap_SrlComInput_SrlComRWhlSpdVld_Cnt_lgc
# define Rte_Write_SrlComSPMOn_Cnt_lgc Rte_Write_Ap_SrlComInput_SrlComSPMOn_Cnt_lgc
# define Rte_Write_SrlComSysPwrMd_Cnt_enum Rte_Write_Ap_SrlComInput_SrlComSysPwrMd_Cnt_enum
# define Rte_Write_SrlComTCSActive_Cnt_lgc Rte_Write_Ap_SrlComInput_SrlComTCSActive_Cnt_lgc
# define Rte_Write_SrlComTSMitDefeat_Cnt_lgc Rte_Write_Ap_SrlComInput_SrlComTSMitDefeat_Cnt_lgc
# define Rte_Write_SrlComTransmissionTrq_TransNm_f32 Rte_Write_Ap_SrlComInput_SrlComTransmissionTrq_TransNm_f32
# define Rte_Write_SrlComVehSpd_Kph_f32 Rte_Write_Ap_SrlComInput_SrlComVehSpd_Kph_f32
# define Rte_Write_SrlComVehicleLonAccel_KphpS_f32 Rte_Write_Ap_SrlComInput_SrlComVehicleLonAccel_KphpS_f32
# define Rte_Write_SrlComYawRate_DegpS_f32 Rte_Write_Ap_SrlComInput_SrlComYawRate_DegpS_f32
# define Rte_Write_StrtStopFaultActive_Cnt_lgc Rte_Write_Ap_SrlComInput_StrtStopFaultActive_Cnt_lgc
# define Rte_Write_VehicleSpeedValid_Cnt_lgc Rte_Write_Ap_SrlComInput_VehicleSpeedValid_Cnt_lgc


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Ap_SrlComInput_SystemState_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_NxtrDiagMgr_GetNTCActive Rte_Call_Ap_SrlComInput_NxtrDiagMgr_GetNTCActive
# define Rte_Call_NxtrDiagMgr_GetNTCStatus Rte_Call_Ap_SrlComInput_NxtrDiagMgr_GetNTCStatus
# define Rte_Call_NxtrDiagMgr_SetNTCStatus Rte_Call_Ap_SrlComInput_NxtrDiagMgr_SetNTCStatus
# define Rte_Call_SrlComInput_Per2_CP0_CheckpointReached Rte_Call_Ap_SrlComInput_SrlComInput_Per2_CP0_CheckpointReached
# define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16 Rte_Call_Ap_SrlComInput_SystemTime_DtrmnElapsedTime_mS_u16
# define Rte_Call_SystemTime_GetSystemTime_mS_u32 Rte_Call_Ap_SrlComInput_SystemTime_GetSystemTime_mS_u32




# define RTE_START_SEC_AP_SRLCOMINPUT_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComInput_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SrlComAmbTemp_DegC_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComEngTemp_DegC_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComVehicleLonAccel_KphpS_f32(Float data)
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
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMINPUT_APPL_CODE) SrlComInput_Init(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComInput_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RxMsgsSrlComSvcDft_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_WIREnabled_Cnt_lgc(Boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_LKACmd_HwNm_f32(Float data)
 *   Std_ReturnType Rte_Write_LKAFault_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_LKAInhibit_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_LKARequest_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_MaxSecureVehicleSpeed_Kph_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComLWhlSpd_Hz_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComLWhlSpdVld_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComRWhlSpd_Hz_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComRWhlSpdVld_Cnt_lgc(Boolean data)
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
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_GetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 *Status_Ptr_T_u08)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMINPUT_APPL_CODE) SrlComInput_Per1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComInput_Per2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DiagRmpToZeroActive_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_RxMsgsSrlComSvcDft_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_WIREnabled_Cnt_lgc(Boolean *data)
 *
 *   Implicit S/R API:
 *   -----------------
 *   Boolean Rte_IRead_SrlComInput_Per2_BusOffCE_Cnt_lgc(void)
 *   Boolean Rte_IRead_SrlComInput_Per2_BusOffHS_Cnt_lgc(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_APAMfgEnable_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_APANonRecoverableFaults_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_APARecoverableFaults_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_APARequest_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_DesiredTunPers_Cnt_u16(UInt16 data)
 *   Std_ReturnType Rte_Write_ESCCmd_HwNm_f32(Float data)
 *   Std_ReturnType Rte_Write_ESCFault_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_ESCMfgEnable_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_ESCRequest_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_EngRunAtvForCTCInhibit_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_HapticRequest_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_LKACmd_HwNm_f32(Float data)
 *   Std_ReturnType Rte_Write_LKAFault_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_LKAInhibit_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_LKAMfgEnable_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_LKARequest_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_MaxSecureVehicleSpeed_Kph_f32(Float data)
 *   Std_ReturnType Rte_Write_MinSecureVehicleSpeed_Kph_f32(Float data)
 *   Std_ReturnType Rte_Write_PowertrainCrankActive_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SPMForCTCInhibit_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SWARTrgtAngRequest_HwDeg_f32(Float data)
 *   Std_ReturnType Rte_Write_ShiftLeverIsInReverse_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComABSActive_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComESCActive_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComEngOn_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComEngineSpeed_Rpm_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComLWhlSpd_Hz_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComLWhlSpdVld_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComLatAccel_g_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComRWhlSpd_Hz_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComRWhlSpdVld_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComSysPwrMd_Cnt_enum(SysPwrMd data)
 *   Std_ReturnType Rte_Write_SrlComTCSActive_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComTSMitDefeat_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComTransmissionTrq_TransNm_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComYawRate_DegpS_f32(Float data)
 *   Std_ReturnType Rte_Write_StrtStopFaultActive_Cnt_lgc(Boolean data)
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
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SrlComInput_Per2_CP0_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMINPUT_APPL_CODE) SrlComInput_Per2(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComInput_Per3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DiagStsDefVehSpd_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_PrevSrlComEngOn_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_RxMsgsSrlComSvcDft_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_WIREnabled_Cnt_lgc(Boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SPMForCTCInhibit_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComAmbTemp_DegC_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComEngTemp_DegC_f32(Float data)
 *   Std_ReturnType Rte_Write_SrlComSPMOn_Cnt_lgc(Boolean data)
 *   Std_ReturnType Rte_Write_SrlComSysPwrMd_Cnt_enum(SysPwrMd data)
 *   Std_ReturnType Rte_Write_SrlComVehSpd_Kph_f32(Float data)
 *   Std_ReturnType Rte_Write_VehicleSpeedValid_Cnt_lgc(Boolean data)
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
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMINPUT_APPL_CODE) SrlComInput_Per3(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComInput_SCom_GetSrlComWIRFltStatus
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetSrlComWIRFltStatus> of PortPrototype <SrlComInput_SCom>
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
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SrlComInput_SCom_GetSrlComWIRFltStatus(UInt16 *SrlComWIRFltStatus)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMINPUT_APPL_CODE) SrlComInput_SCom_GetSrlComWIRFltStatus(P2VAR(UInt16, AUTOMATIC, RTE_AP_SRLCOMINPUT_APPL_VAR) SrlComWIRFltStatus);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComInput_SCom_ManualVehSpd
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ManualVehSpd> of PortPrototype <SrlComInput_SCom>
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
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SrlComInput_SCom_ManualVehSpd(Float VehSpd_Kph_f32)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMINPUT_APPL_CODE) SrlComInput_SCom_ManualVehSpd(Float VehSpd_Kph_f32);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComInput_SCom_ResetBus1Timers
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ResetBus1Timers> of PortPrototype <SrlComInput_SCom>
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
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SrlComInput_SCom_ResetBus1Timers(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMINPUT_APPL_CODE) SrlComInput_SCom_ResetBus1Timers(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SrlComInput_SCom_ResetBus2Timers
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ResetBus2Timers> of PortPrototype <SrlComInput_SCom>
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
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SrlComInput_SCom_ResetBus2Timers(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SRLCOMINPUT_APPL_CODE) SrlComInput_SCom_ResetBus2Timers(void);

# define RTE_STOP_SEC_AP_SRLCOMINPUT_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)

# define RTE_E_WdgM_CheckpointReached_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1463088999
#    error "The magic number of the generated file <C:/02_EA3Int/C1xx/Wip_fz9hxm/GM_C1XX_EPS_TMS570/SwProject/SrlComInput/utp/contract/Sa_CDDInterface/Rte_Ap_SrlComInput.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1463088999
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_SRLCOMINPUT_H */
