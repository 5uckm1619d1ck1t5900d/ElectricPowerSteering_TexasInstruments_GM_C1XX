/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2010 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Ap_ThrmlDutyCycle.h
 *     Workspace:  C:/_Synergy_Projects/Working/ThrmDutyCycle-nz63rn/ThrmDutyCycle/autosar
 *     SW-C Type:  Ap_ThrmlDutyCycle
 *  Generated at:  Wed Sep 25 11:48:49 2013
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Application header file for SW-C <Ap_ThrmlDutyCycle> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_THRMLDUTYCYCLE_H
# define _RTE_AP_THRMLDUTYCYCLE_H

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

typedef P2CONST(struct Rte_CDS_Ap_ThrmlDutyCycle, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CuTempEst_DegC_f32 ((Float)0)
# define Rte_InitValue_DefeatDutySvc_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_DutyCycleLevel_Uls_f32 ((Float)0)
# define Rte_InitValue_FiltMeasTemp_DegC_f32 ((Float)0)
# define Rte_InitValue_FilteredPkCurr_AmpSq_f32 ((Float)0)
# define Rte_InitValue_IgnTimeOff_Cnt_u32 ((UInt32)0u)
# define Rte_InitValue_MagTempEst_DegC_f32 ((Float)0)
# define Rte_InitValue_MotorVelCRF_MtrRadpS_f32 ((Float)0)
# define Rte_InitValue_MtrPkCurr_AmpSq_f32 ((Float)0)
# define Rte_InitValue_SiTempEst_DegC_f32 ((Float)0)
# define Rte_InitValue_ThermLimitPerc_Uls_f32 ((Float)0)
# define Rte_InitValue_ThermalLimit_MtrNm_f32 ((Float)8.8)
# define Rte_InitValue_VehTimeValid_Cnt_lgc ((Boolean)FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ThrmlDutyCycle_NxtrDiagMgr_GetNTCFailed(NTCNumber NTC_Cnt_T_enum, P2VAR(Boolean, AUTOMATIC, RTE_AP_THRMLDUTYCYCLE_APPL_VAR) NTCFailed_Ptr_T_lgc);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ThrmlDutyCycle_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_ThrmlDutyCycle_Init1_DefeatDutySvc_Cnt_lgc() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Init1_DefeatDutySvc_Cnt_lgc->value)

# define Rte_IRead_ThrmlDutyCycle_Init1_IgnTimeOff_Cnt_u32() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Init1_IgnTimeOff_Cnt_u32->value)

# define Rte_IRead_ThrmlDutyCycle_Init1_VehTimeValid_Cnt_lgc() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Init1_VehTimeValid_Cnt_lgc->value)

# define Rte_IRead_ThrmlDutyCycle_Per1_CuTempEst_DegC_f32() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_CuTempEst_DegC_f32->value)

# define Rte_IRead_ThrmlDutyCycle_Per1_DefeatDutySvc_Cnt_lgc() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_DefeatDutySvc_Cnt_lgc->value)

# define Rte_IRead_ThrmlDutyCycle_Per1_FiltMeasTemp_DegC_f32() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_FiltMeasTemp_DegC_f32->value)

# define Rte_IRead_ThrmlDutyCycle_Per1_FilteredPkCurr_AmpSq_f32() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_FilteredPkCurr_AmpSq_f32->value)

# define Rte_IRead_ThrmlDutyCycle_Per1_IgnTimeOff_Cnt_u32() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_IgnTimeOff_Cnt_u32->value)

# define Rte_IRead_ThrmlDutyCycle_Per1_MagTempEst_DegC_f32() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_MagTempEst_DegC_f32->value)

# define Rte_IRead_ThrmlDutyCycle_Per1_MotorVelCRF_MtrRadpS_f32() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_MotorVelCRF_MtrRadpS_f32->value)

# define Rte_IRead_ThrmlDutyCycle_Per1_MtrPkCurr_AmpSq_f32() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_MtrPkCurr_AmpSq_f32->value)

# define Rte_IRead_ThrmlDutyCycle_Per1_SiTempEst_DegC_f32() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_SiTempEst_DegC_f32->value)

# define Rte_IRead_ThrmlDutyCycle_Per1_VehTimeValid_Cnt_lgc() \
  (Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_VehTimeValid_Cnt_lgc->value)

# define Rte_IWrite_ThrmlDutyCycle_Per1_DutyCycleLevel_Uls_f32(data) \
  ( \
  Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_DutyCycleLevel_Uls_f32->value = (data) \
  )

# define Rte_IWriteRef_ThrmlDutyCycle_Per1_DutyCycleLevel_Uls_f32() \
  (&Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_DutyCycleLevel_Uls_f32->value)

# define Rte_IWrite_ThrmlDutyCycle_Per1_ThermLimitPerc_Uls_f32(data) \
  ( \
  Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_ThermLimitPerc_Uls_f32->value = (data) \
  )

# define Rte_IWriteRef_ThrmlDutyCycle_Per1_ThermLimitPerc_Uls_f32() \
  (&Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_ThermLimitPerc_Uls_f32->value)

# define Rte_IWrite_ThrmlDutyCycle_Per1_ThermalLimit_MtrNm_f32(data) \
  ( \
  Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_ThermalLimit_MtrNm_f32->value = (data) \
  )

# define Rte_IWriteRef_ThrmlDutyCycle_Per1_ThermalLimit_MtrNm_f32() \
  (&Rte_Inst_Ap_ThrmlDutyCycle->ThrmlDutyCycle_Per1_ThermalLimit_MtrNm_f32->value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_NxtrDiagMgr_GetNTCFailed Rte_Call_Ap_ThrmlDutyCycle_NxtrDiagMgr_GetNTCFailed
# define Rte_Call_NxtrDiagMgr_SetNTCStatus Rte_Call_Ap_ThrmlDutyCycle_NxtrDiagMgr_SetNTCStatus




# define RTE_START_SEC_AP_THRMLDUTYCYCLE_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ThrmlDutyCycle_Init1
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
 *   Boolean Rte_IRead_ThrmlDutyCycle_Init1_DefeatDutySvc_Cnt_lgc(void)
 *   UInt32 Rte_IRead_ThrmlDutyCycle_Init1_IgnTimeOff_Cnt_u32(void)
 *   Boolean Rte_IRead_ThrmlDutyCycle_Init1_VehTimeValid_Cnt_lgc(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_THRMLDUTYCYCLE_APPL_CODE) ThrmlDutyCycle_Init1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ThrmlDutyCycle_Per1
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
 *   Implicit S/R API:
 *   -----------------
 *   Float Rte_IRead_ThrmlDutyCycle_Per1_CuTempEst_DegC_f32(void)
 *   Boolean Rte_IRead_ThrmlDutyCycle_Per1_DefeatDutySvc_Cnt_lgc(void)
 *   Float Rte_IRead_ThrmlDutyCycle_Per1_FiltMeasTemp_DegC_f32(void)
 *   Float Rte_IRead_ThrmlDutyCycle_Per1_FilteredPkCurr_AmpSq_f32(void)
 *   UInt32 Rte_IRead_ThrmlDutyCycle_Per1_IgnTimeOff_Cnt_u32(void)
 *   Float Rte_IRead_ThrmlDutyCycle_Per1_MagTempEst_DegC_f32(void)
 *   Float Rte_IRead_ThrmlDutyCycle_Per1_MotorVelCRF_MtrRadpS_f32(void)
 *   Float Rte_IRead_ThrmlDutyCycle_Per1_MtrPkCurr_AmpSq_f32(void)
 *   Float Rte_IRead_ThrmlDutyCycle_Per1_SiTempEst_DegC_f32(void)
 *   Boolean Rte_IRead_ThrmlDutyCycle_Per1_VehTimeValid_Cnt_lgc(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_ThrmlDutyCycle_Per1_DutyCycleLevel_Uls_f32(Float data)
 *   Float *Rte_IWriteRef_ThrmlDutyCycle_Per1_DutyCycleLevel_Uls_f32(void)
 *   void Rte_IWrite_ThrmlDutyCycle_Per1_ThermLimitPerc_Uls_f32(Float data)
 *   Float *Rte_IWriteRef_ThrmlDutyCycle_Per1_ThermLimitPerc_Uls_f32(void)
 *   void Rte_IWrite_ThrmlDutyCycle_Per1_ThermalLimit_MtrNm_f32(Float data)
 *   Float *Rte_IWriteRef_ThrmlDutyCycle_Per1_ThermalLimit_MtrNm_f32(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_GetNTCFailed(NTCNumber NTC_Cnt_T_enum, Boolean *NTCFailed_Ptr_T_lgc)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_THRMLDUTYCYCLE_APPL_CODE) ThrmlDutyCycle_Per1(void);

# define RTE_STOP_SEC_AP_THRMLDUTYCYCLE_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NxtrDiagMgr_E_NOT_OK (1u)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1380124920
#    error "The magic number of the generated file <C:/_Synergy_Projects/Working/ThrmDutyCycle-nz63rn/ThrmDutyCycle/utp/contract/Rte_Ap_ThrmlDutyCycle.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1380124920
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_THRMLDUTYCYCLE_H */
