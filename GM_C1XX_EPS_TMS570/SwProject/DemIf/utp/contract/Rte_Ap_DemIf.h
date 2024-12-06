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
 *          File:  Rte_Ap_DemIf.h
 *     Workspace:  C:/Users/gz324f/Desktop/working/GM_C1XX_EPS_TMS570/GM_C1XX_EPS_TMS570/SwProject/DemIf/autosar/Ap_DemIf.dcf
 *     SW-C Type:  Ap_DemIf
 *  Generated at:  Wed Mar 30 13:18:27 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <Ap_DemIf> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_DEMIF_H
# define _RTE_AP_DEMIF_H

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

typedef P2CONST(struct Rte_CDS_Ap_DemIf, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BusOffCE_Cnt_lgc (FALSE)
# define Rte_InitValue_BusOffHS_Cnt_lgc (FALSE)
# define Rte_InitValue_DisableCEBusNormComm_Cnt_lgc (FALSE)
# define Rte_InitValue_DisableHSBusNormComm_Cnt_lgc (FALSE)
# define Rte_InitValue_EngRunAtvForCTCInhibit_Cnt_lgc (FALSE)
# define Rte_InitValue_SPMForCTCInhibit_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComEngOn_Cnt_lgc (FALSE)
# define Rte_InitValue_SrlComSysPwrMd_Cnt_enum (0U)
# define Rte_InitValue_Vecu_Volt_f32 (5.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DemIf_BusOffCE_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DemIf_BusOffHS_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DemIf_DisableCEBusNormComm_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DemIf_DisableHSBusNormComm_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DemIf_EngRunAtvForCTCInhibit_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DemIf_SPMForCTCInhibit_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DemIf_SrlComSysPwrMd_Cnt_enum(P2VAR(SysPwrMd, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DemIf_Vecu_Volt_f32(P2VAR(Float, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DemIf_NxtrDiagMgr_GetNTCActive(NTCNumber NTC_Cnt_T_enum, P2VAR(Boolean, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) NTCActive_Ptr_T_lgc);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DemIf_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DemIf_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, P2VAR(UInt32, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DemIf_SystemTime_GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_AP_DEMIF_APPL_VAR) CurrentTime);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_DemIf_Per1_SrlComEngOn_Cnt_lgc() \
  (Rte_Inst_Ap_DemIf->DemIf_Per1_SrlComEngOn_Cnt_lgc->value)


/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BusOffCE_Cnt_lgc Rte_Read_Ap_DemIf_BusOffCE_Cnt_lgc
# define Rte_Read_BusOffHS_Cnt_lgc Rte_Read_Ap_DemIf_BusOffHS_Cnt_lgc
# define Rte_Read_DisableCEBusNormComm_Cnt_lgc Rte_Read_Ap_DemIf_DisableCEBusNormComm_Cnt_lgc
# define Rte_Read_DisableHSBusNormComm_Cnt_lgc Rte_Read_Ap_DemIf_DisableHSBusNormComm_Cnt_lgc
# define Rte_Read_EngRunAtvForCTCInhibit_Cnt_lgc Rte_Read_Ap_DemIf_EngRunAtvForCTCInhibit_Cnt_lgc
# define Rte_Read_SPMForCTCInhibit_Cnt_lgc Rte_Read_Ap_DemIf_SPMForCTCInhibit_Cnt_lgc
# define Rte_Read_SrlComSysPwrMd_Cnt_enum Rte_Read_Ap_DemIf_SrlComSysPwrMd_Cnt_enum
# define Rte_Read_Vecu_Volt_f32 Rte_Read_Ap_DemIf_Vecu_Volt_f32


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_NxtrDiagMgr_GetNTCActive Rte_Call_Ap_DemIf_NxtrDiagMgr_GetNTCActive
# define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16 Rte_Call_Ap_DemIf_SystemTime_DtrmnElapsedTime_mS_u16
# define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u32 Rte_Call_Ap_DemIf_SystemTime_DtrmnElapsedTime_mS_u32
# define Rte_Call_SystemTime_GetSystemTime_mS_u32 Rte_Call_Ap_DemIf_SystemTime_GetSystemTime_mS_u32




# define RTE_START_SEC_AP_DEMIF_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemIf_DemShutdown
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <DemShutdown> of PortPrototype <DemIf>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DemIf_DemShutdown(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DEMIF_APPL_CODE) DemIf_DemShutdown(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemIf_Per1
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
 *   Std_ReturnType Rte_Read_SrlComSysPwrMd_Cnt_enum(SysPwrMd *data)
 *
 *   Implicit S/R API:
 *   -----------------
 *   Boolean Rte_IRead_DemIf_Per1_SrlComEngOn_Cnt_lgc(void)
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

FUNC(void, RTE_AP_DEMIF_APPL_CODE) DemIf_Per1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemIf_RestartDem
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RestartDem> of PortPrototype <DemIf>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DemIf_RestartDem(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DEMIF_APPL_CODE) DemIf_RestartDem(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemIf_SetEventStatus
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <DemIf>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BusOffCE_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_BusOffHS_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_DisableCEBusNormComm_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_DisableHSBusNormComm_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_EngRunAtvForCTCInhibit_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_SPMForCTCInhibit_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_SrlComSysPwrMd_Cnt_enum(SysPwrMd *data)
 *   Std_ReturnType Rte_Read_Vecu_Volt_f32(Float *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_GetNTCActive(NTCNumber NTC_Cnt_T_enum, Boolean *NTCActive_Ptr_T_lgc)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, UInt32 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DemIf_SetEventStatus(UInt8 EventId, NxtrDiagMgrStatus EventStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DemIf_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DEMIF_APPL_CODE) DemIf_SetEventStatus(UInt8 EventId, NxtrDiagMgrStatus EventStatus);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemIf_SetOperationCycleState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetOperationCycleState> of PortPrototype <DemIf>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DemIf_SetOperationCycleState(NxtrOpCycle NxtrOperationCycleId, NxtrOpCycleState NxtrCycleState)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DEMIF_APPL_CODE) DemIf_SetOperationCycleState(NxtrOpCycle NxtrOperationCycleId, NxtrOpCycleState NxtrCycleState);

# define RTE_STOP_SEC_AP_DEMIF_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_DemIf_E_NOT_OK (1U)

# define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1459358943
#    error "The magic number of the generated file <C:/Users/gz324f/Desktop/working/GM_C1XX_EPS_TMS570/GM_C1XX_EPS_TMS570/SwProject/DemIf/utp/contract/Ap_DemIf/Rte_Ap_DemIf.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1459358943
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_DEMIF_H */
