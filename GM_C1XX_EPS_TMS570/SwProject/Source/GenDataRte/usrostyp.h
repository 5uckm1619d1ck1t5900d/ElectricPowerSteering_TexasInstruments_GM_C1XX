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
 *          File:  usrostyp.h
 *     Workspace:  C:/02_EA3Int/BEV/wip_fz9hxm/GM_C1XX_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *  Generated at:  Wed Jun 22 17:08:29 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  User Types header file (osCAN specific)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _USROSTYP_H
# define _USROSTYP_H

# include "Rte_Type.h"

# define RTE_START_SEC_CODE
# include "MemMap.h"

FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_AbsHwPos_EOLVehCntrOffset_GetErrorStatus(NvM_RequestResultType *ErrorStatus);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_AbsHwPos_EOLVehCntrOffset_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_ActivePull_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, UInt32 *ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_ActivePull_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_Assist_FltInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_AstLmt_SteeringAsstDefeat_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_AvgFricLrn_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, UInt32 *ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_AvgFricLrn_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_BVDiag_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_BVDiag_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_CurrParamComp_CurrParamComp_Per2_CP0_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_CurrParamComp_EOLNomMtrParamBlk_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_Damping_FltInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_DemIf_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_DemIf_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, UInt32 *ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_DemIf_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_DiagMgr8_DiagMgr8_Per_CP0_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_EtDmpFw_FaultInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_FltInjection_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, UInt32 *ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_FltInjection_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_FrqDepDmpnInrtCmp_FltInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_GCCDiag_FltInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_HystComp_FltInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_LrnEOT_NxtrDiagMgr_GetNTCFailed(NTCNumber NTC_Cnt_T_enum, Boolean *NTCFailed_Ptr_T_lgc);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_LrnEOT_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_LrnEOT_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_Polarity_Polarity_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_Return_FltInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_SignlCondn_FaultInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_SrlComInput_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_SrlComInput_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_SrlComOutput_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_SrlComOutput_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_StaMd8_StaMd8_Per1_CP0_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_StaMd_CloseCheckData_GetErrorStatus(NvM_RequestResultType *ErrorStatus);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_StaMd_CloseCheckData_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_StaMd_StaMd_Per1_CP1_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_StaMd_TOD_OP_SET(IoHwAb_BoolType signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_StaMd_TypeHData_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_StabilityComp2_StabilityComp2_Per1_CP1_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_StabilityComp_FaultInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_TSMit_TSMitDisableEOL_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_TSMit_TSMitGainLrn_SetRamBlockStatus(Boolean RamBlockStatus);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_TSMit_TSMitGainLrn_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_TrqArblim_FaultInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_TrqCanc_EOLCogTrqCanc_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_TrqCanc_EOLCogTrqRplComp_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_TrqCmdScl_TrqCmdScl_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_TrqOvlSta_FaultInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_TuningSelAuth_TuningSelAuth_Per1_CP0_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_VehDyn_NVM_VehDynReset_Srv_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_VehPwrMd_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Ap_VehPwrMd_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Cd_uDiag_uDiagLossOfExec_Per3_CP0_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Cd_uDiag_uDiagStaticRegs_Per_CP1_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_CDDInterface_CDDPorts_ApplyMtrElecMechPol(SInt8 MtrElecMechPol_Cnt_s8);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_CDDInterface_CDDPorts_ClearPhsReasSum(UInt16 DataAccessBfr_Cnt_T_u16);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_CmMtrCurr_EOLCurrTempOffset_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_CmMtrCurr_EOLShCurrCal_SetRamBlockStatus(Boolean RamBlockStatus);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_CmMtrCurr_EOLShCurrCal_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_DigColPs_EOLDigColPosCals_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_DigHwTrqSENT_FaultInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_DigHwTrqSENT_NvM_DigHwTrqSENTTrim_Srv_GetErrorStatus(NvM_RequestResultType *ErrorStatus);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_DigHwTrqSENT_NvM_DigHwTrqSENTTrim_Srv_WriteBlock(const NvM_DestPtr *DstPtr);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_MtrDrvDiag_FetDrvReset_OP_SET(IoHwAb_BoolType signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_MtrDrvDiag_FetFlt1Data_OP_GET(IoHwAb_BoolType *signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_MtrDrvDiag_FetFlt2Clk_OP_GET(IoHwAb_BoolType *signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_MtrDrvDiag_FetFlt2Clk_OP_SET(IoHwAb_BoolType signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_MtrDrvDiag_IoHwAbPortConfig_SetFetFlt2ToOutput(IoHwAb_BoolType signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_OvrVoltMon_phyOvrVoltFdbk_OP_GET(IoHwAb_BoolType *signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_ShtdnMech_FetDrvReset_OP_GET(IoHwAb_BoolType *signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_ShtdnMech_ShtdnMech_Per1_CP1_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_ShtdnMech_SysFault2_OP_GET(IoHwAb_BoolType *signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_ShtdnMech_SysFault3_OP_GET(IoHwAb_BoolType *signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_TmprlMon2_WdMonitor_OP_SET(IoHwAb_BoolType signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_TmprlMon_FetDrvCntl_OP_GET(IoHwAb_BoolType *signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_TmprlMon_PwrSwitchEn_OP_GET(IoHwAb_BoolType *signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_TmprlMon_SysFault2_OP_GET(IoHwAb_BoolType *signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_TmprlMon_SysFault2_OP_SET(IoHwAb_BoolType signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_TmprlMon_SysFault3_OP_GET(IoHwAb_BoolType *signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_TmprlMon_SysFault3_OP_SET(IoHwAb_BoolType signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_TmprlMon_TmprlMon_Per1_CP0_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_TmprlMon_WdMonitor_OP_SET(IoHwAb_BoolType signal);
FUNC(Std_ReturnType, RTE_CODE) Rte_TrustedCall_Sa_TmprlMon_WdReset_OP_SET(IoHwAb_BoolType signal);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1466621801
#    error "The magic number of the generated file <C:/02_EA3Int/BEV/wip_fz9hxm/GM_C1XX_EPS_TMS570/SwProject/Source/GenDataRte/usrostyp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1466621801
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _USROSTYP_H */
