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
 *          File:  Components/Rte_NtWrap.h
 *     Workspace:  C:/02_EA3Int/BEV/wip_fz9hxm/GM_C1XX_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *  Generated at:  Wed Jun 22 17:08:27 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_NTWRAP_H
# define _RTE_NTWRAP_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/

# define RTE_STOP_SEC_CODE
# include "MemMap.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_AP_ASTLMT_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_ASTLMT_APPL_CODE) AstLmt_Scom_ManualTrqCmd(Boolean EnableManualCtrl, Float MtrTrqCmd_MtrNm_f32);
#  define RTE_STOP_SEC_AP_ASTLMT_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_AssistLmtFunc_Scom_ManualTrqCmd AstLmt_Scom_ManualTrqCmd
#  define RTE_START_SEC_SA_CMMTRCURR_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_SA_CMMTRCURR_APPL_CODE) CmMtrCurr_SCom_CalGain(void);
#  define RTE_STOP_SEC_SA_CMMTRCURR_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_CmMtrCurr_SCom_CalGain CmMtrCurr_SCom_CalGain
#  define RTE_START_SEC_SA_CMMTRCURR_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_SA_CMMTRCURR_APPL_CODE) CmMtrCurr_SCom_CalOffset(void);
#  define RTE_STOP_SEC_SA_CMMTRCURR_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_CmMtrCurr_SCom_CalOffset CmMtrCurr_SCom_CalOffset
#  define RTE_START_SEC_SA_CMMTRCURR_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_SA_CMMTRCURR_APPL_CODE) CmMtrCurr_SCom_SetMtrCurrCals(P2CONST(PhaseCurrCal_DataType, AUTOMATIC, RTE_SA_CMMTRCURR_APPL_DATA) ShCurrCalPtr);
#  define RTE_STOP_SEC_SA_CMMTRCURR_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_CmMtrCurr_SCom_SetMtrCurrCals(arg1) (CmMtrCurr_SCom_SetMtrCurrCals(arg1), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_SA_DIGCOLPS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_SCom_CustClrTrim(void);
#  define RTE_STOP_SEC_SA_DIGCOLPS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_DigColPs_SCom_CustClearTrim() (DigColPs_SCom_CustClrTrim(), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_SA_DIGCOLPS_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_SCom_CustSetTrim(void);
#  define RTE_STOP_SEC_SA_DIGCOLPS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_DigColPs_SCom_CustSetTrim DigColPs_SCom_CustSetTrim
#  define RTE_START_SEC_SA_DIGCOLPS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_SCom_NxtClrTrim(void);
#  define RTE_STOP_SEC_SA_DIGCOLPS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_DigColPs_SCom_NxtClrTrim() (DigColPs_SCom_NxtClrTrim(), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_SA_DIGCOLPS_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_SCom_NxtSetTrim(void);
#  define RTE_STOP_SEC_SA_DIGCOLPS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_DigColPs_SCom_NxtSetTrim DigColPs_SCom_NxtSetTrim
#  define RTE_START_SEC_SA_DIGHWTRQSENT_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_SA_DIGHWTRQSENT_APPL_CODE) DigHwTrqSENT_SCom_ClrTrqTrim(void);
#  define RTE_STOP_SEC_SA_DIGHWTRQSENT_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_DigHwTrqSENT_SCom_ClrTrqTrim DigHwTrqSENT_SCom_ClrTrqTrim
#  define RTE_START_SEC_SA_DIGHWTRQSENT_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_SA_DIGHWTRQSENT_APPL_CODE) DigHwTrqSENT_SCom_SetTrqTrim(void);
#  define RTE_STOP_SEC_SA_DIGHWTRQSENT_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_DigHwTrqSENT_SCom_SetTrqTrim DigHwTrqSENT_SCom_SetTrqTrim
#  define RTE_START_SEC_SA_DIGHWTRQSENT_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_SA_DIGHWTRQSENT_APPL_CODE) DigHwTrqSENT_SCom_WriteData(Float HwTrqTrim_HwNm_f32);
#  define RTE_STOP_SEC_SA_DIGHWTRQSENT_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_DigHwTrqSENT_SCom_WriteData(arg1) (DigHwTrqSENT_SCom_WriteData(arg1), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_AP_GENPOSTRAJ_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_AP_GENPOSTRAJ_APPL_CODE) GenPosTraj_SCom_SetInputParam(Float PosServHwAngle_HwDeg_f32, Float TargetVelocity_HwDegpSec_f32, Float TargetAcceleration_HwDegpSecSqr_f32);
#  define RTE_STOP_SEC_AP_GENPOSTRAJ_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_GeneratePosTraj_SCom_SetInputParam(arg1, arg2, arg3) (GenPosTraj_SCom_SetInputParam(arg1, arg2, arg3), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_AP_POLARITY_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_AP_POLARITY_APPL_CODE) Polarity_SCom_SetPolarity(UInt8 Polarity_Cnt_T_b08);
#  define RTE_STOP_SEC_AP_POLARITY_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_Polarity_SCom_SetPolarity(arg1) (Polarity_SCom_SetPolarity(arg1), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_AP_CURRPARAMCOMP_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_AP_CURRPARAMCOMP_APPL_CODE) SCom_EOLNomMtrParam_Set(Float NomKe_VpRadpS_f32, Float NomRmtr_Ohm_f32);
#  define RTE_STOP_SEC_AP_CURRPARAMCOMP_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_SCom_EOLNomMtrParam_Set(arg1, arg2) (SCom_EOLNomMtrParam_Set(arg1, arg2), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_AP_TSMIT_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_AP_TSMIT_APPL_CODE) TSMit_SCom_GainReset(void);
#  define RTE_STOP_SEC_AP_TSMIT_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_TSMit_SCom_GainReset() (TSMit_SCom_GainReset(), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_AP_TRQCANC_APPL_CODE
#  include "MemMap.h"
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_AP_TRQCANC_APPL_CODE) TrqCanc_Scom_SetCogTrqCal(P2CONST(UInt16, AUTOMATIC, RTE_AP_TRQCANC_APPL_DATA) CogTrqCalPtr, UInt16 ID);
# else
FUNC(void, RTE_AP_TRQCANC_APPL_CODE) TrqCanc_Scom_SetCogTrqCal(P2CONST(CoggingCancTrq, AUTOMATIC, RTE_AP_TRQCANC_APPL_DATA) CogTrqCalPtr, UInt16 ID);
# endif
#  define RTE_STOP_SEC_AP_TRQCANC_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_TrqCanc_Scom_SetCogTrqCal(arg1, arg2) (TrqCanc_Scom_SetCogTrqCal(arg1, arg2), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_AP_TRQCMDSCL_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_AP_TRQCMDSCL_APPL_CODE) TrqCmdScl_SCom_Set(Float Par_f32);
#  define RTE_STOP_SEC_AP_TRQCMDSCL_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_TrqCmdScl_SCom_Set(arg1) (TrqCmdScl_SCom_Set(arg1), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_AP_VEHDYN_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_AP_VEHDYN_APPL_CODE) VehDyn_SCom_ForceCenter(void);
#  define RTE_STOP_SEC_AP_VEHDYN_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_C_VehDyn_SCom_ForceCenter() (VehDyn_SCom_ForceCenter(), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_NTWRAP_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_AssistLmtFunc_Scom_ManualTrqCmd(Boolean EnableManualCtrl, Float MtrTrqCmd_MtrNm_f32);

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_CmMtrCurr_SCom_CalGain(void);

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_CmMtrCurr_SCom_CalOffset(void);

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_CmMtrCurr_SCom_SetMtrCurrCals(P2CONST(PhaseCurrCal_DataType, AUTOMATIC, RTE_NTWRAP_APPL_DATA) ShCurrCalPtr);

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_DigColPs_SCom_CustClrTrim(void);

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_DigColPs_SCom_CustSetTrim(void);

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_DigColPs_SCom_NxtClrTrim(void);

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_DigColPs_SCom_NxtSetTrim(void);

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_DigHwTrqSENT_SCom_ClrTrqTrim(void);

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_DigHwTrqSENT_SCom_SetTrqTrim(void);

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_DigHwTrqSENT_SCom_WriteData(Float HwTrqTrim_HwNm_f32);

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_GeneratePosTraj_SCom_SetInputParam(Float PosServHwAngle_HwDeg_f32, Float TargetVelocity_HwDegpSec_f32, Float TargetAcceleration_HwDegpSecSqr_f32);

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrap_Per1(void);

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_Polarity_SCom_SetPolarity(UInt8 Polarity_Cnt_T_b08);

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_SCom_EOLNomMtrParam_Set(Float NomKe_VpRadpS_f32, Float NomRmtr_Ohm_f32);

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_TSMit_SCom_GainReset(void);

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_TrqCanc_Scom_SetCogTrqCal(P2CONST(UInt16, AUTOMATIC, RTE_NTWRAP_APPL_DATA) CogTrqCalPtr, UInt16 ID);
# else
FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_TrqCanc_Scom_SetCogTrqCal(P2CONST(CoggingCancTrq, AUTOMATIC, RTE_NTWRAP_APPL_DATA) CogTrqCalPtr, UInt16 ID);
# endif

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_TrqCmdScl_SCom_Set(Float Par_f32);

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_VehDyn_SCom_ForceCenter(void);

# define RTE_STOP_SEC_NTWRAP_APPL_CODE
# include "MemMap.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_AssistLmtFunc_Scom_RTE_E_MtrTrqLmt_SCom_VSTH (34U)

#  define RTE_E_AssistLmtFunc_Scom_RTE_E_OK (1U)

#  define RTE_E_CmMtrCurr_SCom_ConditionNotCorrect (34U)

#  define RTE_E_CmMtrCurr_SCom_CurrentOutOfRange (20U)

#  define RTE_E_CmMtrCurr_SCom_VehSpdOutofRange (21U)

#  define RTE_E_DigColPs_SCom_ConditionsNotCorrect (34U)

#  define RTE_E_DigHwTrqSENT_SCom_ConditionsNotCorrect (34U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1466621801
#    error "The magic number of the generated file <C:/02_EA3Int/BEV/wip_fz9hxm/GM_C1XX_EPS_TMS570/SwProject/Source/GenDataRte/Components/Rte_NtWrap.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1466621801
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_NTWRAP_H */
