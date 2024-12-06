/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Ap_ThrmlDutyCycle.c
 *     Workspace:  C:/_Synergy_Projects/Working/ThrmDutyCycle-nz63rn/ThrmDutyCycle/autosar
 *     SW-C Type:  Ap_ThrmlDutyCycle
 *  Generated at:  Wed Sep 25 11:48:44 2013
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  C-Code implementation template for SW-C <Ap_ThrmlDutyCycle>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr  4 10:00:00 2012
 * %version:          16 %
 * %derived_by:       nz63rn %
 * %date_modified:    Wed Sep 25 11:33:27 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date       Rev      Author    Change Description                                                              SCR #
 * --------   -------  --------  ------------------------------------------------------------------------------  ------
 * 05/21/12   1        OT        Iniital Component Version                                                       3946
 * 05/30/12   2        LWW       Made local constant global, added limit block on maxout terms
 * 06/16/12   3        NRAR      6 filter embedded data constants values are changed- Anom 3445
 * 07/09/12   4        OT        Updated to SF-09 v003                                                           
 * 08/09/12   5        BWL       Updated to SF-09 v004
 * 08/10/12   6        BWL       Removed setting NTC status on defeat
 * 09/23/12   7        Selva     Checkpoints added and mempmap macros corrected		                              6250
 * 10/17/12   8        BWL       Updated to SF-09 v004                                                            6563
 * 01/31/12	  9,10	   Selva     Updated to SF09 v006   		 
 * 02/20/13	  11	   SP		 Updated to SF09 v007
 * 02/28/13	  12       Selva      Anomoly 4517 Fixed                                                              7502         
 * 01/31/12	  13	   Selva     Updated to SF09 v008   
 * 09/06/13   14       KMC       Updated to SF09 v010 -- changed logic for calculating AbsTempLimit               9626
 *                               Also updated module and display variable names per naming conventions
 * 09/17/13	  15	   KJS		 Updated to SF09 v11 -- Added periodic routine to get ignoff time in the event
 *								 the message is not received during init.
 * 09/25/13   16       KMC       Updated to SF09 v012 -- modified filter init and reinit logic so that the 		 10248
 *                               filter state variables are set using the default igniition off time whenever
 *                               DefeatDutySvc is TRUE
 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Ap_ThrmlDutyCycle.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Ap_ThrmlDutyCycle_Cfg.h"
#include "fixmath.h"
#include "GlobalMacro.h"
#include "CalConstants.h"
#include "filters.h"
#include "interpolation.h"
#include "math.h"

STATIC FUNC(uint16, AP_DUTYCYCLE_CODE) StepVarXY_u16_s16Xu16Y_Cnt (const sint16 *TableX, const uint16 *TableY, 
					const uint16 Size, const sint16 input);

#define D_FILT1LPFKN_HZ_F32				0.100094f    /*  1/(2*Pi*1.59) */
#define D_FILT2LPFKN_HZ_F32				0.010009f    /*  1/(2*Pi*15.9)  */
#define D_FILT3LPFKN_HZ_F32				0.001001f    /*  1/(2*Pi*159)   */
#define D_FILT4LPFKN_HZ_F32				0.000531f    /*  1/(2*Pi*300)   */
#define D_FILT5LPFKN_HZ_F32				0.000100f    /*  1/(2*Pi*1590)  */
#define D_FILT6LPFKN_HZ_F32				0.000039f    /*  1/(2*Pi*4000)  */
#define D_FILTOUTLIM_ULS_F32			200.0f
#define D_1PERC_ULS_F32					0.01f
#define D_DEFEATDUTYCYCLELEVEL_ULS_F32	0.0f
#define D_DEFEATTHERMLIMITPERC_ULS_F32	0.0f
#define D_DEFEATTHERMLIMIT_MTRNM_F32	8.8f
#define D_TAU3_SEC_F32 					159.0f
#define D_TAU4_SEC_F32 					300.0f
#define D_TAU5_SEC_F32 					1590.0f
#define D_TAU6_SEC_F32 					4000.0f

#define D_PER1EXECRATE_SEC_F32			D_100MS_SEC_F32

