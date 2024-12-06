/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  NtWrap.c
 *     Workspace:  C:/Workspace/GM_C1XX_Working/C1xx/GM_C1XX_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *     SW-C Type:  NtWrap
 *  Generated at:  Mon Mar 30 10:34:28 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  C-Code implementation template for SW-C <NtWrap>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* Version Control:
 * Date Created:      Mon Jul  8 13:53:28 2013
 * %version:          11 %
 * %date_modified:    Mon Sep 30 12:42:52 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 * 08/14/13  2        LWW       Added Digital Torque Trim functions
 * 09/04/13  4        LWW       Removed unused Rte_Start
 * 09/11/13  5        BWL       Remove NtWrapC_StaMd_SCom_EcuReset per A5578
 *                              Pass Polarity_SCom_SetPolarity return per A5595
 * 09/23/13  6        LWW       Added DigColPos Trim Functions
 * 09/24/13  7        LWW       Updated polarity functions for new component design
 * 09/30/13  8        LWW       Added return value to CalOffset
 * 03/18/14  8        BWL       Added customer and nexteer versions of DigColPos trim functions.
 * 08/14/14  11       JWJ       Added DigHwTrqSENT WriteData SCom function
 * 09/25/14  12       JWJ       Added SCom for GenPosTraj component set function                                12491
 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Constants:
 ==========
  D_RACKTOVEHCNTRUNLEARNED_CNT_U16
    This constant has been added until anomaly 3744 can be corrected. Once the anomaly is corrected, this can be removed from StdDef. This should only be used by BMW as of 12Sep12.


 Runnable Entities:
 ==================
  NtWrap_Per1
    Dummy function to map this component onto an application for generation.

 *********************************************************************************************************************/

#include "Rte_NtWrap.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#define NTWRAP_C /* Expose SWC specific defintions in header */
#include "NtWrap.h"

#include "Cd_NvMProxy.h"
#include "PwmCdd.h"
#include "WdgM.h"
#include "WdgM_PBcfg.h"
#include "Wdg.h"
#include "Wdg_TMS570LS3x_Lcfg.h"
#include "Os.h"
#include "trustfct.h"
#include "Det.h"
#include "Adc.h"
#include "Dma.h"

extern void ApXcpWriteCommon(void);

 typedef union{
	 Std_ReturnType		Std_Return;
 }RetBuf_Type;
 
 /* This design provides a seperate return buffer for each non-trusted function interface.  This provides the ability to call non-trusted 
  * funcitons from different preemtion levels without concern for return buffer consistiency.  However, it does not all re-entrant calling
  * for the same function, since both invocations will be accessing the same buffer. 
  * The Os assigned non-trusted funciton index/id is used to index into the NtWrap_RetBuf[], therefore to have the minimum required size
  * for the return buffer, the functions with non-void return values shoulD be grouped together and starting at id 0.  Note that this
  * conifiguration grouping may not always be possible depending on the Os config, thus the array may contain some unused indexes.
  */
 
 #define D_NUMRETURNBUFF_CNT_U08	20u
 
#define NTWRAP_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */
STATIC VAR(RetBuf_Type, AUTOMATIC) NtWrap_RetBuf[D_NUMRETURNBUFF_CNT_U08];
#define NTWRAP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */

typedef struct {
	float32 arg1_f32;
	float32 arg2_f32;
	float32 arg3_f32;
} NtPar1_Type;

typedef struct {
	float32 arg1_f32;
	uint8 arg2_u8;
	float32 arg3_f32;
} NtPar2_Type;

typedef struct {
	uint8 arg1_u8;
	uint8 arg2_u8;
	uint8 arg3_u8;
	uint8 arg4_u8;
	uint8 arg5_u8;
	uint8 arg6_u8;
} NtPar3_Type;

typedef struct {
	boolean arg1_lgc;
	float32 arg2_f32;
} NtPar4_Type;

