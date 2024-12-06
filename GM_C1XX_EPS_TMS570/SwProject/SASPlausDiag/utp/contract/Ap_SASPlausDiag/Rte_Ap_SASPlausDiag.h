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
 *          File:  Rte_Ap_SASPlausDiag.h
 *     Workspace:  C:/Workspace/GM_C1XX_Working/C1xx/GM_C1XX_EPS_TMS570/SwProject/SASPlausDiag/autosar
 *     SW-C Type:  Ap_SASPlausDiag
 *  Generated at:  Thu Mar 26 14:59:50 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <Ap_SASPlausDiag> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_SASPLAUSDIAG_H
# define _RTE_AP_SASPLAUSDIAG_H

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

typedef P2CONST(struct Rte_CDS_Ap_SASPlausDiag, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_I2CHwAbsPos_HwDeg_f32 (0.0F)
# define Rte_InitValue_I2CHwAbsPosValid_Cnt_lgc (FALSE)
# define Rte_InitValue_VdAuthority_Uls_f32 (0.0F)
# define Rte_InitValue_VdHwPos_HwDeg_f32 (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_SASPlausDiag_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_SASPlausDiag_Per1_I2CHwAbsPosValid_Cnt_lgc() \
  (Rte_Inst_Ap_SASPlausDiag->SASPlausDiag_Per1_I2CHwAbsPosValid_Cnt_lgc->value)

# define Rte_IRead_SASPlausDiag_Per1_I2CHwAbsPos_HwDeg_f32() \
  (Rte_Inst_Ap_SASPlausDiag->SASPlausDiag_Per1_I2CHwAbsPos_HwDeg_f32->value)

# define Rte_IRead_SASPlausDiag_Per1_VdAuthority_Uls_f32() \
  (Rte_Inst_Ap_SASPlausDiag->SASPlausDiag_Per1_VdAuthority_Uls_f32->value)

# define Rte_IRead_SASPlausDiag_Per1_VdHwPos_HwDeg_f32() \
  (Rte_Inst_Ap_SASPlausDiag->SASPlausDiag_Per1_VdHwPos_HwDeg_f32->value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_NxtrDiagMgr_SetNTCStatus Rte_Call_Ap_SASPlausDiag_NxtrDiagMgr_SetNTCStatus




# define RTE_START_SEC_AP_SASPLAUSDIAG_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: SASPlausDiag_Per1
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
 *   Boolean Rte_IRead_SASPlausDiag_Per1_I2CHwAbsPosValid_Cnt_lgc(void)
 *   Float Rte_IRead_SASPlausDiag_Per1_I2CHwAbsPos_HwDeg_f32(void)
 *   Float Rte_IRead_SASPlausDiag_Per1_VdAuthority_Uls_f32(void)
 *   Float Rte_IRead_SASPlausDiag_Per1_VdHwPos_HwDeg_f32(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_SASPLAUSDIAG_APPL_CODE) SASPlausDiag_Per1(void);

# define RTE_STOP_SEC_AP_SASPLAUSDIAG_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1427393393
#    error "The magic number of the generated file <C:/Workspace/GM_C1XX_Working/C1xx/GM_C1XX_EPS_TMS570/SwProject/SASPlausDiag/utp/contract/Ap_SASPlausDiag/Rte_Ap_SASPlausDiag.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1427393393
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_SASPLAUSDIAG_H */