#define THRMLDUTYCYCLE_START_SEC_VAR_CLEARED_16
#include "MemMap.h" /* PRQA S 5087 */
STATIC VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_ThrmLoadLmtTblYRam_MtrNm_M_u9p7[TableSize_m(t_ThrmLoadLmtTblY_MtrNm_u9p7)];
STATIC VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_AbsTempFltAcc_Cnt_M_u16;
STATIC volatile VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_MaxOut_AmpSq_D_u16p0;
STATIC volatile VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_LastTblVal_MtrNm_D_u9p7;
STATIC volatile VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_LastTblValSlew_MtrNm_D_u9p7;
STATIC volatile VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Mult1_Uls_D_u3p13;
STATIC volatile VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Mult2_Uls_D_u3p13;
STATIC volatile VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Mult3_Uls_D_u3p13;
STATIC volatile VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Mult4_Uls_D_u3p13;
STATIC volatile VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Mult5_Uls_D_u3p13;
STATIC volatile VAR(uint16,  AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Mult6_Uls_D_u3p13;
#define THRMLDUTYCYCLE_STOP_SEC_VAR_CLEARED_16
#include "MemMap.h" /* PRQA S 5087 */


#define THRMLDUTYCYCLE_START_SEC_VAR_CLEARED_32
#include "MemMap.h" /* PRQA S 5087 */
STATIC VAR(float32, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_AbsTempLimit_MtrNm_M_f32;
STATIC volatile VAR(float32, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Mult12Temp_DegC_D_f32;
STATIC volatile VAR(float32, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Mult36Temp_DegC_D_f32;
STATIC volatile VAR(float32, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_ThermLim_MtrNm_D_f32;
STATIC volatile VAR(float32, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_AbsCtrlTempLimit_MtrNm_D_f32;
STATIC volatile VAR(float32, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_AbsCuTempLimit_MtrNm_D_f32;
STATIC volatile VAR(float32, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_AbsTempLimit_MtrNm_D_f32;
STATIC volatile VAR(float32, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_ThrmLoadLmtTblYVal_MtrNm_D_f32;
STATIC VAR(float32, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_ReInitCntrVal_Sec_M_f32;
#define THRMLDUTYCYCLE_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h" /* PRQA S 5087 */

	
#define THRMLDUTYCYCLE_START_SEC_VAR_SAVED_ZONEH_8
#include "MemMap.h" /* PRQA S 5087 */

STATIC VAR(uint8, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_eFilter3ValueTyH_Cnt_M_u8;
STATIC VAR(uint8, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_eFilter4ValueTyH_Cnt_M_u8;
STATIC VAR(uint8, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_eFilter5ValueTyH_Cnt_M_u8;
STATIC VAR(uint8, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_eFilter6ValueTyH_Cnt_M_u8;


#define THRMLDUTYCYCLE_STOP_SEC_VAR_SAVED_ZONEH_8
#include "MemMap.h" /* PRQA S 5087 */


#define THRMLDUTYCYCLE_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */
STATIC VAR(LPF32KSV_Str, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Filter1KSV_M_str;
STATIC VAR(LPF32KSV_Str, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Filter2KSV_M_str;
STATIC VAR(LPF32KSV_Str, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Filter3KSV_M_str;
STATIC VAR(LPF32KSV_Str, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Filter4KSV_M_str;
STATIC VAR(LPF32KSV_Str, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Filter5KSV_M_str;
STATIC VAR(LPF32KSV_Str, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_Filter6KSV_M_str;
#define THRMLDUTYCYCLE_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */

#define THRMLDUTYCYCLE_STARTP_SEC_VAR_CLEARED_BOOLEAN
#include "MemMap.h" /* PRQA S 5087 */
STATIC VAR(boolean, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_CntrFlagInit_Cnt_M_lgc;
STATIC VAR(boolean, AP_DUTYCYCLE_VAR_NOINIT) ThrmDutyCycle_ReInitCntrFlag_Cnt_M_lgc;
#define THRMLDUTYCYCLE_STOP_SEC_VAR_CLEARED_BOOLEAN
#include "MemMap.h" /* PRQA S 5087 */



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
 * Float: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * UInt16: Integer in interval [0...65535] (standard type)
 * UInt32: Integer in interval [0...4294967295] (standard type)
 * UInt8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * NTCNumber: Enumeration of integer in interval [0...511] with enumerators
 *   NTC_Num_FlashWrapperLgcFlt (1U)
 *   NTC_Num_FlashECCCorr (2U)
 *   NTC_Num_FlashECCMemFlt (3U)
 *   NTC_Num_FlashCRCMemFault (4U)
 *   NTC_Num_CurrentSensorCalOutOfRange (9U)
 *   NTC_Num_EEPROMDiag (10U)
 *   NTC_Num_EEPROMDiagMtrStr (11U)
 *   NTC_Num_PriSnsrTrqStorFlt (12U)
 *   NTC_Num_EEPROMDiagPosTrimStr (13U)
 *   NTC_Num_SecSnsrTrqStorFlt (14U)
 *   NTC_Num_EEPROMDiagPolarityStr (15U)
 *   NTC_Num_RAMDiag_GeneralFlt (16U)
 *   NTC_Num_RAMDiag_WrprLgcFlt (17U)
 *   NTC_Num_RAMDiag_ECCCorrIndFlt (18U)
 *   NTC_Num_RAMDiag_ECCMemFlt (19U)
 *   NTC_Num_RAMDiag_CRCMemFlt (20U)
 *   NTC_Num_RAMDiag_VIMRamFlt (23U)
 *   NTC_Num_RAMDiag_NHET1RamFlt (24U)
 *   NTC_Num_RAMDiag_NHET2RamFlt (25U)
 *   NTC_Num_RAMDiag_ADC1RamFlt (26U)
 *   NTC_Num_RAMDiag_DCANRamFault (27U)
 *   NTC_Num_RAMDiag_ADC2RamFlt (28U)
 *   NTC_Num_RAMDiag_HETTU1RamFlt (29U)
 *   NTC_Num_RAMDiag_HETTU2RamFlt (30U)
 *   NTC_Num_CPU_RegVer (32U)
 *   NTC_Num_CPU_CoreInitFlt (33U)
 *   NTC_Num_CPU_CoreRunTimeFlt (34U)
 *   NTC_Num_CPU_ClockMon (35U)
 *   NTC_Num_CPU_eFuseFlt (36U)
 *   NTC_Num_CPU_MPUViolation (37U)
 *   NTC_Num_CPU_FactPrcsErr (40U)
 *   NTC_Num_PropExeDiag_InitDiag (41U)
 *   NTC_Num_PrgFlwDeadlnFlt (42U)
 *   NTC_Num_PropExeDiag_RunTimeDiag (43U)
 *   NTC_Num_PropExeDiag_COPTimeout (44U)
 *   NTC_Num_PropExeDiag_PrefetchAbort (48U)
 *   NTC_Num_PropExeDiag_DataAbort (49U)
 *   NTC_Num_PerDiag_ADC1Flt (50U)
 *   NTC_Num_PerDiag_ADC2Flt (51U)
 *   NTC_Num_PerDiag_ADCCrossChkFlt (52U)
 *   NTC_Num_PerDiag_IllegalAccess (53U)
 *   NTC_Num_PerDiag_DMAFlt (54U)
 *   NTC_Num_PerDiag_CPUWarning (63U)
 *   NTC_Num_TmpMonFunc (64U)
 *   NTC_Num_TmpMonRunTimeFlt (65U)
 *   NTC_Num_PowerRelayInitFlt (66U)
 *   NTC_Num_PrechargeFailure (67U)
 *   NTC_Num_PowerRelayRunFlt (68U)
 *   NTC_Num_Thermistor (69U)
 *   NTC_Num_RefSupplyVltg (70U)
 *   NTC_Num_TrcvrInterfaceFlt (71U)
 *   NTC_Num_CPUSupplyOvervoltage (72U)
 *   NTC_Num_GateDrvFlt (77U)
 *   NTC_Num_OnStateSingleFET (78U)
 *   NTC_Num_OnStateMultiFET (79U)
 *   NTC_Num_PhaseVoltageVerf (80U)
 *   NTC_Num_PhaseDscnt (81U)
 *   NTC_Num_DigPhaseVoltageVerf (82U)
 *   NTC_Num_PhaseDscntFailedDisable (83U)
 *   NTC_Num_CurrentMeas1 (84U)
 *   NTC_Num_CurrentMeas2 (85U)
 *   NTC_Num_CurrentMeasCrossChk (86U)
 *   NTC_Num_PDSupplyOverVoltage (87U)
 *   NTC_Num_ChargePumpUnderVoltage (88U)
 *   NTC_Num_HwTrqSensor (96U)
 *   NTC_Num_AnaVsDigHwTrq (97U)
 *   NTC_Num_TrqSensorRecoveryFlt (98U)
 *   NTC_Num_TrqSensorScaleInvalid (100U)
 *   NTC_Num_T1vsT2 (101U)
 *   NTC_Num_T1OutofRange (102U)
 *   NTC_Num_T2OutofRange (103U)
 *   NTC_Num_DigT1vsT2 (104U)
 *   NTC_Num_DigT1OutofRange (105U)
 *   NTC_Num_DigT2OutofRange (106U)
 *   NTC_Num_RedT1vsT2 (107U)
 *   NTC_Num_HWACrossChecks (108U)
 *   NTC_Num_HWASnsrCommFault (109U)
 *   NTC_Num_HWASensorRel (110U)
 *   NTC_Num_HWASensorAbs (111U)
 *   NTC_Num_PriMSB_SinCosCorr (112U)
 *   NTC_Num_SecMSB_SinCosCorr (113U)
 *   NTC_Num_PriVsSec_SinCosCorr (114U)
 *   NTC_Num_DigMSBFlt (115U)
 *   NTC_Num_MtrVelFlt (116U)
 *   NTC_Num_HWAtoMtrAngleCorr (117U)
 *   NTC_Num_RedPriVsSec_SinCosCorr (118U)
 *   NTC_Num_TurnCntr_PosLoss (128U)
 *   NTC_Num_TurnCntr_MicroProcFlt (129U)
 *   NTC_Num_TurnCntr_SensorPosFlt (130U)
 *   NTC_Num_TurnCntr_SpiComFlt (131U)
 *   NTC_Num_TurnCntr_HighQuiescCur (132U)
 *   NTC_Num_TurnCntr_MainResets (133U)
 *   NTC_Num_TurnCntr_PosLossNotSpdDep (134U)
 *   NTC_Num_KinematicIntDiag (144U)
 *   NTC_Num_HighFriction (145U)
 *   NTC_Num_DutyCycleExceeded (148U)
 *   NTC_Num_AbsTempThermLimit (149U)
 *   NTC_Num_LatchActive (160U)
 *   NTC_Num_OpTrqVsHwTrq (168U)
 *   NTC_Num_CurrentReas (169U)
 *   NTC_Num_OpVoltage (176U)
 *   NTC_Num_ExVoltageLow (177U)
 *   NTC_Num_ReducedAsstLowVoltage (178U)
 *   NTC_Num_ExVoltageHigh (180U)
 *   NTC_Num_OpVoltageOvrMax (181U)
 *   NTC_Num_BattTransOverVolt (182U)
 *   NTC_Num_IgnConfDiag (184U)
 *   NTC_Num_TurnCntr_LowBattery (185U)
 *   NTC_Num_EEPROMCloseFailed (191U)
 *   NTC_Num_SigPath1CrossChk (192U)
 *   NTC_Num_SigPath2CrossChk (193U)
 *   NTC_Num_SigPath3CrossChk (194U)
 *   NTC_Num_SigPath4CrossChk (195U)
 *   NTC_Num_SigPath5CrossChk (196U)
 *   NTC_Num_DampingFWReached (197U)
 *   NTC_Num_AssistFWReached (198U)
 *   NTC_Num_ReturnFWReached (199U)
 *   NTC_Num_DampingFWFltMode (200U)
 *   NTC_Num_AssistFWFltMode (201U)
 *   NTC_Num_VBICFltMode (202U)
 *   NTC_Num_StaMdsSysC (203U)
 *   NTC_NUM_SysFailureForRotVel (204U)
 *   NTC_NUM_SysFailForRedntRotVel (205U)
 *   NTC_Num_SysFailureForTrqSnsr (206U)
 *   NTC_Num_SysFailureForRedTrqSnsr (207U)
 *   NTC_NUM_SysFailureForCtrlVolt (209U)
 *   NTC_Num_GlblSgnlOvrwrtDet (223U)
 *   NTC_Num_VLF_00 (224U)
 *   NTC_Num_VLF_01 (225U)
 *   NTC_Num_VLF_02 (226U)
 *   NTC_Num_VLF_03 (227U)
 *   NTC_Num_VLF_04 (228U)
 *   NTC_Num_VLF_05 (229U)
 *   NTC_Num_VLF_06 (230U)
 *   NTC_Num_VLF_07 (231U)
 *   NTC_Num_VLF_08 (232U)
 *   NTC_Num_VLF_09 (233U)
 *   NTC_Num_VLF_10 (234U)
 *   NTC_Num_VLF_11 (235U)
 *   NTC_Num_VLF_12 (236U)
 *   NTC_Num_VLF_13 (237U)
 *   NTC_Num_VLF_14 (238U)
 *   NTC_Num_VLF_15 (239U)
 *   NTC_Num_VLF_16 (240U)
 *   NTC_Num_VLF_17 (241U)
 *   NTC_Num_VLF_18 (242U)
 *   NTC_Num_VLF_19 (243U)
 *   NTC_Num_VLF_20 (244U)
 *   NTC_Num_VLF_21 (245U)
 *   NTC_Num_VLF_22 (246U)
 *   NTC_Num_VLF_23 (247U)
 *   NTC_Num_VLF_24 (248U)
 *   NTC_Num_VLF_25 (249U)
 *   NTC_Num_VLF_26 (250U)
 *   NTC_Num_VLF_27 (251U)
 *   NTC_Num_VLF_28 (252U)
 *   NTC_Num_VLF_29 (253U)
 *   NTC_Num_VLF_30 (254U)
 *   NTC_Num_VLF_31 (255U)
 *   NTC_Num_BusOffCh1 (256U)
 *   NTC_Num_BusOffCh1NodeMute (257U)
 *   NTC_Num_Node1AAbsent (258U)
 *   NTC_Num_Node1AFaulty (259U)
 *   NTC_Num_Node1BAbsent (260U)
 *   NTC_Num_Node1BFaulty (261U)
 *   NTC_Num_Node1CAbsent (262U)
 *   NTC_Num_Node1CFaulty (263U)
 *   NTC_Num_Node1DAbsent (264U)
 *   NTC_Num_Node1DFaulty (265U)
 *   NTC_Num_Node1EAbsent (266U)
 *   NTC_Num_Node1EFaulty (267U)
 *   NTC_Num_Node1FAbsent (268U)
 *   NTC_Num_Node1FFaulty (269U)
 *   NTC_Num_Node1GAbsent (270U)
 *   NTC_Num_Node1GFaulty (271U)
 *   NTC_Num_BusOffCh2 (272U)
 *   NTC_Num_Node2AAbsent (273U)
 *   NTC_Num_Node2AFaulty (274U)
 *   NTC_Num_Node2BAbsent (275U)
 *   NTC_Num_Node2BFaulty (276U)
 *   NTC_Num_Node2CAbsent (277U)
 *   NTC_Num_Node2CFaulty (278U)
 *   NTC_Num_Node2DAbsent (279U)
 *   NTC_Num_Node2DFaulty (280U)
 *   NTC_Num_Node2EAbsent (281U)
 *   NTC_Num_Node2EFaulty (282U)
 *   NTC_Num_Node2FAbsent (283U)
 *   NTC_Num_Node2FFaulty (284U)
 *   NTC_Num_Node2GAbsent (285U)
 *   NTC_Num_Node2GFaulty (286U)
 *   NTC_Num_InvalidMsg_M (288U)
 *   NTC_Num_MissingMsg_M (289U)
 *   NTC_Num_CRCFltMsg_M (290U)
 *   NTC_Num_PgrsCntFltMsg_M (291U)
 *   NTC_Num_DataRngFltMsg_M (292U)
 *   NTC_Num_DataRateFltMsg_M (293U)
 *   NTC_Num_DataOtherFltMsg_M (294U)
 *   NTC_Num_DataOther2FltMsg_M (295U)
 *   NTC_Num_InvalidMsg_N (296U)
 *   NTC_Num_MissingMsg_N (297U)
 *   NTC_Num_CRCFltMsg_N (298U)
 *   NTC_Num_PgrsCntFltMsg_N (299U)
 *   NTC_Num_DataRngFltMsg_N (300U)
 *   NTC_Num_DataRateFltMsg_N (301U)
 *   NTC_Num_DataOtherFltMsg_N (302U)
 *   NTC_Num_DataOtherFlt2Msg_N (303U)
 *   NTC_Num_InvalidMsg_O (304U)
 *   NTC_Num_MissingMsg_O (305U)
 *   NTC_Num_CRCFltMsg_O (306U)
 *   NTC_Num_PgrsCntFltMsg_O (307U)
 *   NTC_Num_DataRngFltMsg_O (308U)
 *   NTC_Num_DataRateFltMsg_O (309U)
 *   NTC_Num_DataOtherFltMsg_O (310U)
 *   NTC_Num_InvalidMsg_P (312U)
 *   NTC_Num_MissingMsg_P (313U)
 *   NTC_Num_CRCFltMsg_P (314U)
 *   NTC_Num_PgrsCntFltMsg_P (315U)
 *   NTC_Num_DataRngFltMsg_P (316U)
 *   NTC_Num_DataRateFltMsg_P (317U)
 *   NTC_Num_DataOtherFltMsg_P (318U)
 *   NTC_Num_InvalidMsg_Q (320U)
 *   NTC_Num_MissingMsg_Q (321U)
 *   NTC_Num_CRCFltMsg_Q (322U)
 *   NTC_Num_PgrsCntFltMsg_Q (323U)
 *   NTC_Num_DataRngFltMsg_Q (324U)
 *   NTC_Num_DataRateFltMsg_Q (325U)
 *   NTC_Num_DataOtherFltMsg_Q (326U)
 *   NTC_Num_InvalidMsg_R (328U)
 *   NTC_Num_MissingMsg_R (329U)
 *   NTC_Num_CRCFltMsg_R (330U)
 *   NTC_Num_PgrsCntFltMsg_R (331U)
 *   NTC_Num_DataRngFltMsg_R (332U)
 *   NTC_Num_DataRateFltMsg_R (333U)
 *   NTC_Num_DataOtherFltMsg_R (334U)
 *   NTC_Num_DataOtherFlt2Msg_R (335U)
 *   NTC_Num_InvalidMsg_S (336U)
 *   NTC_Num_MissingMsg_S (337U)
 *   NTC_Num_CRCFltMsg_S (338U)
 *   NTC_Num_PgrsCntFltMsg_S (339U)
 *   NTC_Num_DataRngFltMsg_S (340U)
 *   NTC_Num_DataRateFltMsg_S (341U)
 *   NTC_Num_DataOtherFltMsg_S (342U)
 *   NTC_Num_InvalidMsg_T (344U)
 *   NTC_Num_MissingMsg_T (345U)
 *   NTC_Num_CRCFltMsg_T (346U)
 *   NTC_Num_PgrsCntFltMsg_T (347U)
 *   NTC_Num_DataRngFltMsg_T (348U)
 *   NTC_Num_DataRateFltMsg_T (349U)
 *   NTC_Num_DataOtherFltMsg_T (350U)
 *   NTC_Num_InvalidMsg_U (352U)
 *   NTC_Num_MissingMsg_U (353U)
 *   NTC_Num_CRCFltMsg_U (354U)
 *   NTC_Num_PgrsCntFltMsg_U (355U)
 *   NTC_Num_DataRngFltMsg_U (356U)
 *   NTC_Num_DataRateFltMsg_U (357U)
 *   NTC_Num_DataOtherFltMsg_U (358U)
 *   NTC_Num_InvalidMsg_V (360U)
 *   NTC_Num_MissingMsg_V (361U)
 *   NTC_Num_CRCFltMsg_V (362U)
 *   NTC_Num_PgrsCntFltMsg_V (363U)
 *   NTC_Num_DataRngFltMsg_V (364U)
 *   NTC_Num_DataRateFltMsg_V (365U)
 *   NTC_Num_DataOtherFltMsg_V (366U)
 *   NTC_Num_InvalidMsg_W (368U)
 *   NTC_Num_MissingMsg_W (369U)
 *   NTC_Num_CRCFltMsg_W (370U)
 *   NTC_Num_PgrsCntFltMsg_W (371U)
 *   NTC_Num_DataRngFltMsg_W (372U)
 *   NTC_Num_DataRateFltMsg_W (373U)
 *   NTC_Num_DataOtherFltMsg_W (374U)
 *   NTC_Num_InvalidMsg_X (376U)
 *   NTC_Num_MissingMsg_X (377U)
 *   NTC_Num_CRCFltMsg_X (378U)
 *   NTC_Num_PgrsCntFltMsg_X (379U)
 *   NTC_Num_DataRngFltMsg_X (380U)
 *   NTC_Num_DataRateFltMsg_X (381U)
 *   NTC_Num_DataOtherFltMsg_X (382U)
 *   NTC_Num_InvalidMsg_Y (384U)
 *   NTC_Num_MissingMsg_Y (385U)
 *   NTC_Num_CRCFltMsg_Y (386U)
 *   NTC_Num_PgrsCntFltMsg_Y (387U)
 *   NTC_Num_DataRngFltMsg_Y (388U)
 *   NTC_Num_DataRateFltMsg_Y (389U)
 *   NTC_Num_DataOtherFltMsg_Y (390U)
 *   NTC_Num_InvalidMsg_Z (392U)
 *   NTC_Num_MissingMsg_Z (393U)
 *   NTC_Num_CRCFltMsg_Z (394U)
 *   NTC_Num_PgrsCntFltMsg_Z (395U)
 *   NTC_Num_DataRngFltMsg_Z (396U)
 *   NTC_Num_DataRateFltMsg_Z (397U)
 *   NTC_Num_DataOtherFltMsg_Z (398U)
 *   NTC_Num_DSTXORActive (399U)
 *   NTC_Num_InvalidMsg_AA (400U)
 *   NTC_Num_MissingMsg_AA (401U)
 *   NTC_Num_CRCFltMsg_AA (402U)
 *   NTC_Num_PgrsCntFltMsg_AA (403U)
 *   NTC_Num_DataRngFltMsg_AA (404U)
 *   NTC_Num_DataRateFltMsg_AA (405U)
 *   NTC_Num_DataOtherFltMsg_AA (406U)
 *   NTC_Num_InvalidMsg_AB (408U)
 *   NTC_Num_MissingMsg_AB (409U)
 *   NTC_Num_CRCFltMsg_AB (410U)
 *   NTC_Num_PgrsCntFltMsg_AB (411U)
 *   NTC_Num_DataRngFltMsg_AB (412U)
 *   NTC_Num_DataRateFltMsg_AB (413U)
 *   NTC_Num_DataOtherFltMsg_AB (414U)
 *   NTC_Num_InvalidMsg_AC (416U)
 *   NTC_Num_MissingMsg_AC (417U)
 *   NTC_Num_CRCFltMsg_AC (418U)
 *   NTC_Num_PgrsCntFltMsg_AC (419U)
 *   NTC_Num_DataRngFltMsg_AC (420U)
 *   NTC_Num_DataRateFltMsg_AC (421U)
 *   NTC_Num_DataOtherFltMsg_AC (422U)
 *   NTC_Num_InvalidMsg_AD (424U)
 *   NTC_Num_MissingMsg_AD (425U)
 *   NTC_Num_CRCFltMsg_AD (426U)
 *   NTC_Num_PgrsCntFltMsg_AD (427U)
 *   NTC_Num_DataRngFltMsg_AD (428U)
 *   NTC_Num_DataRateFltMsg_AD (429U)
 *   NTC_Num_DataOtherFltMsg_AD (430U)
 *   NTC_Num_InvalidMsg_AE (432U)
 *   NTC_Num_MissingMsg_AE (433U)
 *   NTC_Num_CRCFltMsg_AE (434U)
 *   NTC_Num_PgrsCntFltMsg_AE (435U)
 *   NTC_Num_DataRngFltMsg_AE (436U)
 *   NTC_Num_DataRateFltMsg_AE (437U)
 *   NTC_Num_DataOtherFltMsg_AE (438U)
 *   NTC_Num_InvalidMsg_AF (440U)
 *   NTC_Num_MissingMsg_AF (441U)
 *   NTC_Num_CRCFltMsg_AF (442U)
 *   NTC_Num_PgrsCntFltMsg_AF (443U)
 *   NTC_Num_DataRngFltMsg_AF (444U)
 *   NTC_Num_DataRateFltMsg_AF (445U)
 *   NTC_Num_DataOtherFltMsg_AF (446U)
 *   NTC_Num_InvalidMsg_AG (448U)
 *   NTC_Num_MissingMsg_AG (449U)
 *   NTC_Num_CRCFltMsg_AG (450U)
 *   NTC_Num_PgrsCntFltMsg_AG (451U)
 *   NTC_Num_DataRngFltMsg_AG (452U)
 *   NTC_Num_DataRateFltMsg_AG (453U)
 *   NTC_Num_DataOtherFltMsg_AG (454U)
 *   NTC_Num_InvalidMsg_AH (456U)
 *   NTC_Num_MissingMsg_AH (457U)
 *   NTC_Num_CRCFltMsg_AH (458U)
 *   NTC_Num_PgrsCntFltMsg_AH (459U)
 *   NTC_Num_DataRngFltMsg_AH (460U)
 *   NTC_Num_DataRateFltMsg_AH (461U)
 *   NTC_Num_DataOtherFltMsg_AH (462U)
 *   NTC_Num_FlexrayCommunicationError (465U)
 *   NTC_Num_InvalidMsg_AI (466U)
 *   NTC_Num_MissingMsg_AI (467U)
 *   NTC_Num_MissingMsg_AJ (473U)
 *   NTC_Num_MissingMsg_AK (481U)
 *   NTC_Num_MissingMsg_AL (489U)
 *   NTC_Num_SysConsistencyVerf (496U)
 *   NTC_Num_ConfigMisMatch (497U)
 *   NTC_Num_CalNotPrgmd (498U)
 *   NTC_Num_EOLVehTunNtPerf (501U)
 *   NTC_Num_MtrSensorNotTrimmed (502U)
 *   NTC_Num_HWASensorNotTrimmed (504U)
 *   NTC_Num_HWASensorTrimNoAttempt (505U)
 *   NTC_Num_TrqSensorScaleNotSet (506U)
 *   NTC_Num_TrqSensorNotTrimmed (507U)
 *   NTC_Num_DigTrqSensorScaleNotSet (509U)
 *   NTC_Num_DigTrqSensorNotTrimmed (510U)
 * NxtrDiagMgrStatus: Enumeration of integer in interval [0...255] with enumerators
 *   NTC_STATUS_PASSED (0U)
 *   NTC_STATUS_FAILED (1U)
 *   NTC_STATUS_PREPASSED (2U)
 *   NTC_STATUS_PREFAILED (3U)
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
 * Float: D_100MS_SEC_F32 = 0.1F
 * Float: D_MTRTRQCMDHILMT_MTRNM_F32 = 8.8F
 * Float: D_ONE_ULS_F32 = 1.0F
 * Float: D_ZERO_ULS_F32 = 0.0F
 * UInt16: D_ONE_CNT_U16 = 1U
 * UInt32: D_ONE_CNT_U32 = 1U
 * UInt32: D_ZERO_CNT_U32 = 0U
 *
 *********************************************************************************************************************/


#define RTE_START_SEC_AP_THRMLDUTYCYCLE_APPL_CODE
#include "MemMap.h" /* PRQA S 5087 */

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

FUNC(void, RTE_AP_THRMLDUTYCYCLE_APPL_CODE) ThrmlDutyCycle_Init1(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ThrmlDutyCycle_Init1
 *********************************************************************************************************************/
	
	
	VAR(uint16, AUTOMATIC) i;
		
	VAR(boolean, AUTOMATIC) VehTimeValid_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) DefeatDutySvc_Cnt_T_lgc;	
	VAR(uint32, AUTOMATIC) IgnTimeOff_Sec_T_u32;
	VAR(float32, AUTOMATIC) ExpFiltDecayIn_Sec_T_f32;
		
	IgnTimeOff_Sec_T_u32 = Rte_IRead_ThrmlDutyCycle_Init1_IgnTimeOff_Cnt_u32();
	VehTimeValid_Cnt_T_lgc = Rte_IRead_ThrmlDutyCycle_Init1_VehTimeValid_Cnt_lgc();
	DefeatDutySvc_Cnt_T_lgc = Rte_IRead_ThrmlDutyCycle_Init1_DefeatDutySvc_Cnt_lgc();
	
	ThrmDutyCycle_AbsTempLimit_MtrNm_M_f32 = FPM_FixedToFloat_m(t_AbsCtrlTmpTblY_MtrNm_u9p7[0], u9p7_T);
	
	for(i = 0u; i < TableSize_m(t_ThrmLoadLmtTblY_MtrNm_u9p7); i++)
	{
	   ThrmDutyCycle_ThrmLoadLmtTblYRam_MtrNm_M_u9p7[i] = t_ThrmLoadLmtTblY_MtrNm_u9p7[i];
	}
	
	LPF_KUpdate_f32_m(D_FILT1LPFKN_HZ_F32, D_100MS_SEC_F32, &ThrmDutyCycle_Filter1KSV_M_str);
	LPF_KUpdate_f32_m(D_FILT2LPFKN_HZ_F32, D_100MS_SEC_F32, &ThrmDutyCycle_Filter2KSV_M_str);
	LPF_KUpdate_f32_m(D_FILT3LPFKN_HZ_F32, D_100MS_SEC_F32, &ThrmDutyCycle_Filter3KSV_M_str);
	LPF_KUpdate_f32_m(D_FILT4LPFKN_HZ_F32, D_100MS_SEC_F32, &ThrmDutyCycle_Filter4KSV_M_str);
	LPF_KUpdate_f32_m(D_FILT5LPFKN_HZ_F32, D_100MS_SEC_F32, &ThrmDutyCycle_Filter5KSV_M_str);
	LPF_KUpdate_f32_m(D_FILT6LPFKN_HZ_F32, D_100MS_SEC_F32, &ThrmDutyCycle_Filter6KSV_M_str);
	
	/* Power ON Tasks */
	if ((VehTimeValid_Cnt_T_lgc == TRUE) &&
		(DefeatDutySvc_Cnt_T_lgc == FALSE)) 
	{
		ExpFiltDecayIn_Sec_T_f32 = (float32)IgnTimeOff_Sec_T_u32;
	}
	else
	{ 
		ExpFiltDecayIn_Sec_T_f32 = k_DefaultIgnOffTime_Sec_f32;
	}
	ThrmDutyCycle_Filter3KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * ExpFiltDecayIn_Sec_T_f32) / D_TAU3_SEC_F32)) * (float32)ThrmDutyCycle_eFilter3ValueTyH_Cnt_M_u8);
	ThrmDutyCycle_Filter4KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * ExpFiltDecayIn_Sec_T_f32) / D_TAU4_SEC_F32)) * (float32)ThrmDutyCycle_eFilter4ValueTyH_Cnt_M_u8);
	ThrmDutyCycle_Filter5KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * ExpFiltDecayIn_Sec_T_f32) / D_TAU5_SEC_F32)) * (float32)ThrmDutyCycle_eFilter5ValueTyH_Cnt_M_u8);
	ThrmDutyCycle_Filter6KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * ExpFiltDecayIn_Sec_T_f32) / D_TAU6_SEC_F32)) * (float32)ThrmDutyCycle_eFilter6ValueTyH_Cnt_M_u8);
	
	if ( (VehTimeValid_Cnt_T_lgc == FALSE) && (k_IgnOffCntrEnb_Cnt_lgc == TRUE) )
	{
		ThrmDutyCycle_CntrFlagInit_Cnt_M_lgc = TRUE;
	}
	else
	{
		ThrmDutyCycle_CntrFlagInit_Cnt_M_lgc = FALSE;
	}

	/* Set initial conditions per FDD */
	ThrmDutyCycle_ReInitCntrVal_Sec_M_f32 = D_ZERO_ULS_F32;
	ThrmDutyCycle_ReInitCntrFlag_Cnt_M_lgc = TRUE;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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

FUNC(void, RTE_AP_THRMLDUTYCYCLE_APPL_CODE) ThrmlDutyCycle_Per1(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ThrmlDutyCycle_Per1
 *********************************************************************************************************************/
	
	
	VAR(float32, AUTOMATIC) CuTempEst_DegC_T_f32;
	VAR(sint16,  AUTOMATIC) CuTempEst_DegC_T_s15p0;
	VAR(float32, AUTOMATIC) FiltMeasTemp_DegC_T_f32;
	VAR(sint16,  AUTOMATIC) FiltMeasTemp_DegC_T_s15p0;
	VAR(float32, AUTOMATIC) FiltPkCurr_AmpSq_T_f32;
	VAR(float32, AUTOMATIC) MagTempEst_DegC_T_f32;
	VAR(float32, AUTOMATIC) MotorVelCRF_MtrRadpS_T_f32;
	VAR(float32, AUTOMATIC) MtrPkCurr_AmpSq_T_f32;
	VAR(float32, AUTOMATIC) SiTempEst_DegC_T_f32;
	VAR(boolean, AUTOMATIC) DiagStsDefTemp_Cnt_T_lgc;
	VAR(float32, AUTOMATIC) PrevAbsTempLimit_MtrNm_T_f32;
	VAR(float32, AUTOMATIC) AbsMotorVelCRF_MtrRadpS_T_f32;
	VAR(float32, AUTOMATIC) Mult12Temp_DegC_T_f32;
	VAR(float32, AUTOMATIC) Mult36Temp_DegC_T_f32;
	VAR(sint16,  AUTOMATIC) SlcTemp_DegC_T_s15p0;
	VAR(sint16,  AUTOMATIC) Mult12Temp_DegC_T_s15p0;
	VAR(sint16,  AUTOMATIC) Mult36Temp_DegC_T_s15p0;
	VAR(sint16,  AUTOMATIC) Mult36TempSlc_DegC_T_s15p0;
	VAR(uint16,  AUTOMATIC) Mult1_Uls_T_u3p13;
	VAR(uint16,  AUTOMATIC) Mult2_Uls_T_u3p13;
	VAR(uint16,  AUTOMATIC) Mult3_Uls_T_u3p13;
	VAR(uint16,  AUTOMATIC) Mult4_Uls_T_u3p13;
	VAR(uint16,  AUTOMATIC) Mult5_Uls_T_u3p13;
	VAR(uint16,  AUTOMATIC) Mult6_Uls_T_u3p13;
	VAR(float32, AUTOMATIC) FilterInput_Uls_T_f32;
	VAR(float32, AUTOMATIC) MaxSlowFilt_Uls_T_f32;
	VAR(float32, AUTOMATIC) MaxOut_Uls_T_f32;
	VAR(uint16,  AUTOMATIC) MaxOut_Uls_T_u16p0;
	VAR(uint16,  AUTOMATIC) LastTblValRaw_MtrNm_T_u9p7;
	VAR(uint16,  AUTOMATIC) LastTblVal_MtrNm_T_u9p7;
	VAR(uint16,  AUTOMATIC) ThermalLoadLmt_MtrNm_T_u9p7;
	VAR(float32, AUTOMATIC) ThermalLoadLmt_MtrNm_T_f32;
	VAR(uint16,  AUTOMATIC) AbsCtrlTempLimit_MtrNm_T_u9p7;
	VAR(uint16,  AUTOMATIC) AbsCuTempLimit_MtrNm_T_u9p7;
	VAR(float32, AUTOMATIC) AbsCtrlTempLimit_MtrNm_T_f32;
	VAR(float32, AUTOMATIC) AbsCuTempLimit_MtrNm_T_f32;
	VAR(float32, AUTOMATIC) AbsTempLimit_MtrNm_T_f32;
	VAR(float32, AUTOMATIC) AbsTempLimitSlew_MtrNm_T_f32;
	VAR(float32, AUTOMATIC) ThermalLimit_MtrNm_T_f32;
	VAR(float32, AUTOMATIC) DivFactor_MtrNm_T_f32;
	VAR(float32, AUTOMATIC) ThermLimitPerc_Uls_T_f32;
	VAR(boolean, AUTOMATIC) DefeatDutySvc_Cnt_T_lgc;
	VAR(uint32, AUTOMATIC) IgnTimeOff_Sec_T_u32;
	VAR(boolean, AUTOMATIC) VehTimeValid_Cnt_T_lgc;

	
	/* Configurable Start of Runnable Checkpoint */
	Rte_Call_ThrmlDutyCycle_Per1_CP0_CheckpointReached();

	CuTempEst_DegC_T_f32 = Rte_IRead_ThrmlDutyCycle_Per1_CuTempEst_DegC_f32();
	FiltMeasTemp_DegC_T_f32 = Rte_IRead_ThrmlDutyCycle_Per1_FiltMeasTemp_DegC_f32();
	FiltPkCurr_AmpSq_T_f32 = Rte_IRead_ThrmlDutyCycle_Per1_FilteredPkCurr_AmpSq_f32();
	MagTempEst_DegC_T_f32 = Rte_IRead_ThrmlDutyCycle_Per1_MagTempEst_DegC_f32();
	MotorVelCRF_MtrRadpS_T_f32 = Rte_IRead_ThrmlDutyCycle_Per1_MotorVelCRF_MtrRadpS_f32();
	MtrPkCurr_AmpSq_T_f32 = Rte_IRead_ThrmlDutyCycle_Per1_MtrPkCurr_AmpSq_f32();
	SiTempEst_DegC_T_f32 = Rte_IRead_ThrmlDutyCycle_Per1_SiTempEst_DegC_f32();
	DefeatDutySvc_Cnt_T_lgc = Rte_IRead_ThrmlDutyCycle_Per1_DefeatDutySvc_Cnt_lgc();
	
	PrevAbsTempLimit_MtrNm_T_f32 = ThrmDutyCycle_AbsTempLimit_MtrNm_M_f32;
	
	AbsMotorVelCRF_MtrRadpS_T_f32 = Abs_f32_m(MotorVelCRF_MtrRadpS_T_f32);
	
	(void) Rte_Call_NxtrDiagMgr_GetNTCFailed(NTC_Num_Thermistor, &DiagStsDefTemp_Cnt_T_lgc);

	VehTimeValid_Cnt_T_lgc = Rte_IRead_ThrmlDutyCycle_Per1_VehTimeValid_Cnt_lgc();
	IgnTimeOff_Sec_T_u32 = Rte_IRead_ThrmlDutyCycle_Per1_IgnTimeOff_Cnt_u32();
	
	/* Filter SV Re-Init */	
	if (DefeatDutySvc_Cnt_T_lgc == TRUE)
	{
		ThrmDutyCycle_Filter3KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * k_DefaultIgnOffTime_Sec_f32) / D_TAU3_SEC_F32)) * (float32)ThrmDutyCycle_eFilter3ValueTyH_Cnt_M_u8);
		ThrmDutyCycle_Filter4KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * k_DefaultIgnOffTime_Sec_f32) / D_TAU4_SEC_F32)) * (float32)ThrmDutyCycle_eFilter4ValueTyH_Cnt_M_u8);
		ThrmDutyCycle_Filter5KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * k_DefaultIgnOffTime_Sec_f32) / D_TAU5_SEC_F32)) * (float32)ThrmDutyCycle_eFilter5ValueTyH_Cnt_M_u8);
		ThrmDutyCycle_Filter6KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * k_DefaultIgnOffTime_Sec_f32) / D_TAU6_SEC_F32)) * (float32)ThrmDutyCycle_eFilter6ValueTyH_Cnt_M_u8);
	}
	else 
	{
		if ( (ThrmDutyCycle_CntrFlagInit_Cnt_M_lgc == TRUE) && (ThrmDutyCycle_ReInitCntrFlag_Cnt_M_lgc == TRUE) )
		{
			if (VehTimeValid_Cnt_T_lgc == TRUE)
			{
				ThrmDutyCycle_Filter3KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * (float32)IgnTimeOff_Sec_T_u32) / D_TAU3_SEC_F32)) * (float32)ThrmDutyCycle_eFilter3ValueTyH_Cnt_M_u8);
				ThrmDutyCycle_Filter4KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * (float32)IgnTimeOff_Sec_T_u32) / D_TAU4_SEC_F32)) * (float32)ThrmDutyCycle_eFilter4ValueTyH_Cnt_M_u8);
				ThrmDutyCycle_Filter5KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * (float32)IgnTimeOff_Sec_T_u32) / D_TAU5_SEC_F32)) * (float32)ThrmDutyCycle_eFilter5ValueTyH_Cnt_M_u8);
				ThrmDutyCycle_Filter6KSV_M_str.SV_Uls_f32 = (expf((((-D_ONE_ULS_F32) * (float32)IgnTimeOff_Sec_T_u32) / D_TAU6_SEC_F32)) * (float32)ThrmDutyCycle_eFilter6ValueTyH_Cnt_M_u8);
				ThrmDutyCycle_ReInitCntrFlag_Cnt_M_lgc = FALSE;
			}
	
			if (ThrmDutyCycle_ReInitCntrVal_Sec_M_f32 <= k_IgnOffMsgWaitTime_Sec_f32)
			{
				ThrmDutyCycle_ReInitCntrVal_Sec_M_f32 += D_PER1EXECRATE_SEC_F32;
			}
			else
			{
				ThrmDutyCycle_ReInitCntrFlag_Cnt_M_lgc = FALSE;
			}
		}
	}


	/* Temperature Selection */
	
	if( TRUE == DiagStsDefTemp_Cnt_T_lgc )
	{
		Mult12Temp_DegC_T_f32 = k_EOCCtrlTemp_DegC_f32;
		Mult36Temp_DegC_T_f32 = k_EOCCtrlTemp_DegC_f32;
	}
	else
	{
		if( TRUE == k_CtrlTempSlc_Cnt_lgc )
		{
			Mult12Temp_DegC_T_f32 = FiltMeasTemp_DegC_T_f32;
		}
		else
		{
			Mult12Temp_DegC_T_f32 = SiTempEst_DegC_T_f32;
		}
		
		if( TRUE == k_MtrPrTempSlc_Cnt_lgc )
		{
			Mult36Temp_DegC_T_f32 = MagTempEst_DegC_T_f32;
		}
		else
		{
			Mult36Temp_DegC_T_f32 = CuTempEst_DegC_T_f32;
		}
	}
	
	Mult12Temp_DegC_T_s15p0 = (sint16)Mult12Temp_DegC_T_f32;
	Mult36Temp_DegC_T_s15p0 = (sint16)Mult36Temp_DegC_T_f32;
	
	if( TRUE == k_MultTempSlc_Cnt_lgc )
	{
		SlcTemp_DegC_T_s15p0 = Mult12Temp_DegC_T_s15p0;
	}
	else
	{
		SlcTemp_DegC_T_s15p0 = Mult36Temp_DegC_T_s15p0;
	}
	
	
	
	/* Load Limiting - Multiplier */
	
	if( TRUE == k_SlowFltTempSlc_Cnt_lgc )
	{
		Mult36TempSlc_DegC_T_s15p0 = Mult12Temp_DegC_T_s15p0;
	}
	else
	{
		Mult36TempSlc_DegC_T_s15p0 = Mult36Temp_DegC_T_s15p0;
	}
	
	if( AbsMotorVelCRF_MtrRadpS_T_f32 > k_AbsMtrVelBkt_MtrRadps_f32 )
	{
		Mult1_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult1NSTblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult12Temp_DegC_T_s15p0);
		Mult2_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult2NSTblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult12Temp_DegC_T_s15p0);
		Mult3_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult3NSTblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult36TempSlc_DegC_T_s15p0);
		Mult4_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult4NSTblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult36TempSlc_DegC_T_s15p0);
		Mult5_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult5NSTblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult36TempSlc_DegC_T_s15p0);
		Mult6_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult6NSTblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult36TempSlc_DegC_T_s15p0);
	}
	else
	{
		Mult1_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult1STblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult12Temp_DegC_T_s15p0);
		Mult2_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult2STblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult12Temp_DegC_T_s15p0);
		Mult3_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult3STblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult36TempSlc_DegC_T_s15p0);
		Mult4_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult4STblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult36TempSlc_DegC_T_s15p0);
		Mult5_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult5STblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult36TempSlc_DegC_T_s15p0);
		Mult6_Uls_T_u3p13 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_Mult6STblY_Uls_u3p13, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), Mult36TempSlc_DegC_T_s15p0);
	}
	
	
	
	/* Load Limiting - FilterPerc_Max */
	
	FilterInput_Uls_T_f32 = FPM_FixedToFloat_m(Mult1_Uls_T_u3p13, u3p13_T) * MtrPkCurr_AmpSq_T_f32;
	LPF_OpUpdate_f32_m(FilterInput_Uls_T_f32, &ThrmDutyCycle_Filter1KSV_M_str);
	
	FilterInput_Uls_T_f32 = FPM_FixedToFloat_m(Mult2_Uls_T_u3p13, u3p13_T) * MtrPkCurr_AmpSq_T_f32;
	LPF_OpUpdate_f32_m(FilterInput_Uls_T_f32, &ThrmDutyCycle_Filter2KSV_M_str);
	
	FilterInput_Uls_T_f32 = FPM_FixedToFloat_m(Mult3_Uls_T_u3p13, u3p13_T) * MtrPkCurr_AmpSq_T_f32;
	LPF_OpUpdate_f32_m(FilterInput_Uls_T_f32, &ThrmDutyCycle_Filter3KSV_M_str);
	
	FilterInput_Uls_T_f32 = FPM_FixedToFloat_m(Mult4_Uls_T_u3p13, u3p13_T) * FiltPkCurr_AmpSq_T_f32;
	LPF_OpUpdate_f32_m(FilterInput_Uls_T_f32, &ThrmDutyCycle_Filter4KSV_M_str);
	
	FilterInput_Uls_T_f32 = FPM_FixedToFloat_m(Mult5_Uls_T_u3p13, u3p13_T) * FiltPkCurr_AmpSq_T_f32;
	LPF_OpUpdate_f32_m(FilterInput_Uls_T_f32, &ThrmDutyCycle_Filter5KSV_M_str);
	
	FilterInput_Uls_T_f32 = FPM_FixedToFloat_m(Mult6_Uls_T_u3p13, u3p13_T) * FiltPkCurr_AmpSq_T_f32;
	LPF_OpUpdate_f32_m(FilterInput_Uls_T_f32, &ThrmDutyCycle_Filter6KSV_M_str);
	
	MaxSlowFilt_Uls_T_f32 = Max_m(ThrmDutyCycle_Filter3KSV_M_str.SV_Uls_f32, ThrmDutyCycle_Filter4KSV_M_str.SV_Uls_f32);
	MaxSlowFilt_Uls_T_f32 = Max_m(MaxSlowFilt_Uls_T_f32, ThrmDutyCycle_Filter5KSV_M_str.SV_Uls_f32);
	MaxSlowFilt_Uls_T_f32 = Max_m(MaxSlowFilt_Uls_T_f32, ThrmDutyCycle_Filter6KSV_M_str.SV_Uls_f32);
	MaxOut_Uls_T_f32 = Max_m(MaxSlowFilt_Uls_T_f32, ThrmDutyCycle_Filter1KSV_M_str.SV_Uls_f32);
	MaxOut_Uls_T_f32 = Max_m(MaxOut_Uls_T_f32, ThrmDutyCycle_Filter2KSV_M_str.SV_Uls_f32);
	
	ThrmDutyCycle_eFilter3ValueTyH_Cnt_M_u8 = (uint8)(ThrmDutyCycle_Filter3KSV_M_str.SV_Uls_f32);	/* Store the filter outputs in EEPROM upon power off */
	ThrmDutyCycle_eFilter4ValueTyH_Cnt_M_u8 = (uint8)(ThrmDutyCycle_Filter4KSV_M_str.SV_Uls_f32);
	ThrmDutyCycle_eFilter5ValueTyH_Cnt_M_u8 = (uint8)(ThrmDutyCycle_Filter5KSV_M_str.SV_Uls_f32);
	ThrmDutyCycle_eFilter6ValueTyH_Cnt_M_u8 = (uint8)(ThrmDutyCycle_Filter6KSV_M_str.SV_Uls_f32);

	MaxSlowFilt_Uls_T_f32 = Limit_m(MaxSlowFilt_Uls_T_f32, D_ZERO_ULS_F32, D_FILTOUTLIM_ULS_F32);
	MaxOut_Uls_T_f32 = Limit_m(MaxOut_Uls_T_f32, D_ZERO_ULS_F32, D_FILTOUTLIM_ULS_F32);
	
	MaxOut_Uls_T_u16p0 = FPM_FloatToFixed_m(MaxOut_Uls_T_f32, u16p0_T);
	
	/* Load Limiting - Thermal_LoadLimit */
	
	if( AbsMotorVelCRF_MtrRadpS_T_f32 > k_AbsMtrVelBkt_MtrRadps_f32 )
	{
		LastTblValRaw_MtrNm_T_u9p7 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_LastTblValNS_MtrNm_u9p7, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), SlcTemp_DegC_T_s15p0);
	}
	else
	{
		LastTblValRaw_MtrNm_T_u9p7 = StepVarXY_u16_s16Xu16Y_Cnt(t_MultTblX_DegC_s15p0, t_LastTblValS_MtrNm_u9p7, (uint16)TableSize_m(t_MultTblX_DegC_s15p0), SlcTemp_DegC_T_s15p0);
	}
	
	
	LastTblVal_MtrNm_T_u9p7 = (uint16)Limit_m(((sint32)LastTblValRaw_MtrNm_T_u9p7), 
											  ((sint32)ThrmDutyCycle_ThrmLoadLmtTblYRam_MtrNm_M_u9p7[TableSize_m(t_ThrmLoadLmtTblY_MtrNm_u9p7) - 1U]) - ((sint32)k_TrqCmdSlewDown_MtrNm_u9p7),
											  ((sint32)ThrmDutyCycle_ThrmLoadLmtTblYRam_MtrNm_M_u9p7[TableSize_m(t_ThrmLoadLmtTblY_MtrNm_u9p7) - 1U]) + ((sint32)k_TrqCmdSlewUp_MtrNm_u9p7));
	
	ThrmDutyCycle_ThrmLoadLmtTblYRam_MtrNm_M_u9p7[TableSize_m(t_ThrmLoadLmtTblY_MtrNm_u9p7) -1U] = LastTblVal_MtrNm_T_u9p7;
	
	ThermalLoadLmt_MtrNm_T_u9p7 = IntplVarXY_u16_u16Xu16Y_Cnt(	t_ThrmLoadLmtTblX_Uls_u16p0,
                      											ThrmDutyCycle_ThrmLoadLmtTblYRam_MtrNm_M_u9p7, 
                      											TableSize_m(t_ThrmLoadLmtTblX_Uls_u16p0),
                      											MaxOut_Uls_T_u16p0);
	
	ThermalLoadLmt_MtrNm_T_f32 = FPM_FixedToFloat_m(ThermalLoadLmt_MtrNm_T_u9p7, u9p7_T);
	
	
	
	/* Temperature Limiting */
	
	FiltMeasTemp_DegC_T_s15p0 = FPM_FloatToFixed_m(FiltMeasTemp_DegC_T_f32, s15p0_T);
	CuTempEst_DegC_T_s15p0 = FPM_FloatToFixed_m(CuTempEst_DegC_T_f32, s15p0_T);	
	
	if (( FiltMeasTemp_DegC_T_s15p0 >= t_AbsCtrlTmpTblX_DegC_s15p0[0] ) ||
		( CuTempEst_DegC_T_s15p0 >= t_AbsCuTmpTblX_DegC_s15p0[0] ))
	{
		ThrmDutyCycle_AbsTempFltAcc_Cnt_M_u16 = DiagPStep_m(ThrmDutyCycle_AbsTempFltAcc_Cnt_M_u16, k_AbsTempDiag_Cnt_str);
	}
	else
	{
		ThrmDutyCycle_AbsTempFltAcc_Cnt_M_u16 = DiagNStep_m(ThrmDutyCycle_AbsTempFltAcc_Cnt_M_u16, k_AbsTempDiag_Cnt_str);
	}
	
	if( DiagFailed_m(ThrmDutyCycle_AbsTempFltAcc_Cnt_M_u16, k_AbsTempDiag_Cnt_str) == TRUE )
	{
		(void) Rte_Call_NxtrDiagMgr_SetNTCStatus(NTC_Num_AbsTempThermLimit, 0x02u, NTC_STATUS_FAILED);
	}
	else
	{
		if( ThrmDutyCycle_AbsTempFltAcc_Cnt_M_u16 == 0u )
		{
			(void) Rte_Call_NxtrDiagMgr_SetNTCStatus(NTC_Num_AbsTempThermLimit, 0x02u, NTC_STATUS_PASSED);
		}
	}
	
	AbsCtrlTempLimit_MtrNm_T_u9p7 = IntplVarXY_u16_s16Xu16Y_Cnt(t_AbsCtrlTmpTblX_DegC_s15p0,
																t_AbsCtrlTmpTblY_MtrNm_u9p7,
																TableSize_m(t_AbsCtrlTmpTblX_DegC_s15p0),
																FiltMeasTemp_DegC_T_s15p0);
	
	AbsCtrlTempLimit_MtrNm_T_f32 = FPM_FixedToFloat_m(AbsCtrlTempLimit_MtrNm_T_u9p7, u9p7_T);

	AbsCuTempLimit_MtrNm_T_u9p7 = IntplVarXY_u16_s16Xu16Y_Cnt(	t_AbsCuTmpTblX_DegC_s15p0,
																t_AbsCuTmpTblY_MtrNm_u9p7,
																TableSize_m(t_AbsCuTmpTblX_DegC_s15p0),
																CuTempEst_DegC_T_s15p0);
	
	AbsCuTempLimit_MtrNm_T_f32 = FPM_FixedToFloat_m(AbsCuTempLimit_MtrNm_T_u9p7, u9p7_T);

	AbsTempLimit_MtrNm_T_f32 = Min_m(AbsCtrlTempLimit_MtrNm_T_f32, AbsCuTempLimit_MtrNm_T_f32);
	
	AbsTempLimitSlew_MtrNm_T_f32 = Limit_m(	AbsTempLimit_MtrNm_T_f32,
											PrevAbsTempLimit_MtrNm_T_f32 - k_AbsTmpTrqSlewLmt_MtrNm_f32,
											PrevAbsTempLimit_MtrNm_T_f32 + k_AbsTmpTrqSlewLmt_MtrNm_f32);
	
	

	/*** Defeat thermal load limit ***/
	if( TRUE == DefeatDutySvc_Cnt_T_lgc )
	{
		ThermalLimit_MtrNm_T_f32 = Min_m(D_DEFEATTHERMLIMIT_MTRNM_F32, AbsTempLimitSlew_MtrNm_T_f32);
		
	}
	else
	{
		ThermalLimit_MtrNm_T_f32 = Min_m(ThermalLoadLmt_MtrNm_T_f32, AbsTempLimitSlew_MtrNm_T_f32);
	}	
	
	/* Thermal Limiting Status */
	
	if( TRUE == DefeatDutySvc_Cnt_T_lgc )
	{
		/*Don't set NTC on defeat.*/
	}
	else if( MaxOut_Uls_T_u16p0 >= k_DutyCycFltTrshld_Uls_u16p0 )
	{
		(void) Rte_Call_NxtrDiagMgr_SetNTCStatus(NTC_Num_DutyCycleExceeded, 0x01u, NTC_STATUS_FAILED);
	}
	else
	{
		(void) Rte_Call_NxtrDiagMgr_SetNTCStatus(NTC_Num_DutyCycleExceeded, 0x01u, NTC_STATUS_PASSED);
	}
	
	DivFactor_MtrNm_T_f32 = Max_m(FPM_FixedToFloat_m(t_ThrmLoadLmtTblY_MtrNm_u9p7[0], u9p7_T), D_1PERC_ULS_F32);
	
	ThermLimitPerc_Uls_T_f32 = D_ONE_ULS_F32 - Min_m((ThermalLimit_MtrNm_T_f32 / DivFactor_MtrNm_T_f32), D_ONE_ULS_F32);
	
	
	
	ThermalLimit_MtrNm_T_f32 = Limit_m(ThermalLimit_MtrNm_T_f32, D_ZERO_ULS_F32, D_MTRTRQCMDHILMT_MTRNM_F32);
	
	/*** Defeat the Them_Limit_Flag and DutyCycleLevel ***/
	if( TRUE == DefeatDutySvc_Cnt_T_lgc )
	{
		MaxSlowFilt_Uls_T_f32 = D_DEFEATDUTYCYCLELEVEL_ULS_F32;
		ThermLimitPerc_Uls_T_f32 = D_DEFEATTHERMLIMITPERC_ULS_F32;
		
	}
	
	ThrmDutyCycle_AbsTempLimit_MtrNm_M_f32 = AbsTempLimitSlew_MtrNm_T_f32;
	
	ThrmDutyCycle_Mult12Temp_DegC_D_f32 = Mult12Temp_DegC_T_f32;
	ThrmDutyCycle_Mult36Temp_DegC_D_f32 = Mult36Temp_DegC_T_f32;
	ThrmDutyCycle_MaxOut_AmpSq_D_u16p0 = MaxOut_Uls_T_u16p0;
	ThrmDutyCycle_ThermLim_MtrNm_D_f32 = ThermalLoadLmt_MtrNm_T_f32;
	ThrmDutyCycle_Mult1_Uls_D_u3p13 = Mult1_Uls_T_u3p13;
	ThrmDutyCycle_Mult2_Uls_D_u3p13 = Mult2_Uls_T_u3p13;
	ThrmDutyCycle_Mult3_Uls_D_u3p13 = Mult3_Uls_T_u3p13;
	ThrmDutyCycle_Mult4_Uls_D_u3p13 = Mult4_Uls_T_u3p13;
	ThrmDutyCycle_Mult5_Uls_D_u3p13 = Mult5_Uls_T_u3p13;
	ThrmDutyCycle_Mult6_Uls_D_u3p13 = Mult6_Uls_T_u3p13;
	ThrmDutyCycle_LastTblVal_MtrNm_D_u9p7 = LastTblValRaw_MtrNm_T_u9p7;
	ThrmDutyCycle_LastTblValSlew_MtrNm_D_u9p7 = LastTblVal_MtrNm_T_u9p7;
	ThrmDutyCycle_AbsCtrlTempLimit_MtrNm_D_f32 = AbsCtrlTempLimit_MtrNm_T_f32;
	ThrmDutyCycle_AbsCuTempLimit_MtrNm_D_f32 = AbsCuTempLimit_MtrNm_T_f32;
	ThrmDutyCycle_AbsTempLimit_MtrNm_D_f32 = AbsTempLimit_MtrNm_T_f32;
	ThrmDutyCycle_ThrmLoadLmtTblYVal_MtrNm_D_f32 = DivFactor_MtrNm_T_f32;
	
	Rte_IWrite_ThrmlDutyCycle_Per1_DutyCycleLevel_Uls_f32(MaxSlowFilt_Uls_T_f32);
	Rte_IWrite_ThrmlDutyCycle_Per1_ThermLimitPerc_Uls_f32(ThermLimitPerc_Uls_T_f32);
	Rte_IWrite_ThrmlDutyCycle_Per1_ThermalLimit_MtrNm_f32(ThermalLimit_MtrNm_T_f32);
	/* Configurable End of Runnable Checkpoint */
    Rte_Call_ThrmlDutyCycle_Per1_CP1_CheckpointReached();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define RTE_STOP_SEC_AP_THRMLDUTYCYCLE_APPL_CODE
