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
 *          File:  Rte_Sa_CDDInterface.h
 *     Workspace:  C:/Workspace/GM_C1XX_EPS_TMS570-General_Motors_working/C1xx/GM_C1XX_EPS_TMS570/SwProject/CDDInterface/autosar
 *     SW-C Type:  Sa_CDDInterface
 *  Generated at:  Fri Oct  3 09:35:55 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <Sa_CDDInterface> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SA_CDDINTERFACE_H
# define _RTE_SA_CDDINTERFACE_H

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

typedef P2CONST(struct Rte_CDS_Sa_CDDInterface, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ADCMtrCurr1_Volts_f32 (0.0F)
# define Rte_InitValue_ADCMtrCurr2_Volts_f32 (0.0F)
# define Rte_InitValue_AssistAssemblyPolarity_Cnt_s08 (0)
# define Rte_InitValue_BallNutTempEstSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_CommOffset_Cnt_u16 (0U)
# define Rte_InitValue_CorrMtrCurrPosition_Rev_f32 (0.0F)
# define Rte_InitValue_CorrectedElecMtrPos_Rev_u0p16 (0U)
# define Rte_InitValue_CorrectedElecMtrPosFloat_Rev_f32 (0.0F)
# define Rte_InitValue_CumMechMtrPos_Rev_f32 (0.0F)
# define Rte_InitValue_DampingSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_DftAsstTbl_Cnt_lgc (FALSE)
# define Rte_InitValue_Die1RxError_Cnt_u16 (0U)
# define Rte_InitValue_Die1RxMtrPos_Cnt_u16 (0U)
# define Rte_InitValue_Die1RxRevCtr_Cnt_u16 (0U)
# define Rte_InitValue_Die2RxError_Cnt_u16 (0U)
# define Rte_InitValue_Die2RxMtrPos_Cnt_u16 (0U)
# define Rte_InitValue_Die2RxRevCtr_Cnt_u16 (0U)
# define Rte_InitValue_DisableCEBusNormComm_Cnt_lgc (FALSE)
# define Rte_InitValue_DisableHSBusNormComm_Cnt_lgc (FALSE)
# define Rte_InitValue_DrivingDynSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_DwnldAsstGain_Uls_f32 (0.0F)
# define Rte_InitValue_EOTImpactSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_EOTThermalSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_EngONSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_ExpectedOnTimeA_Cnt_u32 (0U)
# define Rte_InitValue_ExpectedOnTimeB_Cnt_u32 (0U)
# define Rte_InitValue_ExpectedOnTimeC_Cnt_u32 (0U)
# define Rte_InitValue_FreqDepDmpSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_FricLrnSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_HysAddSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_HystCompSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_IgnCnt_Cnt_u16 (0U)
# define Rte_InitValue_KinIntDiagSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_LRPRPhaseadvanceCaptured_Cnt_s16 (0)
# define Rte_InitValue_LimitSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_MEC_Cnt_enum (0U)
# define Rte_InitValue_MRFMtrVel_MtrRadpS_f32 (0.0F)
# define Rte_InitValue_MeasuredOnTimeA_Cnt_u32 (0U)
# define Rte_InitValue_MeasuredOnTimeB_Cnt_u32 (0U)
# define Rte_InitValue_MeasuredOnTimeC_Cnt_u32 (0U)
# define Rte_InitValue_MechMtrPos1TimeStamp_USec_u32 (0U)
# define Rte_InitValue_MechMtrPos2TimeStamp_USec_u32 (0U)
# define Rte_InitValue_MfgDiagInhibit_Cnt_lgc (FALSE)
# define Rte_InitValue_ModIdxFinal_Uls_f32 (0.0F)
# define Rte_InitValue_ModIdxSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_MtrCurr1TempOffset_Volt_f32 (0.0F)
# define Rte_InitValue_MtrCurr2TempOffset_Volt_f32 (0.0F)
# define Rte_InitValue_MtrCurrDax_Amp_f32 (0.0F)
# define Rte_InitValue_MtrCurrK1_Amp_f32 (0.0F)
# define Rte_InitValue_MtrCurrK2_Amp_f32 (0.0F)
# define Rte_InitValue_MtrCurrQax_Amp_f32 (0.0F)
# define Rte_InitValue_MtrCurrQaxFinalRef_Amp_f32 (0.0F)
# define Rte_InitValue_MtrElecMechPolarity_Cnt_s08 (0)
# define Rte_InitValue_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_MtrPosPolarity_Cnt_s08 (0)
# define Rte_InitValue_MtrTrqCmdSign_Cnt_s16 (0)
# define Rte_InitValue_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_MultIgnSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_ParkAstSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_PosTrajEnable_Cnt_lgc (FALSE)
# define Rte_InitValue_PullCompLrnSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_PullCompSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_ReturnSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_RxMsgsSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_RxMtrPos1ParityAccum_Cnt_u16 (0U)
# define Rte_InitValue_SftEndStpSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComSvcDft_Cnt_b32 (0U)
# define Rte_InitValue_SysCVSwitchADC_Cnt_u16 (0U)
# define Rte_InitValue_SysCorrectedElecMtrPos_Rev_f32 (0.0F)
# define Rte_InitValue_ThermalDCSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_TrqRmpSrlComSvcDft_Cnt_lgc (FALSE)
# define Rte_InitValue_UncorrMechMtrPos1_Rev_u0p16 (0U)
# define Rte_InitValue_Vecu_Volt_f32 (5.0F)
# define Rte_InitValue_WIRMfgEnabled_Cnt_lgc (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Sa_CDDInterface_SystemState_Mode(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Sa_CDDInterface_CDDPorts_ApplyMtrElecMechPol(SInt8 MtrElecMechPol_Cnt_s8);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Sa_CDDInterface_CDDPorts_ClearPhsReasSum(UInt16 DataAccessBfr_Cnt_T_u16);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Sa_CDDInterface_SystemTime_GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_SA_CDDINTERFACE_APPL_VAR) CurrentTime);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IWrite_CDDInterface_Init1_IgnCnt_Cnt_u16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Init1_IgnCnt_Cnt_u16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Init1_IgnCnt_Cnt_u16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Init1_IgnCnt_Cnt_u16->value)

# define Rte_IRead_CDDInterface_Init2_MtrElecMechPolarity_Cnt_s08() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Init2_MtrElecMechPolarity_Cnt_s08->value)

# define Rte_IRead_CDDInterface_Init2_MtrPosPolarity_Cnt_s08() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Init2_MtrPosPolarity_Cnt_s08->value)

# define Rte_IWrite_CDDInterface_Init2_MEC_Cnt_enum(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Init2_MEC_Cnt_enum->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Init2_MEC_Cnt_enum() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Init2_MEC_Cnt_enum->value)

# define Rte_IWrite_CDDInterface_Per1_ADCMtrCurr1_Volts_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ADCMtrCurr1_Volts_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_ADCMtrCurr1_Volts_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ADCMtrCurr1_Volts_f32->value)

# define Rte_IWrite_CDDInterface_Per1_ADCMtrCurr2_Volts_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ADCMtrCurr2_Volts_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_ADCMtrCurr2_Volts_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ADCMtrCurr2_Volts_f32->value)

# define Rte_IWrite_CDDInterface_Per1_CorrMtrCurrPosition_Rev_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_CorrMtrCurrPosition_Rev_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_CorrMtrCurrPosition_Rev_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_CorrMtrCurrPosition_Rev_f32->value)

# define Rte_IWrite_CDDInterface_Per1_CorrectedElecMtrPosFloat_Rev_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_CorrectedElecMtrPosFloat_Rev_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_CorrectedElecMtrPosFloat_Rev_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_CorrectedElecMtrPosFloat_Rev_f32->value)

# define Rte_IWrite_CDDInterface_Per1_CorrectedElecMtrPos_Rev_u0p16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_CorrectedElecMtrPos_Rev_u0p16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_CorrectedElecMtrPos_Rev_u0p16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_CorrectedElecMtrPos_Rev_u0p16->value)

# define Rte_IWrite_CDDInterface_Per1_CumMechMtrPos_Rev_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_CumMechMtrPos_Rev_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_CumMechMtrPos_Rev_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_CumMechMtrPos_Rev_f32->value)

# define Rte_IWrite_CDDInterface_Per1_Die1RxError_Cnt_u16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die1RxError_Cnt_u16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_Die1RxError_Cnt_u16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die1RxError_Cnt_u16->value)

# define Rte_IWrite_CDDInterface_Per1_Die1RxMtrPos_Cnt_u16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die1RxMtrPos_Cnt_u16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_Die1RxMtrPos_Cnt_u16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die1RxMtrPos_Cnt_u16->value)

# define Rte_IWrite_CDDInterface_Per1_Die1RxRevCtr_Cnt_u16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die1RxRevCtr_Cnt_u16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_Die1RxRevCtr_Cnt_u16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die1RxRevCtr_Cnt_u16->value)

# define Rte_IWrite_CDDInterface_Per1_Die2RxError_Cnt_u16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die2RxError_Cnt_u16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_Die2RxError_Cnt_u16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die2RxError_Cnt_u16->value)

# define Rte_IWrite_CDDInterface_Per1_Die2RxMtrPos_Cnt_u16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die2RxMtrPos_Cnt_u16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_Die2RxMtrPos_Cnt_u16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die2RxMtrPos_Cnt_u16->value)

# define Rte_IWrite_CDDInterface_Per1_Die2RxRevCtr_Cnt_u16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die2RxRevCtr_Cnt_u16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_Die2RxRevCtr_Cnt_u16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_Die2RxRevCtr_Cnt_u16->value)

# define Rte_IWrite_CDDInterface_Per1_ExpectedOnTimeA_Cnt_u32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ExpectedOnTimeA_Cnt_u32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_ExpectedOnTimeA_Cnt_u32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ExpectedOnTimeA_Cnt_u32->value)

# define Rte_IWrite_CDDInterface_Per1_ExpectedOnTimeB_Cnt_u32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ExpectedOnTimeB_Cnt_u32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_ExpectedOnTimeB_Cnt_u32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ExpectedOnTimeB_Cnt_u32->value)

# define Rte_IWrite_CDDInterface_Per1_ExpectedOnTimeC_Cnt_u32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ExpectedOnTimeC_Cnt_u32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_ExpectedOnTimeC_Cnt_u32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ExpectedOnTimeC_Cnt_u32->value)

# define Rte_IWrite_CDDInterface_Per1_LRPRPhaseadvanceCaptured_Cnt_s16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_LRPRPhaseadvanceCaptured_Cnt_s16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_LRPRPhaseadvanceCaptured_Cnt_s16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_LRPRPhaseadvanceCaptured_Cnt_s16->value)

# define Rte_IWrite_CDDInterface_Per1_MeasuredOnTimeA_Cnt_u32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MeasuredOnTimeA_Cnt_u32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_MeasuredOnTimeA_Cnt_u32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MeasuredOnTimeA_Cnt_u32->value)

# define Rte_IWrite_CDDInterface_Per1_MeasuredOnTimeB_Cnt_u32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MeasuredOnTimeB_Cnt_u32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_MeasuredOnTimeB_Cnt_u32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MeasuredOnTimeB_Cnt_u32->value)

# define Rte_IWrite_CDDInterface_Per1_MeasuredOnTimeC_Cnt_u32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MeasuredOnTimeC_Cnt_u32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_MeasuredOnTimeC_Cnt_u32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MeasuredOnTimeC_Cnt_u32->value)

# define Rte_IWrite_CDDInterface_Per1_MechMtrPos1TimeStamp_USec_u32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MechMtrPos1TimeStamp_USec_u32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_MechMtrPos1TimeStamp_USec_u32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MechMtrPos1TimeStamp_USec_u32->value)

# define Rte_IWrite_CDDInterface_Per1_MechMtrPos2TimeStamp_USec_u32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MechMtrPos2TimeStamp_USec_u32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_MechMtrPos2TimeStamp_USec_u32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MechMtrPos2TimeStamp_USec_u32->value)

# define Rte_IWrite_CDDInterface_Per1_ModIdxFinal_Uls_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ModIdxFinal_Uls_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_ModIdxFinal_Uls_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_ModIdxFinal_Uls_f32->value)

# define Rte_IWrite_CDDInterface_Per1_MtrCurrDax_Amp_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MtrCurrDax_Amp_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_MtrCurrDax_Amp_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MtrCurrDax_Amp_f32->value)

# define Rte_IWrite_CDDInterface_Per1_MtrCurrK1_Amp_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MtrCurrK1_Amp_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_MtrCurrK1_Amp_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MtrCurrK1_Amp_f32->value)

# define Rte_IWrite_CDDInterface_Per1_MtrCurrK2_Amp_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MtrCurrK2_Amp_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_MtrCurrK2_Amp_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MtrCurrK2_Amp_f32->value)

# define Rte_IWrite_CDDInterface_Per1_MtrCurrQaxFinalRef_Amp_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MtrCurrQaxFinalRef_Amp_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_MtrCurrQaxFinalRef_Amp_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MtrCurrQaxFinalRef_Amp_f32->value)

# define Rte_IWrite_CDDInterface_Per1_MtrCurrQax_Amp_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MtrCurrQax_Amp_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_MtrCurrQax_Amp_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_MtrCurrQax_Amp_f32->value)

# define Rte_IWrite_CDDInterface_Per1_RxMtrPos1ParityAccum_Cnt_u16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_RxMtrPos1ParityAccum_Cnt_u16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_RxMtrPos1ParityAccum_Cnt_u16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_RxMtrPos1ParityAccum_Cnt_u16->value)

# define Rte_IWrite_CDDInterface_Per1_SysCVSwitchADC_Cnt_u16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_SysCVSwitchADC_Cnt_u16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_SysCVSwitchADC_Cnt_u16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_SysCVSwitchADC_Cnt_u16->value)

# define Rte_IWrite_CDDInterface_Per1_SysCorrectedElecMtrPos_Rev_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_SysCorrectedElecMtrPos_Rev_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_SysCorrectedElecMtrPos_Rev_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_SysCorrectedElecMtrPos_Rev_f32->value)

# define Rte_IWrite_CDDInterface_Per1_UncorrMechMtrPos1_Rev_u0p16(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_UncorrMechMtrPos1_Rev_u0p16->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per1_UncorrMechMtrPos1_Rev_u0p16() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per1_UncorrMechMtrPos1_Rev_u0p16->value)

# define Rte_IRead_CDDInterface_Per2_AssistAssemblyPolarity_Cnt_s08() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Per2_AssistAssemblyPolarity_Cnt_s08->value)

# define Rte_IRead_CDDInterface_Per2_CommOffset_Cnt_u16() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Per2_CommOffset_Cnt_u16->value)

# define Rte_IRead_CDDInterface_Per2_MRFMtrVel_MtrRadpS_f32() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Per2_MRFMtrVel_MtrRadpS_f32->value)

# define Rte_IRead_CDDInterface_Per2_MtrCurr1TempOffset_Volt_f32() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Per2_MtrCurr1TempOffset_Volt_f32->value)

# define Rte_IRead_CDDInterface_Per2_MtrCurr2TempOffset_Volt_f32() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Per2_MtrCurr2TempOffset_Volt_f32->value)

# define Rte_IRead_CDDInterface_Per2_MtrPosPolarity_Cnt_s08() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Per2_MtrPosPolarity_Cnt_s08->value)

# define Rte_IRead_CDDInterface_Per2_MtrTrqCmdSign_Cnt_s16() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Per2_MtrTrqCmdSign_Cnt_s16->value)

# define Rte_IRead_CDDInterface_Per2_Vecu_Volt_f32() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Per2_Vecu_Volt_f32->value)

# define Rte_IRead_CDDInterface_Per4_MtrElecMechPolarity_Cnt_s08() \
  (Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MtrElecMechPolarity_Cnt_s08->value)

# define Rte_IWrite_CDDInterface_Per4_BallNutTempEstSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_BallNutTempEstSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_BallNutTempEstSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_BallNutTempEstSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_DampingSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DampingSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_DampingSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DampingSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_DftAsstTbl_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DftAsstTbl_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_DftAsstTbl_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DftAsstTbl_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_DisableCEBusNormComm_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DisableCEBusNormComm_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_DisableCEBusNormComm_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DisableCEBusNormComm_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_DisableHSBusNormComm_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DisableHSBusNormComm_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_DisableHSBusNormComm_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DisableHSBusNormComm_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_DrivingDynSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DrivingDynSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_DrivingDynSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DrivingDynSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_DwnldAsstGain_Uls_f32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DwnldAsstGain_Uls_f32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_DwnldAsstGain_Uls_f32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_DwnldAsstGain_Uls_f32->value)

# define Rte_IWrite_CDDInterface_Per4_EOTImpactSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_EOTImpactSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_EOTImpactSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_EOTImpactSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_EOTThermalSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_EOTThermalSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_EOTThermalSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_EOTThermalSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_EngONSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_EngONSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_EngONSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_EngONSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_FreqDepDmpSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_FreqDepDmpSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_FreqDepDmpSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_FreqDepDmpSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_FricLrnSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_FricLrnSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_FricLrnSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_FricLrnSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_HysAddSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_HysAddSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_HysAddSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_HysAddSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_HystCompSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_HystCompSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_HystCompSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_HystCompSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_KinIntDiagSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_KinIntDiagSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_KinIntDiagSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_KinIntDiagSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_LimitSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_LimitSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_LimitSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_LimitSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_MEC_Cnt_enum(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MEC_Cnt_enum->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_MEC_Cnt_enum() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MEC_Cnt_enum->value)

# define Rte_IWrite_CDDInterface_Per4_MfgDiagInhibit_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MfgDiagInhibit_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_MfgDiagInhibit_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MfgDiagInhibit_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_ModIdxSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_ModIdxSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_ModIdxSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_ModIdxSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_MultIgnSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MultIgnSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_MultIgnSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_MultIgnSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_ParkAstSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_ParkAstSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_ParkAstSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_ParkAstSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_PosTrajEnable_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_PosTrajEnable_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_PosTrajEnable_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_PosTrajEnable_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_PullCompLrnSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_PullCompLrnSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_PullCompLrnSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_PullCompLrnSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_PullCompSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_PullCompSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_PullCompSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_PullCompSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_ReturnSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_ReturnSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_ReturnSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_ReturnSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_RxMsgsSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_RxMsgsSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_RxMsgsSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_RxMsgsSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_SftEndStpSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_SftEndStpSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_SftEndStpSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_SftEndStpSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_SrlComSvcDft_Cnt_b32(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_SrlComSvcDft_Cnt_b32->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_SrlComSvcDft_Cnt_b32() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_SrlComSvcDft_Cnt_b32->value)

# define Rte_IWrite_CDDInterface_Per4_ThermalDCSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_ThermalDCSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_ThermalDCSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_ThermalDCSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_TrqRmpSrlComSvcDft_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_TrqRmpSrlComSvcDft_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_TrqRmpSrlComSvcDft_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_TrqRmpSrlComSvcDft_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface_Per4_WIRMfgEnabled_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_WIRMfgEnabled_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface_Per4_WIRMfgEnabled_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface->CDDInterface_Per4_WIRMfgEnabled_Cnt_lgc->value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Sa_CDDInterface_SystemState_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CDDPorts_ApplyMtrElecMechPol Rte_Call_Sa_CDDInterface_CDDPorts_ApplyMtrElecMechPol
# define Rte_Call_CDDPorts_ClearPhsReasSum Rte_Call_Sa_CDDInterface_CDDPorts_ClearPhsReasSum
# define Rte_Call_SystemTime_GetSystemTime_mS_u32 Rte_Call_Sa_CDDInterface_SystemTime_GetSystemTime_mS_u32




# define RTE_START_SEC_SA_CDDINTERFACE_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDDInterface_Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_CDDInterface_Init1_IgnCnt_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Init1_IgnCnt_Cnt_u16(void)
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

FUNC(void, RTE_SA_CDDINTERFACE_APPL_CODE) CDDInterface_Init1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDDInterface_Init2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   SInt8 Rte_IRead_CDDInterface_Init2_MtrElecMechPolarity_Cnt_s08(void)
 *   SInt8 Rte_IRead_CDDInterface_Init2_MtrPosPolarity_Cnt_s08(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_CDDInterface_Init2_MEC_Cnt_enum(ManufModeType data)
 *   ManufModeType *Rte_IWriteRef_CDDInterface_Init2_MEC_Cnt_enum(void)
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
 *   Std_ReturnType Rte_Call_CDDPorts_ApplyMtrElecMechPol(SInt8 MtrElecMechPol_Cnt_s8)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_SA_CDDINTERFACE_APPL_CODE) CDDInterface_Init2(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDDInterface_Init3
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
 *********************************************************************************************************************/

FUNC(void, RTE_SA_CDDINTERFACE_APPL_CODE) CDDInterface_Init3(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDDInterface_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_CDDInterface_Per1_ADCMtrCurr1_Volts_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_ADCMtrCurr1_Volts_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_ADCMtrCurr2_Volts_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_ADCMtrCurr2_Volts_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_CorrMtrCurrPosition_Rev_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_CorrMtrCurrPosition_Rev_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_CorrectedElecMtrPosFloat_Rev_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_CorrectedElecMtrPosFloat_Rev_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_CorrectedElecMtrPos_Rev_u0p16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Per1_CorrectedElecMtrPos_Rev_u0p16(void)
 *   void Rte_IWrite_CDDInterface_Per1_CumMechMtrPos_Rev_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_CumMechMtrPos_Rev_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_Die1RxError_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Per1_Die1RxError_Cnt_u16(void)
 *   void Rte_IWrite_CDDInterface_Per1_Die1RxMtrPos_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Per1_Die1RxMtrPos_Cnt_u16(void)
 *   void Rte_IWrite_CDDInterface_Per1_Die1RxRevCtr_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Per1_Die1RxRevCtr_Cnt_u16(void)
 *   void Rte_IWrite_CDDInterface_Per1_Die2RxError_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Per1_Die2RxError_Cnt_u16(void)
 *   void Rte_IWrite_CDDInterface_Per1_Die2RxMtrPos_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Per1_Die2RxMtrPos_Cnt_u16(void)
 *   void Rte_IWrite_CDDInterface_Per1_Die2RxRevCtr_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Per1_Die2RxRevCtr_Cnt_u16(void)
 *   void Rte_IWrite_CDDInterface_Per1_ExpectedOnTimeA_Cnt_u32(UInt32 data)
 *   UInt32 *Rte_IWriteRef_CDDInterface_Per1_ExpectedOnTimeA_Cnt_u32(void)
 *   void Rte_IWrite_CDDInterface_Per1_ExpectedOnTimeB_Cnt_u32(UInt32 data)
 *   UInt32 *Rte_IWriteRef_CDDInterface_Per1_ExpectedOnTimeB_Cnt_u32(void)
 *   void Rte_IWrite_CDDInterface_Per1_ExpectedOnTimeC_Cnt_u32(UInt32 data)
 *   UInt32 *Rte_IWriteRef_CDDInterface_Per1_ExpectedOnTimeC_Cnt_u32(void)
 *   void Rte_IWrite_CDDInterface_Per1_LRPRPhaseadvanceCaptured_Cnt_s16(SInt16 data)
 *   SInt16 *Rte_IWriteRef_CDDInterface_Per1_LRPRPhaseadvanceCaptured_Cnt_s16(void)
 *   void Rte_IWrite_CDDInterface_Per1_MeasuredOnTimeA_Cnt_u32(UInt32 data)
 *   UInt32 *Rte_IWriteRef_CDDInterface_Per1_MeasuredOnTimeA_Cnt_u32(void)
 *   void Rte_IWrite_CDDInterface_Per1_MeasuredOnTimeB_Cnt_u32(UInt32 data)
 *   UInt32 *Rte_IWriteRef_CDDInterface_Per1_MeasuredOnTimeB_Cnt_u32(void)
 *   void Rte_IWrite_CDDInterface_Per1_MeasuredOnTimeC_Cnt_u32(UInt32 data)
 *   UInt32 *Rte_IWriteRef_CDDInterface_Per1_MeasuredOnTimeC_Cnt_u32(void)
 *   void Rte_IWrite_CDDInterface_Per1_MechMtrPos1TimeStamp_USec_u32(UInt32 data)
 *   UInt32 *Rte_IWriteRef_CDDInterface_Per1_MechMtrPos1TimeStamp_USec_u32(void)
 *   void Rte_IWrite_CDDInterface_Per1_MechMtrPos2TimeStamp_USec_u32(UInt32 data)
 *   UInt32 *Rte_IWriteRef_CDDInterface_Per1_MechMtrPos2TimeStamp_USec_u32(void)
 *   void Rte_IWrite_CDDInterface_Per1_ModIdxFinal_Uls_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_ModIdxFinal_Uls_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_MtrCurrDax_Amp_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_MtrCurrDax_Amp_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_MtrCurrK1_Amp_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_MtrCurrK1_Amp_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_MtrCurrK2_Amp_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_MtrCurrK2_Amp_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_MtrCurrQaxFinalRef_Amp_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_MtrCurrQaxFinalRef_Amp_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_MtrCurrQax_Amp_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_MtrCurrQax_Amp_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_RxMtrPos1ParityAccum_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Per1_RxMtrPos1ParityAccum_Cnt_u16(void)
 *   void Rte_IWrite_CDDInterface_Per1_SysCVSwitchADC_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Per1_SysCVSwitchADC_Cnt_u16(void)
 *   void Rte_IWrite_CDDInterface_Per1_SysCorrectedElecMtrPos_Rev_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per1_SysCorrectedElecMtrPos_Rev_f32(void)
 *   void Rte_IWrite_CDDInterface_Per1_UncorrMechMtrPos1_Rev_u0p16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_CDDInterface_Per1_UncorrMechMtrPos1_Rev_u0p16(void)
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
 *   Std_ReturnType Rte_Call_CDDPorts_ClearPhsReasSum(UInt16 DataAccessBfr_Cnt_T_u16)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_SA_CDDINTERFACE_APPL_CODE) CDDInterface_Per1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDDInterface_Per2
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
 *   Implicit S/R API:
 *   -----------------
 *   SInt8 Rte_IRead_CDDInterface_Per2_AssistAssemblyPolarity_Cnt_s08(void)
 *   UInt16 Rte_IRead_CDDInterface_Per2_CommOffset_Cnt_u16(void)
 *   Float Rte_IRead_CDDInterface_Per2_MRFMtrVel_MtrRadpS_f32(void)
 *   Float Rte_IRead_CDDInterface_Per2_MtrCurr1TempOffset_Volt_f32(void)
 *   Float Rte_IRead_CDDInterface_Per2_MtrCurr2TempOffset_Volt_f32(void)
 *   SInt8 Rte_IRead_CDDInterface_Per2_MtrPosPolarity_Cnt_s08(void)
 *   SInt16 Rte_IRead_CDDInterface_Per2_MtrTrqCmdSign_Cnt_s16(void)
 *   Float Rte_IRead_CDDInterface_Per2_Vecu_Volt_f32(void)
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

FUNC(void, RTE_SA_CDDINTERFACE_APPL_CODE) CDDInterface_Per2(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDDInterface_Per4
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
 *   Implicit S/R API:
 *   -----------------
 *   SInt8 Rte_IRead_CDDInterface_Per4_MtrElecMechPolarity_Cnt_s08(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_CDDInterface_Per4_BallNutTempEstSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_BallNutTempEstSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_DampingSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_DampingSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_DftAsstTbl_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_DftAsstTbl_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_DisableCEBusNormComm_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_DisableCEBusNormComm_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_DisableHSBusNormComm_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_DisableHSBusNormComm_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_DrivingDynSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_DrivingDynSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_DwnldAsstGain_Uls_f32(Float data)
 *   Float *Rte_IWriteRef_CDDInterface_Per4_DwnldAsstGain_Uls_f32(void)
 *   void Rte_IWrite_CDDInterface_Per4_EOTImpactSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_EOTImpactSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_EOTThermalSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_EOTThermalSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_EngONSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_EngONSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_FreqDepDmpSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_FreqDepDmpSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_FricLrnSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_FricLrnSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_HysAddSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_HysAddSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_HystCompSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_HystCompSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_KinIntDiagSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_KinIntDiagSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_LimitSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_LimitSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_MEC_Cnt_enum(ManufModeType data)
 *   ManufModeType *Rte_IWriteRef_CDDInterface_Per4_MEC_Cnt_enum(void)
 *   void Rte_IWrite_CDDInterface_Per4_MfgDiagInhibit_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_MfgDiagInhibit_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_ModIdxSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_ModIdxSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_MultIgnSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_MultIgnSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_ParkAstSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_ParkAstSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_PosTrajEnable_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_PosTrajEnable_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_PullCompLrnSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_PullCompLrnSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_PullCompSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_PullCompSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_ReturnSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_ReturnSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_RxMsgsSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_RxMsgsSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_SftEndStpSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_SftEndStpSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_SrlComSvcDft_Cnt_b32(UInt32 data)
 *   UInt32 *Rte_IWriteRef_CDDInterface_Per4_SrlComSvcDft_Cnt_b32(void)
 *   void Rte_IWrite_CDDInterface_Per4_ThermalDCSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_ThermalDCSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_TrqRmpSrlComSvcDft_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_TrqRmpSrlComSvcDft_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface_Per4_WIRMfgEnabled_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface_Per4_WIRMfgEnabled_Cnt_lgc(void)
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
 *   Std_ReturnType Rte_Call_CDDPorts_ApplyMtrElecMechPol(SInt8 MtrElecMechPol_Cnt_s8)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_SA_CDDINTERFACE_APPL_CODE) CDDInterface_Per4(void);

# define RTE_STOP_SEC_SA_CDDINTERFACE_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1412348629
#    error "The magic number of the generated file <C:/Workspace/GM_C1XX_EPS_TMS570-General_Motors_working/C1xx/GM_C1XX_EPS_TMS570/SwProject/CDDInterface/utp/contract/Rte_Sa_CDDInterface.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1412348629
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_SA_CDDINTERFACE_H */