typedef struct {
	const CoggingCancTrq* arg1_cogtrqptr;
	uint16 arg2_u16;
} NtPar5_Type;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Boolean: Boolean (standard type)
 * Double: Real in interval [-DBL_MAX...DBL_MAX] with double precision including NaN (standard type)
 * Float: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * SInt16: Integer in interval [-32768...32767] (standard type)
 * SInt32: Integer in interval [-2147483648...2147483647] (standard type)
 * SInt8: Integer in interval [-128...127] (standard type)
 * UInt16: Integer in interval [0...65535] (standard type)
 * UInt32: Integer in interval [0...4294967295] (standard type)
 * UInt8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * MtrCurrOffProcessFlag: Enumeration of integer in interval [0...4] with enumerators
 *   CURROFF_INIT (0U)
 *   CURROFF_PROCESSING (1U)
 *   CURROFF_PASS (2U)
 *   CURROFF_FAIL (3U)
 *
 * Array Types:
 * ============
 * CoggingCancTrq: Array with 512 element(s) of type UInt16
 *
 * Record Types:
 * =============
 * PhaseCurrCal_DataType: Record with elements
 *   EOLMtrCurrVcalCmd_VoltCnts_f32 of type Float
 *   EOLMtrCurr1OffsetLo_Volts_f32 of type Float
 *   EOLPhscurr1Gain_AmpspVolt_f32 of type Float
 *   EOLPhscurr2Gain_AmpspVolt_f32 of type Float
 *   EOLMtrCurr2OffsetLo_Volts_f32 of type Float
 *   EOLMtrCurr1OffsetDiff_Volts_f32 of type Float
 *   EOLMtrCurr2OffsetDiff_Volts_f32 of type Float
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Defined Constants
 *
 **********************************************************************************************************************
 *
 * Primitive Type Constants:
 * =========================
 * Boolean: D_FALSE_CNT_LGC = FALSE
 * Boolean: D_TRUE_CNT_LGC = TRUE
 * Double: D_SFINVMILLI_ULS_F32 = 1000
 * Float: D_100MS_SEC_F32 = 0.1F
 * Float: D_180OVRPI_ULS_F32 = 57.295779513082F
 * Float: D_2MS_SEC_F32 = 0.002F
 * Float: D_2PI_ULS_F32 = 6.2831853071796F
 * Float: D_MSECPERSEC_ULS_F32 = 1000.0F
 * Float: D_MTRTRQCMDHILMT_MTRNM_F32 = 8.8F
 * Float: D_MTRTRQCMDLOLMT_MTRNM_F32 = -8.8F
 * Float: D_ONE_ULS_F32 = 1.0F
 * Float: D_PIOVR180_ULS_F32 = 0.0174532925199F
 * Float: D_PI_ULS_F32 = 3.1415926535898F
 * Float: D_RADPERREV_ULS_F32 = 6.28318530718F
 * Float: D_VECUMIN_VOLTS_F32 = 5.0F
 * Float: D_ZERO_ULS_F32 = 0.0F
 * SInt16: D_NEGONE_CNT_S16 = -1
 * SInt16: D_ONE_CNT_S16 = 1
 * SInt16: D_ZERO_CNT_S16 = 0
 * SInt32: D_NEGONE_CNT_S32 = -1
 * SInt32: D_ONE_CNT_S32 = 1
 * SInt32: D_ZERO_CNT_S32 = 0
 * SInt8: D_NEGONE_CNT_S8 = -1
 * SInt8: D_ONE_CNT_S8 = 1
 * SInt8: D_ZERO_CNT_S8 = 0
 * UInt16: D_ONE_CNT_U16 = 1U
 * UInt16: D_RACKTOVEHCNTRUNLEARNED_CNT_U16 = 4095U
 * UInt16: D_ZERO_CNT_U16 = 0U
 * UInt32: D_ONE_CNT_U32 = 1U
 * UInt32: D_ZERO_CNT_U32 = 0U
 * UInt8: D_MTRPOLESDIV2_CNT_U8 = 3U
 * UInt8: D_ONE_CNT_U8 = 1U
 * UInt8: D_QUADRANT1_CNT_U8 = 1U
 * UInt8: D_QUADRANT2_CNT_U8 = 2U
 * UInt8: D_QUADRANT3_CNT_U8 = 3U
 * UInt8: D_QUADRANT4_CNT_U8 = 4U
 * UInt8: D_ZERO_CNT_U8 = 0U
 *
 *********************************************************************************************************************/