#include "MemMap.h" /* PRQA S 5087 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/*******************************************************************************
  * Name		:	StepVarXY_u16_s16Xu16Y_Cnt (TableX, TableY,
  *					 Size, input) 
  * Description	:	Signed 16 bit Variable X Unsigned 16 bit Variable Y 
  * 				2D Table Lookup function (without interpolation).
  *					TableX is the independent axis and the TableY is
  *					the dependent axis. If input is between two X values,
  *					the minimum X value is chosen. If input is out of 
  *					the range of TableX, the boundary value is used.
  * Inputs		:	Name of TableX, Name of TableY, Table size, X input
  * Outputs		:	Y output
  *****************************************************************************/
STATIC FUNC(uint16, AP_DUTYCYCLE_CODE) StepVarXY_u16_s16Xu16Y_Cnt (const sint16 *TableX, const uint16 *TableY, 
					const uint16 Size, const sint16 input)
{
	VAR(uint32, AUTOMATIC)	index_Cnt_T_u32;

	index_Cnt_T_u32 = D_ZERO_CNT_U32;

	/* Check for Range */
	if ( input <= TableX[0] )
	{
		index_Cnt_T_u32 = D_ZERO_CNT_U32;
	}
	else if ( input >= TableX[Size - D_ONE_CNT_U16] )
	{
		index_Cnt_T_u32 = (uint32)Size - D_ONE_CNT_U16;
	}
	else/* In range. Get Index */
	{
		while ( TableX[index_Cnt_T_u32 + D_ONE_CNT_U32] <= input )
		{
			index_Cnt_T_u32++;
		}
	}

	return TableY[index_Cnt_T_u32];
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