#define RTE_START_SEC_NTWRAP_APPL_CODE
#include "MemMap.h"

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssistLmtFunc_Scom_ManualTrqCmd
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ManualTrqCmd> of PortPrototype <AssistLmtFunc_Scom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_AssistLmtFunc_Scom_ManualTrqCmd(Boolean EnableManualCtrl, Float MtrTrqCmd_MtrNm_f32)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_AssistLmtFunc_Scom_RTE_E_MtrTrqLmt_SCom_VSTH, RTE_E_AssistLmtFunc_Scom_RTE_E_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NtWrapC_AssistLmtFunc_Scom_ManualTrqCmd(Boolean EnableManualCtrl, Float MtrTrqCmd_MtrNm_f32)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AssistLmtFunc_Scom_RTE_E_MtrTrqLmt_SCom_VSTH
 *   RTE_E_AssistLmtFunc_Scom_RTE_E_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_AssistLmtFunc_Scom_ManualTrqCmd(Boolean EnableManualCtrl, Float MtrTrqCmd_MtrNm_f32)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_AssistLmtFunc_Scom_ManualTrqCmd (returns application error)
 *********************************************************************************************************************/
	   NtPar4_Type myargs;

	   myargs.arg1_lgc =  EnableManualCtrl;
	   myargs.arg2_f32 =  MtrTrqCmd_MtrNm_f32;
	   CallNonTrustedFunction(NtWrapS_AssistLmtFunc_Scom_ManualTrqCmd, &myargs);
	   return(NtWrap_RetBuf[NtWrapS_AssistLmtFunc_Scom_ManualTrqCmd].Std_Return);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmMtrCurr_SCom_CalGain
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CalGain> of PortPrototype <CmMtrCurr_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_CmMtrCurr_SCom_CalGain(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CmMtrCurr_SCom_ConditionNotCorrect, RTE_E_CmMtrCurr_SCom_CurrentOutOfRange, RTE_E_CmMtrCurr_SCom_VehSpdOutofRange
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NtWrapC_CmMtrCurr_SCom_CalGain(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CmMtrCurr_SCom_ConditionNotCorrect
 *   RTE_E_CmMtrCurr_SCom_CurrentOutOfRange
 *   RTE_E_CmMtrCurr_SCom_VehSpdOutofRange
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_CmMtrCurr_SCom_CalGain(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_CmMtrCurr_SCom_CalGain (returns application error)
 *********************************************************************************************************************/

	CallNonTrustedFunction(NtWrapS_CmMtrCurr_SCom_CalGain, (NonTrustedFunctionParameterRefType)NULL_PTR);

	return(NtWrap_RetBuf[NtWrapS_CmMtrCurr_SCom_CalGain].Std_Return);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmMtrCurr_SCom_CalOffset
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CalOffset> of PortPrototype <CmMtrCurr_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_CmMtrCurr_SCom_CalOffset(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CmMtrCurr_SCom_ConditionNotCorrect, RTE_E_CmMtrCurr_SCom_CurrentOutOfRange, RTE_E_CmMtrCurr_SCom_VehSpdOutofRange
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NtWrapC_CmMtrCurr_SCom_CalOffset(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CmMtrCurr_SCom_ConditionNotCorrect
 *   RTE_E_CmMtrCurr_SCom_CurrentOutOfRange
 *   RTE_E_CmMtrCurr_SCom_VehSpdOutofRange
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_CmMtrCurr_SCom_CalOffset(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_CmMtrCurr_SCom_CalOffset (returns application error)
 *********************************************************************************************************************/

	CallNonTrustedFunction(NtWrapS_CmMtrCurr_SCom_CalOffset, (NonTrustedFunctionParameterRefType)NULL_PTR);

	return(NtWrap_RetBuf[NtWrapS_CmMtrCurr_SCom_CalOffset].Std_Return);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmMtrCurr_SCom_SetMtrCurrCals
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetMtrCurrCals> of PortPrototype <CmMtrCurr_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_CmMtrCurr_SCom_SetMtrCurrCals(const PhaseCurrCal_DataType *ShCurrCalPtr)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NtWrapC_CmMtrCurr_SCom_SetMtrCurrCals(const PhaseCurrCal_DataType *ShCurrCalPtr)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_CmMtrCurr_SCom_SetMtrCurrCals(P2CONST(PhaseCurrCal_DataType, AUTOMATIC, RTE_NTWRAP_APPL_DATA) ShCurrCalPtr)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_CmMtrCurr_SCom_SetMtrCurrCals
 *********************************************************************************************************************/

	CallNonTrustedFunction(NtWrapS_CmMtrCurr_SCom_SetMtrCurrCals, (NonTrustedFunctionParameterRefType)ShCurrCalPtr);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_SCom_CustClrTrim
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CustClearTrim> of PortPrototype <DigColPs_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_DigColPs_SCom_CustClearTrim(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NtWrapC_DigColPs_SCom_CustClrTrim(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_DigColPs_SCom_CustClrTrim(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_DigColPs_SCom_CustClrTrim
 *********************************************************************************************************************/

	CallNonTrustedFunction(NtWrapS_DigColPs_SCom_CustClearTrim, (NonTrustedFunctionParameterRefType)NULL_PTR);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_SCom_CustSetTrim
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CustSetTrim> of PortPrototype <DigColPs_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_DigColPs_SCom_CustSetTrim(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DigColPs_SCom_ConditionsNotCorrect
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NtWrapC_DigColPs_SCom_CustSetTrim(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DigColPs_SCom_ConditionsNotCorrect
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_DigColPs_SCom_CustSetTrim(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_DigColPs_SCom_CustSetTrim (returns application error)
 *********************************************************************************************************************/

	CallNonTrustedFunction(NtWrapS_DigColPs_SCom_CustSetTrim, (NonTrustedFunctionParameterRefType)NULL_PTR);

	return(NtWrap_RetBuf[NtWrapS_DigColPs_SCom_CustSetTrim].Std_Return);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_SCom_NxtClearTrim
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <NxtClrTrim> of PortPrototype <DigColPs_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_DigColPs_SCom_NxtClrTrim(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NtWrapC_DigColPs_SCom_NxtClrTrim(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_DigColPs_SCom_NxtClrTrim(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_DigColPs_SCom_NxtClrTrim
 *********************************************************************************************************************/

	CallNonTrustedFunction(NtWrapS_DigColPs_SCom_NxtClearTrim, (NonTrustedFunctionParameterRefType)NULL_PTR);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_SCom_NxtSetTrim
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <NxtSetTrim> of PortPrototype <DigColPs_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_DigColPs_SCom_NxtSetTrim(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DigColPs_SCom_ConditionsNotCorrect
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NtWrapC_DigColPs_SCom_NxtSetTrim(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DigColPs_SCom_ConditionsNotCorrect
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_DigColPs_SCom_NxtSetTrim(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_DigColPs_SCom_NxtSetTrim (returns application error)
 *********************************************************************************************************************/

	CallNonTrustedFunction(NtWrapS_DigColPs_SCom_NxtSetTrim, (NonTrustedFunctionParameterRefType)NULL_PTR);

	return(NtWrap_RetBuf[NtWrapS_DigColPs_SCom_NxtSetTrim].Std_Return);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigHwTrqSENT_SCom_ClrTrqTrim
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ClrTrqTrim> of PortPrototype <DigHwTrqSENT_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_DigHwTrqSENT_SCom_ClrTrqTrim(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DigHwTrqSENT_SCom_ConditionsNotCorrect
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NtWrapC_DigHwTrqSENT_SCom_ClrTrqTrim(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DigHwTrqSENT_SCom_ConditionsNotCorrect
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_DigHwTrqSENT_SCom_ClrTrqTrim(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_DigHwTrqSENT_SCom_ClrTrqTrim (returns application error)
 *********************************************************************************************************************/
	CallNonTrustedFunction(NtWrapS_DigHwTrqSENT_SCom_ClrTrqTrim, (NonTrustedFunctionParameterRefType)NULL_PTR);

	return(NtWrap_RetBuf[NtWrapS_DigHwTrqSENT_SCom_ClrTrqTrim].Std_Return);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigHwTrqSENT_SCom_SetTrqTrim
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetTrqTrim> of PortPrototype <DigHwTrqSENT_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_DigHwTrqSENT_SCom_SetTrqTrim(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DigHwTrqSENT_SCom_ConditionsNotCorrect
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NtWrapC_DigHwTrqSENT_SCom_SetTrqTrim(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DigHwTrqSENT_SCom_ConditionsNotCorrect
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_NTWRAP_APPL_CODE) NtWrapC_DigHwTrqSENT_SCom_SetTrqTrim(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_DigHwTrqSENT_SCom_SetTrqTrim (returns application error)
 *********************************************************************************************************************/
	CallNonTrustedFunction(NtWrapS_DigHwTrqSENT_SCom_SetTrqTrim, (NonTrustedFunctionParameterRefType)NULL_PTR);

	return(NtWrap_RetBuf[NtWrapS_DigHwTrqSENT_SCom_SetTrqTrim].Std_Return);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigHwTrqSENT_SCom_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DigHwTrqSENT_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_DigHwTrqSENT_SCom_WriteData(Float HwTrqTrim_HwNm_f32)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NtWrapC_DigHwTrqSENT_SCom_WriteData(Float HwTrqTrim_HwNm_f32)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_DigHwTrqSENT_SCom_WriteData(Float HwTrqTrim_HwNm_f32)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_DigHwTrqSENT_SCom_WriteData
 *********************************************************************************************************************/

	NtPar1_Type myargs;

	myargs.arg1_f32 = HwTrqTrim_HwNm_f32;
	CallNonTrustedFunction(NtWrapS_DigHwTrqSENT_SCom_WriteData, &myargs);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GeneratePosTraj_SCom_SetInputParam
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetInputParam> of PortPrototype <GeneratePosTraj_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_GeneratePosTraj_SCom_SetInputParam(Float PosServHwAngle_HwDeg_f32, Float TargetVelocity_HwDegpSec_f32, Float TargetAcceleration_HwDegpSecSqr_f32)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NtWrapC_GeneratePosTraj_SCom_SetInputParam(Float PosServHwAngle_HwDeg_f32, Float TargetVelocity_HwDegpSec_f32, Float TargetAcceleration_HwDegpSecSqr_f32)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_GeneratePosTraj_SCom_SetInputParam(Float PosServHwAngle_HwDeg_f32, Float TargetVelocity_HwDegpSec_f32, Float TargetAcceleration_HwDegpSecSqr_f32)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_GeneratePosTraj_SCom_SetInputParam
 *********************************************************************************************************************/

	NtPar1_Type myargs;

	myargs.arg1_f32 = PosServHwAngle_HwDeg_f32;
	myargs.arg2_f32 = TargetVelocity_HwDegpSec_f32;
	myargs.arg3_f32 = TargetAcceleration_HwDegpSecSqr_f32;
	CallNonTrustedFunction(NtWrapS_GenPosTraj_SCom_SetInputParam, &myargs);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NtWrap_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrap_Per1(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrap_Per1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Polarity_SCom_SetPolarity
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetPolarity> of PortPrototype <Polarity_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_Polarity_SCom_SetPolarity(UInt8 Polarity_Cnt_T_b08)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NtWrapC_Polarity_SCom_SetPolarity(UInt8 Polarity_Cnt_T_b08)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_Polarity_SCom_SetPolarity(UInt8 Polarity_Cnt_T_b08)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_Polarity_SCom_SetPolarity
 *********************************************************************************************************************/

	(void)CallNonTrustedFunction(NtWrapS_Polarity_SCom_SetPolarity, &Polarity_Cnt_T_b08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SCom_EOLNomMtrParam_Set
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Set> of PortPrototype <SCom_EOLNomMtrParam>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_SCom_EOLNomMtrParam_Set(Float NomKe_VpRadpS_f32, Float NomRmtr_Ohm_f32)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NtWrapC_SCom_EOLNomMtrParam_Set(Float NomKe_VpRadpS_f32, Float NomRmtr_Ohm_f32)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_SCom_EOLNomMtrParam_Set(Float NomKe_VpRadpS_f32, Float NomRmtr_Ohm_f32)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_SCom_EOLNomMtrParam_Set
 *********************************************************************************************************************/
	NtPar1_Type myargs;

	myargs.arg1_f32 =  NomKe_VpRadpS_f32;
	myargs.arg2_f32 =  NomRmtr_Ohm_f32;
	(void)CallNonTrustedFunction(NtWrapS_SCom_EOLNomMtrParam_Set, &myargs);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSMit_SCom_GainReset
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GainReset> of PortPrototype <TSMit_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_TSMit_SCom_GainReset(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NtWrapC_TSMit_SCom_GainReset(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_TSMit_SCom_GainReset(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_TSMit_SCom_GainReset
 *********************************************************************************************************************/

	CallNonTrustedFunction(NtWrapS_TSMit_SCom_GainReset, (NonTrustedFunctionParameterRefType)NULL_PTR);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TrqCanc_Scom_SetCogTrqCal
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetCogTrqCal> of PortPrototype <TrqCanc_Scom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_C_TrqCanc_Scom_SetCogTrqCal(const UInt16 *CogTrqCalPtr, UInt16 ID)
#else
 *   Std_ReturnType Rte_Call_C_TrqCanc_Scom_SetCogTrqCal(const CoggingCancTrq *CogTrqCalPtr, UInt16 ID)
#endif
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   void NtWrapC_TrqCanc_Scom_SetCogTrqCal(const UInt16 *CogTrqCalPtr, UInt16 ID)
#else
 *   void NtWrapC_TrqCanc_Scom_SetCogTrqCal(const CoggingCancTrq *CogTrqCalPtr, UInt16 ID)
#endif
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_TrqCanc_Scom_SetCogTrqCal(P2CONST(UInt16, AUTOMATIC, RTE_NTWRAP_APPL_DATA) CogTrqCalPtr, UInt16 ID)
#else
FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_TrqCanc_Scom_SetCogTrqCal(P2CONST(CoggingCancTrq, AUTOMATIC, RTE_NTWRAP_APPL_DATA) CogTrqCalPtr, UInt16 ID)
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_TrqCanc_Scom_SetCogTrqCal
 *********************************************************************************************************************/

	NtPar5_Type myargs;

	myargs.arg1_cogtrqptr = CogTrqCalPtr;
	myargs.arg2_u16 = ID;

	(void)CallNonTrustedFunction(NtWrapS_TrqCanc_Scom_SetCogTrqCal, (TrustedFunctionParameterRefType)&myargs);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TrqCmdScl_SCom_Set
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Set> of PortPrototype <TrqCmdScl_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_TrqCmdScl_SCom_Set(Float Par_f32)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NtWrapC_TrqCmdScl_SCom_Set(Float Par_f32)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_TrqCmdScl_SCom_Set(Float Par_f32)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_TrqCmdScl_SCom_Set
 *********************************************************************************************************************/
	(void)CallNonTrustedFunction(NtWrapS_TrqCmdScl_SCom_Set, (TrustedFunctionParameterRefType)&Par_f32);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: VehDyn_SCom_ForceCenter
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ForceCenter> of PortPrototype <VehDyn_SCom>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_C_VehDyn_SCom_ForceCenter(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NtWrapC_VehDyn_SCom_ForceCenter(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_VehDyn_SCom_ForceCenter(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NtWrapC_VehDyn_SCom_ForceCenter
 *********************************************************************************************************************/

	CallNonTrustedFunction(NtWrapS_VehDyn_SCom_ForceCenter, (NonTrustedFunctionParameterRefType)NULL_PTR);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define RTE_STOP_SEC_NTWRAP_APPL_CODE
#include "MemMap.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/********************************************************************************************************
 * Client side (Non-Rte) Wrappers (NONTRUSTED API)
 *******************************************************************************************************/
 
FUNC(void, RTE_NTWRAP_APPL_CODE) NtWrapC_Adc_Init()
{
	CallTrustedFunction(NtWrapS_Adc_Init, (TrustedFunctionParameterRefType)NULL_PTR);
}

 
/********************************************************************************************************
 * Server side Wrappers (NONTRUSTED API)
 *******************************************************************************************************/
/*TODO: Provide a pointer validation check prior to use to ensure freedom of interference that would result from using an invalid pointer
 * provided by a seperate application */

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_CmMtrCurr_SCom_CalGain(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	#if(STD_ON == NTWRAP_DEV_ERROR_DETECT)	
	if(index >= D_NUMRETURNBUFF_CNT_U08)  {
		NtWrap_ReportDet( D_NTWRAPINVLDINDXDET_CNT_U08 );
	}
	#endif

	NtWrap_RetBuf[index].Std_Return = Rte_Call_C_CmMtrCurr_SCom_CalGain();
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_CmMtrCurr_SCom_CalOffset(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	#if(STD_ON == NTWRAP_DEV_ERROR_DETECT)
	if(index >= D_NUMRETURNBUFF_CNT_U08)  {
		NtWrap_ReportDet( D_NTWRAPINVLDINDXDET_CNT_U08 );
	}
	#endif

	NtWrap_RetBuf[index].Std_Return = Rte_Call_C_CmMtrCurr_SCom_CalOffset();
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_CmMtrCurr_SCom_SetMtrCurrCals(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	Rte_Call_C_CmMtrCurr_SCom_SetMtrCurrCals((const PhaseCurrCal_DataType*)par);
}

void NONTRUSTED_NtWrapS_XcpWriteAp8(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	ApXcpWriteCommon();
}

void NONTRUSTED_NtWrapS_XcpWriteAp9(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	ApXcpWriteCommon();
}

void NONTRUSTED_NtWrapS_XcpWriteAp10(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	ApXcpWriteCommon();
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_AssistLmtFunc_Scom_ManualTrqCmd(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)  /* PRQA S 1505, 3673 */
{
	#if(STD_ON == NTWRAP_DEV_ERROR_DETECT)
	if(index >= D_NUMRETURNBUFF_CNT_U08)  {
		NtWrap_ReportDet( D_NTWRAPINVLDINDXDET_CNT_U08 );
	}
	#endif

	NtWrap_RetBuf[NtWrapS_AssistLmtFunc_Scom_ManualTrqCmd].Std_Return = Rte_Call_C_AssistLmtFunc_Scom_ManualTrqCmd(((NtPar4_Type*)par)->arg1_lgc,
                                   ((NtPar4_Type*)par)->arg2_f32);
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_SCom_EOLNomMtrParam_Set(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)  /* PRQA S 1505, 3673 */
{
	Rte_Call_C_SCom_EOLNomMtrParam_Set(((NtPar1_Type*)par)->arg1_f32,
                           	   	   	   ((NtPar1_Type*)par)->arg2_f32);
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_TrqCmdScl_SCom_Set(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)   /* PRQA S 1505, 3673 */
{
	Rte_Call_C_TrqCmdScl_SCom_Set(*(Float*)par);
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_Polarity_SCom_SetPolarity(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	Rte_Call_C_Polarity_SCom_SetPolarity(*(UInt8*)par);
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_TrqCanc_Scom_SetCogTrqCal(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	Rte_Call_C_TrqCanc_Scom_SetCogTrqCal(((NtPar5_Type*)par)->arg1_cogtrqptr, ((NtPar5_Type*)par)->arg2_u16 );
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_DigHwTrqSENT_SCom_SetTrqTrim(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	#if(STD_ON == NTWRAP_DEV_ERROR_DETECT)
	if(index >= D_NUMRETURNBUFF_CNT_U08)  {
		NtWrap_ReportDet( D_NTWRAPINVLDINDXDET_CNT_U08 );
	}
	#endif

	NtWrap_RetBuf[index].Std_Return = Rte_Call_C_DigHwTrqSENT_SCom_SetTrqTrim();
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_DigHwTrqSENT_SCom_WriteData(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	Rte_Call_C_DigHwTrqSENT_SCom_WriteData(((NtPar1_Type*)par)->arg1_f32);
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_GenPosTraj_SCom_SetInputParam(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	Rte_Call_C_GeneratePosTraj_SCom_SetInputParam(((NtPar1_Type*)par)->arg1_f32, ((NtPar1_Type*)par)->arg2_f32, ((NtPar1_Type*)par)->arg3_f32);
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_DigHwTrqSENT_SCom_ClrTrqTrim(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	#if(STD_ON == NTWRAP_DEV_ERROR_DETECT)
	if(index >= D_NUMRETURNBUFF_CNT_U08)  {
		NtWrap_ReportDet( D_NTWRAPINVLDINDXDET_CNT_U08 );
	}
	#endif

	NtWrap_RetBuf[index].Std_Return = Rte_Call_C_DigHwTrqSENT_SCom_ClrTrqTrim();
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_DigColPs_SCom_CustSetTrim(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	#if(STD_ON == NTWRAP_DEV_ERROR_DETECT)
	if(index >= D_NUMRETURNBUFF_CNT_U08)  {
		NtWrap_ReportDet( D_NTWRAPINVLDINDXDET_CNT_U08 );
	}
	#endif

	NtWrap_RetBuf[index].Std_Return = Rte_Call_C_DigColPs_SCom_CustSetTrim();
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_DigColPs_SCom_CustClearTrim(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	Rte_Call_C_DigColPs_SCom_CustClearTrim();
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_DigColPs_SCom_NxtSetTrim(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	#if(STD_ON == NTWRAP_DEV_ERROR_DETECT)
	if(index >= D_NUMRETURNBUFF_CNT_U08)  {
		NtWrap_ReportDet( D_NTWRAPINVLDINDXDET_CNT_U08 );
	}
	#endif

	NtWrap_RetBuf[index].Std_Return = Rte_Call_C_DigColPs_SCom_NxtSetTrim();
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_DigColPs_SCom_NxtClearTrim(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	Rte_Call_C_DigColPs_SCom_NxtClrTrim();
}

/* Non-Trusted SComm Server wrapper Functions */
void NONTRUSTED_NtWrapS_TSMit_SCom_GainReset(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	Rte_Call_C_TSMit_SCom_GainReset();
}

void NONTRUSTED_NtWrapS_VehDyn_SCom_ForceCenter(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	Rte_Call_C_VehDyn_SCom_ForceCenter();
}

/********************************************************************************************************
 * Server side Wrappers (TRUSTED API)
 *******************************************************************************************************/
/*TODO: Provide a pointer validation check prior to use to ensure freedom of interference that would result from using an invalid pointer
 * provided by a seperate application */

/* Trusted wrapper Function */
void TRUSTED_NtWrapS_Adc_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams)
{
	Adc_Init(&AdcConfigSet);
}

/* Trusted wrapper Function */
void TRUSTED_NtWrapS_Adc2_Init1(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams)  /* PRQA S 1505, 3673 */
{
   Adc2_Init1();
}

/* Trusted wrapper Function */
void TRUSTED_NtWrapS_NvMProxy_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams)  /* PRQA S 1505, 3673 */
{
   NvMProxy_Init();
}

/* Trusted wrapper Function */
void TRUSTED_NtWrapS_StaMd_Init1(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams)  /* PRQA S 1505, 3673 */
{
   StaMd_Init1();
}

/* Trusted wrapper Function */
void TRUSTED_NtWrapS_PwmCdd_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams)  /* PRQA S 1505, 3673 */
{
   PwmCdd_Init();
}

/* Trusted SComm Server Function */
void TRUSTED_NtWrapS_Wdg_TMS570LS3x_Init(TrustedFunctionIndexType index, TrustedFunctionParameterRefType par)
{
	/* Limitied implementation, TODO: improve in the future to make more generic and accept a passed config parameter */
	/* The Wdg Init function requires privileged access to initalize the RTI register for enabling its internal timebase */
	Wdg_TMS570LS3x_Init(&wdg_tms570ls3x_config);
}

/* Trusted SComm Server wrapper Functions */
void TRUSTED_NtWrapS_WdgM_Init(TrustedFunctionIndexType index, TrustedFunctionParameterRefType par)
{
	/* Limitied implementation, TODO: improve in the future to make more generic and accept a passed config parameter */
	/* The WdgM init funciton appears to need access to all application memory for initlaization of the supervised entity variables */
	WdgM_Init(&WdgMConfig_Mode0);
}



void TRUSTED_TWrapS_XcpWriteAp0(TrustedFunctionIndexType index, TrustedFunctionParameterRefType FunctionParams)
{
	ApXcpWriteCommon();
}

void TRUSTED_NtWrapS_ProcessF0FF(TrustedFunctionIndexType index, TrustedFunctionParameterRefType FunctionParams)
{
	ProcessF0FF(((TrustedFunctionParameterType*)FunctionParams)->NtWrapS_ProcessF0FF_args.os_arg_t_SrvcData_Cnt_T_u08, ((TrustedFunctionParameterType*)FunctionParams)->NtWrapS_ProcessF0FF_args.os_arg_RequestDataIdx_Cnt_T_u16);
}

void TRUSTED_TWrapS_Dma_InvalidateSlowADCGroup(TrustedFunctionIndexType index, TrustedFunctionParameterRefType FunctionParams)
{
	Dma_InvalidateSlowADCGroup();
}

/********************************************************************************************************
 *  Non C/S (TRUSTED API)
 *******************************************************************************************************/
void Call_Adc2_Init1(void)
{
   (void) CallTrustedFunction(NtWrapS_Adc2_Init1, (TrustedFunctionParameterRefType)0);
}

void Call_NvMProxy_Init(void)
{
   (void) CallTrustedFunction(NtWrapS_NvMProxy_Init, (TrustedFunctionParameterRefType)0);
}

void Call_StaMd_Init1(void)
{
   (void) CallTrustedFunction(NtWrapS_StaMd_Init1, (TrustedFunctionParameterRefType)0);
}

void Call_PwmCdd_Init(void)
{
   (void) CallTrustedFunction(NtWrapS_PwmCdd_Init, (TrustedFunctionParameterRefType)0);
}

Std_ReturnType NtWrapC_Wdg_TMS570LS3x_Init(P2CONST(Wdg_TMS570LS3x_ConfigType, AUTOMATIC, WDG_APPL_CONST) ConfigPtr)
{
   (void)CallTrustedFunction(NtWrapS_Wdg_TMS570LS3x_Init, (TrustedFunctionParameterRefType)ConfigPtr);

   /* returning fixed return type as a quick implementation.  Return actual value in future implementation */
   return(E_OK);
}

void NtWrapC_WdgM_Init(P2CONST (WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) WdgMConfigPtr)
{
   (void)CallTrustedFunction(NtWrapS_WdgM_Init, (TrustedFunctionParameterRefType)WdgMConfigPtr);
}

void Call_ProcessF0FF(P2VAR(uint8, AUTOMATIC, AUTOMATIC) t_SrvcData_Cnt_T_u08, VAR(uint16, AUTOMATIC) RequestDataIdx_Cnt_T_u16)
{
	VAR(TrustedFunctionParameterType, AUTOMATIC) myargs;

	myargs.NtWrapS_ProcessF0FF_args.os_arg_RequestDataIdx_Cnt_T_u16 = RequestDataIdx_Cnt_T_u16;
	myargs.NtWrapS_ProcessF0FF_args.os_arg_t_SrvcData_Cnt_T_u08 = t_SrvcData_Cnt_T_u08;

	(void)CallTrustedFunction(NtWrapS_ProcessF0FF, &myargs);
}

void TWrapC_Dma_InvalidateSlowADCGroup(void)
{
	(void)CallTrustedFunction((TrustedFunctionIndexType)TWrapS_Dma_InvalidateSlowADCGroup, (TrustedFunctionParameterRefType)0);
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
