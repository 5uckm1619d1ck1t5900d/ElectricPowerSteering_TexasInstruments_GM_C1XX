/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : CalConstants.h
* Module Description: This file contains the declarations of calibration 
*                     constants used in the EPS Software.
* Product           : Gen II Plus EA3.0
* Author            : Lucas Wendling
*****************************************************************************/
/* Version Control:
 * Date Created:      Thu Jul 11 15:30:00 2013
 * %version:          1 %
 * %derived_by:       kzdyfh %
 * %date_modified:    Wed Mar  5 17:22:18 2014 %
 */

#ifndef CALCONSTANTS_H
#define CALCONSTANTS_H

#include "Rte_Type.h"
#include "fixmath.h"
#include "filters.h"
//#include "Ap_DiagMgr_Types.h"
//#include "Metrics.h"

#define D_NUMOFTUNSETS_CNT_U16 	1U
#define D_NUMOFPERS_CNT_U16 	3U


/*********************** Start of Auto Generated Code ************************/

/****************** File Generated on 8/14/2014 8:35:24 PM *******************/
/********************* K2XXZ MTO Data Dictionary - Rev 8 *********************/



/************* Tuning Structure Definition for "Y" Calibrations **************/

typedef struct
{
	float32	k_DefaultBrakePres_kPa_f32;
	float32	k_BrakePresRateLmt_kPaps_f32;
	float32	k_BrakeOffset_bar_f32;
	float32	k_BrakeGain_barpkPa_f32;
	float32	k_DefaultEngSpd_rpm_f32;
	float32	k_EngSpdRateLmt_rpmps_f32;
	uint16	k_HWARcvrDur_cnt_u16;
	float32	k_HWAMaxResetAng_deg_f32;
	float32	k_HWARateLmt_degps_f32;
	sint8	k_HWAPolarity_uls_s8;
	float32	k_PressFiltCo_Uls_f32;
	float32	k_PressRateFiltCo_Uls_f32;
	uint16	k_LatRcvrDur_cnt_u16;
	float32	k_LatFiltCo_uls_f32;
	sint8	k_LatPolarity_uls_s8;
	float32	k_VehSpdRateLmt_Kphps_f32;
	float32	k_DefVehSpdThresh_kph_f32;
	float32	k_CoilL_Henry_f32;
	float32	k_MinCurrLmt_Amp_f32;
	float32	k_MaxCoilRes_Ohm_f32;
	float32	k_MinCoilRes_Ohm_f32;
	float32	k_NomCoilRes_Ohm_f32;
	float32	k_PresDisableDelay_Sec_f32;
	float32	k_SpeedThresh_Kph_f32;
	boolean	k_Defeat0kphLimit_Cnt_lgc;
	float32	t_CoilCurrCmdX_Cnt_f32[4];
	float32	t_KpY_Uls_f32[4];
	float32	t_KiY_Uls_f32[4];
	float32	k_IncAng_Uls_f32;
	float32	k_RampRate_Ampps_f32;
	float32	k_RampCurrLimit_Amp_f32;
	float32	k_ShutDwnTimeLim_Sec_f32;
	boolean	k_EnPullComp_Cnt_lgc;
	float32	k_PullCompEnTime_Sec_f32;
	float32	k_EnVspdRate_Kphps_f32;
	float32	k_EnVspdLow_Kph_f32;
	float32	k_EnVspdHigh_Kph_f32;
	float32	k_EnHWA_Deg_f32;
	float32	k_EnPres_Bar_f32;
	float32	k_ShortResetPres_Bar_f32;
	float32	k_ShortResetHWA_Deg_f32;
	float32	k_PullLimit_Bar_f32;
	float32	k_LongInputLim_Bar_f32;
	float32	k_LongCompLim_Bar_f32;
	float32	k_ShortInputLim_Bar_f32;
	float32	t_PullCompScaleX_Kph_f32[4];
	float32	t_PullCompScaleY_Uls_f32[4];
	float32	k_LongPCLrnTime_Sec_f32;
	float32	k_ShortPCLrnTime_Sec_f32;
	boolean	k_CompHWAng_Cnt_lgc;
	float32	t_PresThreshX_Kph_f32[4];
	float32	t_PresThresY_Bar_f32[4];
	float32	t_PresAngX_Bar_f32[30];
	float32	t_PresAngY_Deg_f32[30];
	uint16	t2_FlowScaleX_Bar_u8p8[8][10];
	uint16	t2_FlowScaleY_Uls_u4p12[8][10];
	uint16	t_FlowScaleZ_Rpm_u14p2[8];
	float32	k_EffortScaleMax_Uls_f32;
	float32	k_EffortScaleMin_Uls_f32;
	float32	k_DmpRcvrDur_Sec_f32;
	float32	k_DmpMaxResetVel_Degps_f32;
	float32	k_DmpRampRate_1psec_f32;
	float32	k_DmpRcvrRate_1psec_f32;
	float32	t_CoilRes_Ohm_f32[2];
	float32	t_CoilTemp_DegC_f32[2];
	float32	t_FluidTempChgX_Amp_f32[4];
	float32	t_FluidTempChgY_DegC_f32[4];
	float32	k_TempRateLmt_DegCps_f32;
	float32	k_CoolRate_DegCps_f32;
	float32	k_HeatRate_DegCps_f32;
	float32	k_Understr_Degpg_f32;
	float32	k_Ratio_Uls_f32;
	float32	k_Wheelbase_m_f32;
	float32	k_HysCompPressFiltCo_Uls_f32;
	float32	t_HysCompVelBlndX_Degps_f32[2];
	float32	t_HysCompVelBlndY_Uls_f32[2];
	float32	t_HysRiseX_Nm_f32[6];
	float32	t_HysRiseY_Uls_f32[6];
	float32	k_HysRevGain_1pNm_f32;
	float32	k_HysMaxChng_Barps_f32;
	float32	k_Vel2Trq_Nmspdeg_f32;
	float32	k_HysCmpRcvrDur_Sec_f32;
	float32	k_HysCmpMaxResetTrq_Nm_f32;
	float32	k_HysCmpRampRate_1psec_f32;
	float32	k_HysCmpRcvrRate_1psec_f32;
	float32	t_MagAngle_Deg_f32[25];
	float32	t_ZeroAmpTrq_Nm_f32[25];
	float32	t_ThreeAmpTrq_Nm_f32[25];
	float32	k_ThreeAmpScaleMax_Uls_f32;
	float32	k_ThreeAmpScaleMin_Uls_f32;
	float32	k_ZeroAmpScaleMax_Uls_f32;
	float32	k_ZeroAmpScaleMin_Uls_f32;
	float32	t_ImbalBlndX_Kph_f32[2];
	float32	t_ImbalBlndY_Uls_f32[2];
	boolean	k_EnRetrn_Cnt_lgc;
	float32	k_RTNGain_Uls_f32;
	float32	t_RTNmaxX_Kph_f32[4];
	float32	t_RTNmaxY_Nm_f32[4];
	float32	k_RTNRcvrDur_Sec_f32;
	float32	k_RTNMaxResetAng_Deg_f32;
	float32	k_RTNRampRate_1psec_f32;
	float32	k_RTNRcvrRate_1psec_f32;

} TUNING_Y_Str;

/************* Tuning Structure Definition for "P" Calibrations **************/

typedef struct
{
	float32	t_SpeedX_Kph_f32[10];
	float32	t_SpeedY_NmpDeg_f32[10];
	float32	t_VlvAngBlndX_Kph_f32[4];
	float32	t_VlvAngBlndY_Uls_f32[4];
	float32	t_VlvAngTrqX_Deg_f32[30];
	float32	t_VlvAngTrqY_Nm_f32[30];
	float32	t_TempScaleX_DegC_f32[8];
	float32	t_TempScaleY_Uls_f32[8];
	float32	t_DampX_Kph_f32[10];
	float32	t_DampY_Barspdeg_f32[10];
	float32	t_DampBlndX_Bar_f32[10];
	float32	t_DampBlndY_Uls_f32[10];
	boolean	k_EnDamp_Cnt_lgc;
	float32	t_HysBlendX_Bar_f32[6];
	float32	t_CompCogTrqX_Kph_f32[4];
	float32	t_CompCogTrqY_Uls_f32[4];
	float32	t_HysBlendY_Uls_f32[6];
	float32	t_HysSpeedX_Kph_f32[10];
	float32	t_HysConstY_Bar_f32[10];
	float32	t_HysEffLossY_Uls_f32[10];
	float32	t_HysSatY_Bar_f32[10];
	float32	t_HysEffOffsetY_Bar_f32[10];
	boolean	k_EnHysComp_Cnt_lgc;
	float32	t_LatX_g_f32[10];
	float32	t_LatY_Nm_f32[10];
	float32	t_LatMultX_kph_f32[10];
	float32	t_LatMultY_uls_f32[10];
	float32	t_RTNFullOffPresX_Kph_f32[4];
	float32	t_RTNFullOffPresY_Bar_f32[4];
	float32	t_RtnBlndX_Kph_f32[10];
	float32	t_RtnBlndY_Uls_f32[10];
	float32	t_RtnTrqX_Deg_f32[16];
	float32	t_RtnTrqY_Nm_f32[16];

} TUNING_P_Str;


/********************************* AnPrMeas **********************************/
extern CONST(boolean, CAL_CONST) k_P1P2AvgFilterEnable_Cnt_lgc;
extern CONST(float32, CAL_CONST) k_Pressure1Conv_BarpVolt_f32;
extern CONST(float32, CAL_CONST) k_Pressure2Conv_BarpVolt_f32;
extern CONST(DiagSettings_Str, CAL_CONST) k_PressLim_Cnt_str;
extern CONST(float32, CAL_CONST) k_PressureDiagRangeHi_Volt_f32;
extern CONST(float32, CAL_CONST) k_PressureDiagRangeLow_Volt_f32;

/*********************** AnPrMeas, IoHwAbstractionUsr ************************/
extern CONST(float32, CAL_CONST) k_ADCPressureScaling_Uls_f32;

/********************************* AnPrMeas **********************************/
extern CONST(float32, CAL_CONST) k_PresTrimHiLimit_Volt_f32;
extern CONST(float32, CAL_CONST) k_PresTrimLoLimit_Volt_f32;
extern CONST(float32, CAL_CONST) k_MaxPresTrim_Volt_f32;
extern CONST(uint16, CAL_CONST) k_TrimSamples_Cnt_u16;

/************************** BatteryVoltage, BkCpPc ***************************/
extern CONST(float32, CAL_CONST) k_MaxSwitchedVolt_Volts_f32;

/****************************** BatteryVoltage *******************************/
extern CONST(float32, CAL_CONST) k_MaxBattVoltDiff_Volts_f32;
extern CONST(DiagSettings_Str, CAL_CONST) k_VswitchCorrLim_Cnt_Str;
extern CONST(DiagSettings_Str, CAL_CONST) k_VecuCorrLim_Cnt_Str;
extern CONST(float32, CAL_CONST) k_VecuVbatCorrLim_Volts_f32;
extern CONST(float32, CAL_CONST) k_VswitchCorrLim_Volts_f32;

/********************************* BrPwmCdd **********************************/
extern CONST(uint16, CAL_CONST) k_DitherLPFKn_Cnt_u16;
extern CONST(uint16, CAL_CONST) k_PwmDeadBand_Cnt_u16;
extern CONST(sint16, CAL_CONST) k_ADCTrig1Offset_Cnt_s16;
extern CONST(sint16, CAL_CONST) k_ADCTrig2Offset_Cnt_s16;

/********************************** BVDiag ***********************************/
extern CONST(uint16, CAL_CONST) k_OvDetect_Volts_u10p6;
extern CONST(uint16, CAL_CONST) k_OvNotDetect_Volts_u10p6;
extern CONST(uint16, CAL_CONST) k_OvDetect_ms_u16p0;
extern CONST(uint16, CAL_CONST) k_OvNotDetect_ms_u16p0;
extern CONST(uint16, CAL_CONST) k_LowNotDetect_Volts_u10p6;
extern CONST(uint16, CAL_CONST) k_LowDetect_Volts_u10p6;
extern CONST(uint16, CAL_CONST) k_LowDetect_ms_u16p0;
extern CONST(uint16, CAL_CONST) k_LowNotDetect_ms_u16p0;

/******************************** CMS_Common *********************************/
extern CONST(float32, CAL_CONST) k_NxtrSrvcPosTrajThres_HwDeg_f32;
extern CONST(uint16, CAL_CONST) k_NxtrSrvcPosTrajHoldTime_mS_u16;
extern CONST(uint16, CAL_CONST) k_NxtrSrvcHandsOnTime_mS_u16;
extern CONST(float32, CAL_CONST) k_F00FHandsOnThres_HwNm_f32;

/********************************* CtrlTemp **********************************/
extern CONST(boolean, CAL_CONST) k_TempSnsrFiltDft_Cnt_lgc;
extern CONST(float32, CAL_CONST) k_TempSnsrLPFKn_Hz_f32;
extern CONST(float32, CAL_CONST) k_TempSnsrDefVal_DegC_f32;
extern CONST(DiagSettings_Str, CAL_CONST) k_TempSensDiag_Cnt_str;
extern CONST(float32, CAL_CONST) k_TempSensLowLimit_DegC_f32;
extern CONST(float32, CAL_CONST) k_TempSensHighLimit_DegC_f32;
extern CONST(float32, CAL_CONST) k_TempSnsrOffset_Volts_f32;
extern CONST(float32, CAL_CONST) k_TempSnsrScaling_DegpVolt_f32;

/********************************** DiagMgr **********************************/
extern CONST(float32, CAL_CONST) k_FltRmpRate_UlspmS_f32[13];
//extern CONST(FltRsp_Str, CAL_CONST) k_FltRspTbl_Cnt_str[512];
extern CONST(uint32* const, CAL_CONST) t_BlkBoxGrp_Ptr_u32[7][3];
extern CONST(NTCNumber, CAL_CONST) t_SortedNTCs_Cnt_enum[256];
//extern CONST(NTCLatch_Str, CAL_CONST) t_LatchFaults_Cnt_str[8];

/********************************* DiagSrvcs *********************************/
extern CONST(float32, CAL_CONST) k_SrvcHwTrqLimit_HwNm_f32;
extern CONST(float32, CAL_CONST) k_SrvcVehSpdLimit_Kph_f32;
extern CONST(uint16, CAL_CONST) k_ADCFrznClckWaitTime_uS_u16;
extern CONST(uint16, CAL_CONST) k_NexteerModeTO_mS_u16p0;
extern CONST(uint8, CAL_CONST) k_ComprVehPartiProStr_Cnt_u8[14];
extern CONST(uint8, CAL_CONST) k_CFactorCal_Cnt_u8[4];

/********************************** CMS_MTO **********************************/
extern CONST(uint8, CAL_CONST) k_CalRelNum_Cnt_u8[12];

/*********************************** DemIf ***********************************/
extern CONST(uint16, CAL_CONST) k_BatVoltDTCInhibitTime_mS_u16p0;

/**************************** IoHwAbstractionUsr *****************************/
extern CONST(DiagSettings_Str, CAL_CONST) k_VrefOORDiag_Cnt_str;
extern CONST(float32, CAL_CONST) k_VrefMax_Volts_f32;
extern CONST(float32, CAL_CONST) k_VrefMin_Volts_f32;
extern CONST(uint16, CAL_CONST) k_MaxADCConvTime_uS_u16;
extern CONST(float32, CAL_CONST) k_ADCTempSnsrOffset_Uls_f32;
extern CONST(float32, CAL_CONST) k_ADCTempSnsrScaling_Uls_f32;
extern CONST(float32, CAL_CONST) k_ADCVbattScaling_Uls_f32;
extern CONST(float32, CAL_CONST) k_ADCVbattSwitchScaling_Uls_f32;
extern CONST(float32, CAL_CONST) k_ADCVrefScaling_Uls_f32;
extern CONST(uint16, CAL_CONST) k_GenMaxADCWaitTime_uS_u16;

/********************************* VehPwrMd **********************************/
extern CONST(float32, CAL_CONST) k_RampUpRtLoSpd_UlspmS_f32;
extern CONST(float32, CAL_CONST) k_RampDnRt_UlspmS_f32;
extern CONST(float32, CAL_CONST) k_RmpDnAsstVehSpdLimit_Kph_f32;
extern CONST(uint16, CAL_CONST) k_IGNDiagTime_mS_u16p0;

/******************************* MtrDrDiag_BR ********************************/
extern CONST(DiagSettings_Str, CAL_CONST) k_GateDriveDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_OnStateDiag_Cnt_str;
extern CONST(uint16, CAL_CONST) k_GateDrvInitDwellTime_mS_u16p0;

/******************************** OvrVoltMon *********************************/
extern CONST(DiagSettings_Str, CAL_CONST) k_CPUSupplyOV_Cnt_Str;

/*********************************** StaMd ***********************************/
extern CONST(DiagSettings_Str, CAL_CONST) k_StaMdsSysCDiag_Cnt_str;

/******************************* TMS570_uDiag ********************************/
extern CONST(DiagSettings_Str, CAL_CONST) k_FlashECCDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_RAMECCDiag_Cnt_str;
extern CONST(uint16, CAL_CONST) k_MtrCtrlMinCount_Cnt_u16;
extern CONST(uint16, CAL_CONST) k_MtrCtrlMaxCount_Cnt_u16;
extern CONST(uint16, CAL_CONST) k_OneMsLoopMinCount_Cnt_u16;
extern CONST(uint16, CAL_CONST) k_OneMsLoopMaxCount_Cnt_u16;
extern CONST(uint16, CAL_CONST) k_VIMParErrThrsh_Cnt_u16;

/******************************* TuningSelAuth *******************************/
extern CONST(float32, CAL_CONST) k_TunSelHwTrqLPFKn_Hz_f32;
extern CONST(float32, CAL_CONST) k_TunSelHwTrqThresh_HwNm_f32;
extern CONST(float32, CAL_CONST) k_TunSelVehSpdThresh_Kph_f32;

/********************************** EngSpd ***********************************/
extern CONST(float32, CAL_CONST) k_PulleyRatio_uls_f32;

/********************************* EstDrvTrq *********************************/
extern CONST(float32, CAL_CONST) k_TBarRate_Nmpdeg_f32;

/*********************************** HWAng ***********************************/
extern CONST(float32, CAL_CONST) k_HWAOffset_deg_f32;

/*********************************** HWSpd ***********************************/
extern CONST(uint16, CAL_CONST) k_HWSRcvrDur_cnt_u16;
extern CONST(float32, CAL_CONST) k_HWSMaxResetVel_degps_f32;
extern CONST(float32, CAL_CONST) k_HWSpdRateLmt_degps2_f32;
extern CONST(sint8, CAL_CONST) k_HWSPolarity_uls_s8;

/******************************** VehLatAccel ********************************/
extern CONST(float32, CAL_CONST) k_LatOffset_g_f32;

/********************************** CoilRes **********************************/
extern CONST(float32, CAL_CONST) k_ResLrnTime_Sec_f32;
extern CONST(float32, CAL_CONST) k_ResLrnInputLim_Amp_f32;
extern CONST(float32, CAL_CONST) k_ContrRes_Ohm_f32;

/********************************** BkCpPc ***********************************/
extern CONST(float32, CAL_CONST) k_MtrMotionThresh_MtrRadpS_f32;
extern CONST(float32, CAL_CONST) k_PwrDiscOpenThresh_Volts_f32;
extern CONST(float32, CAL_CONST) k_PMOSDIAGOpenThresh_Volts_f32;
extern CONST(float32, CAL_CONST) k_OVERRIDESIGDIAGOpenThresh_Volts_f32;
extern CONST(uint16, CAL_CONST) k_VerifyPwrDiscOpenThresh_mS_u16;
extern CONST(uint16, CAL_CONST) k_WaitForSqrWaveThresh_mS_u16;
extern CONST(float32, CAL_CONST) k_PwrDiscCloseThresh_Volts_f32;
extern CONST(uint16, CAL_CONST) k_PrechargeThresh_mS_u16;
extern CONST(float32, CAL_CONST) k_PMOSVError_Volts_f32;
extern CONST(uint16, CAL_CONST) k_PMOSTError_mS_u16;
extern CONST(float32, CAL_CONST) k_MaxDischEst_Uls_f32;
extern CONST(float32, CAL_CONST) k_MinDischEst_Uls_f32;
extern CONST(float32, CAL_CONST) k_VswitchDeltaThresh_Volts_f32;
extern CONST(uint16, CAL_CONST) k_VerifyPwrDiscCloseThresh_mS_u16;
extern CONST(DiagSettings_Str, CAL_CONST) k_ChargePumpDiag_Cnt_str;
extern CONST(float32, CAL_CONST) k_VbattSwitchThreshNonExt_Volt_f32;
extern CONST(float32, CAL_CONST) k_VbattSwitchThreshExNorm_Volt_f32;
extern CONST(float32, CAL_CONST) k_ChargeMinDeltaNonOp_Volt_f32;
extern CONST(float32, CAL_CONST) k_ChargeMinDeltaExtOp_Volt_f32;
extern CONST(float32, CAL_CONST) k_ChargeMinDeltaNormlOp_Volt_f32;

/********************************* CoPICtrl **********************************/
extern CONST(float32, CAL_CONST) k_PropIntTs_Sec_f32;

/******************************** CurrentReq *********************************/
extern CONST(float32, CAL_CONST) k_CurRampUpRate_1psec_f32;
extern CONST(float32, CAL_CONST) k_CurRampDwnRate_1psec_f32;
extern CONST(float32, CAL_CONST) t_CurrentLimX_Kph_f32[4];
extern CONST(float32, CAL_CONST) t_CurrentLimY_Amp_f32[4];
extern CONST(float32, CAL_CONST) t_DutyCycleX_Uls_f32[16];
extern CONST(float32, CAL_CONST) t_DutyCycleY_Uls_f32[16];

/********************************* ThrmlMng **********************************/
extern CONST(DiagSettings_Str, CAL_CONST) k_AbsTmpDiag_Cnt_str;
extern CONST(sint16, CAL_CONST) t_TempTblX_DegC_s9p6[6];
extern CONST(uint16, CAL_CONST) t_ThermalLimitTblY_Uls_u1p15[6];

/******************************* CoilCurrMeas ********************************/
extern CONST(float32, CAL_CONST) k_EOLCoilCurrLPFKn_Hz_f32;
extern CONST(float32, CAL_CONST) k_CurrCorrLPFKn_Hz_f32;
extern CONST(float32, CAL_CONST) k_CurrRangeErrLPFKn_Hz_f32;
extern CONST(float32, CAL_CONST) k_CurrReasDiagRspTmFiltKn_Hz_f32;
extern CONST(float32, CAL_CONST) k_EstCoilRCoilVcmdFiltKn_Hz_f32;
extern CONST(float32, CAL_CONST) k_EstCoilRCoilCurrMeasFiltKn_Hz_f32;
extern CONST(float32, CAL_CONST) k_EstCoilRLrnEstRRspTmFiltKn_Hz_f32;
extern CONST(float32, CAL_CONST) k_EOLCoilCurrOffsetMin_Volt_f32;
extern CONST(float32, CAL_CONST) k_EOLCoilCurrOffsetMax_Volt_f32;
extern CONST(float32, CAL_CONST) k_EOLCurrGainMin_AmppVolt_f32;
extern CONST(float32, CAL_CONST) k_EOLCurrGainMax_AmppVolt_f32;
extern CONST(float32, CAL_CONST) k_CurrCorrErrThresh_Amp_f32;
extern CONST(float32, CAL_CONST) k_CurrRangeLowThresh_Amp_f32;
extern CONST(float32, CAL_CONST) k_CurrRangeHiThresh_Amp_f32;
extern CONST(float32, CAL_CONST) k_CurrReasMaxErr_Amp_f32;
extern CONST(float32, CAL_CONST) k_EstCoilROutputRMin_Ohm_f32;
extern CONST(float32, CAL_CONST) k_EstCoilROutputRMax_Ohm_f32;
extern CONST(float32, CAL_CONST) k_EstCoilRCurrEstTs_Sec_f32;
extern CONST(float32, CAL_CONST) k_EstCoilROutputLNom_Henry_f32;
extern CONST(float32, CAL_CONST) k_EstCoilRMaxDeltaVcmd_Volt_f32;
extern CONST(float32, CAL_CONST) k_EstCoilRMaxDeltaCurr_Amp_f32;
extern CONST(float32, CAL_CONST) t_EstCoilRInitRTempY_Ohm_f32[2];
extern CONST(float32, CAL_CONST) t_EstCoilRInitRTempX_DegC_f32[2];
extern CONST(float32, CAL_CONST) k_MinReqDenomCurr_Amp_f32;
extern CONST(float32, CAL_CONST) k_EOLCurrGainNumerator_Amp_f32;
extern CONST(float32, CAL_CONST) k_CurrReasErrThresh_Amp_f32;

/******************************** SrlComInput ********************************/
extern CONST(uint16, CAL_CONST) k_LatAccValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_BrkPresValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_SWAVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_VehSpdValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_WhlRotVldTimeOut_mS_u16p0;
extern CONST(float32, CAL_CONST) k_WhlTstmpRes_SecpCnt_f32;
extern CONST(float32, CAL_CONST) k_MaxFreqChg_Hz_f32;
extern CONST(uint16, CAL_CONST) k_WhlPlsPerRev_Cnt_u16p0;
extern CONST(sint8, CAL_CONST) k_SComTrqPosPol_Cnt_s08;
extern CONST(float32, CAL_CONST) k_DefaultVehSpd_Kph_f32;
extern CONST(uint16, CAL_CONST) k_Msg500TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg3E9TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg232TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg2F9TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg1F1TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg1E9TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg0C9TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg0C5TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg1E5TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg185TimeOut_mS_u16p0;
extern CONST(float32, CAL_CONST) k_LatAccDflt_MpSecSqrd_f32;
extern CONST(float32, CAL_CONST) k_MaxRackTrvl_HwDeg_f32;
extern CONST(uint16, CAL_CONST) k_PolarityRatValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_ShftLvrPosValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg1F5TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_EngSpdValTimeOut_mS_u16p0;

/********************************* BrakePres *********************************/
#define k_DefaultBrakePres_kPa_f32	TunSet_Ptr_Str->k_DefaultBrakePres_kPa_f32
#define k_BrakePresRateLmt_kPaps_f32	TunSet_Ptr_Str->k_BrakePresRateLmt_kPaps_f32
#define k_BrakeOffset_bar_f32	TunSet_Ptr_Str->k_BrakeOffset_bar_f32
#define k_BrakeGain_barpkPa_f32	TunSet_Ptr_Str->k_BrakeGain_barpkPa_f32

/********************************** EngSpd ***********************************/
#define k_DefaultEngSpd_rpm_f32	TunSet_Ptr_Str->k_DefaultEngSpd_rpm_f32
#define k_EngSpdRateLmt_rpmps_f32	TunSet_Ptr_Str->k_EngSpdRateLmt_rpmps_f32

/*********************************** HWAng ***********************************/
#define k_HWARcvrDur_cnt_u16	TunSet_Ptr_Str->k_HWARcvrDur_cnt_u16
#define k_HWAMaxResetAng_deg_f32	TunSet_Ptr_Str->k_HWAMaxResetAng_deg_f32
#define k_HWARateLmt_degps_f32	TunSet_Ptr_Str->k_HWARateLmt_degps_f32
#define k_HWAPolarity_uls_s8	TunSet_Ptr_Str->k_HWAPolarity_uls_s8

/******************************* PresSignlCond *******************************/
#define k_PressFiltCo_Uls_f32	TunSet_Ptr_Str->k_PressFiltCo_Uls_f32
#define k_PressRateFiltCo_Uls_f32	TunSet_Ptr_Str->k_PressRateFiltCo_Uls_f32

/******************************** VehLatAccel ********************************/
#define k_LatRcvrDur_cnt_u16	TunSet_Ptr_Str->k_LatRcvrDur_cnt_u16
#define k_LatFiltCo_uls_f32	TunSet_Ptr_Str->k_LatFiltCo_uls_f32
#define k_LatPolarity_uls_s8	TunSet_Ptr_Str->k_LatPolarity_uls_s8

/********************************** VehSpd ***********************************/
#define k_VehSpdRateLmt_Kphps_f32	TunSet_Ptr_Str->k_VehSpdRateLmt_Kphps_f32
#define k_DefVehSpdThresh_kph_f32	TunSet_Ptr_Str->k_DefVehSpdThresh_kph_f32

/********************************** CoilRes **********************************/
#define k_CoilL_Henry_f32	TunSet_Ptr_Str->k_CoilL_Henry_f32
#define k_MinCurrLmt_Amp_f32	TunSet_Ptr_Str->k_MinCurrLmt_Amp_f32
#define k_MaxCoilRes_Ohm_f32	TunSet_Ptr_Str->k_MaxCoilRes_Ohm_f32
#define k_MinCoilRes_Ohm_f32	TunSet_Ptr_Str->k_MinCoilRes_Ohm_f32
#define k_NomCoilRes_Ohm_f32	TunSet_Ptr_Str->k_NomCoilRes_Ohm_f32

/********************************* MTOEnable *********************************/
#define k_PresDisableDelay_Sec_f32	TunSet_Ptr_Str->k_PresDisableDelay_Sec_f32
#define k_SpeedThresh_Kph_f32	TunSet_Ptr_Str->k_SpeedThresh_Kph_f32
#define k_Defeat0kphLimit_Cnt_lgc	TunSet_Ptr_Str->k_Defeat0kphLimit_Cnt_lgc

/********************************* CoPICtrl **********************************/
#define t_CoilCurrCmdX_Cnt_f32	TunSet_Ptr_Str->t_CoilCurrCmdX_Cnt_f32
#define t_KpY_Uls_f32	TunSet_Ptr_Str->t_KpY_Uls_f32
#define t_KiY_Uls_f32	TunSet_Ptr_Str->t_KiY_Uls_f32

/******************************* PresBsdVarEff *******************************/
#define k_IncAng_Uls_f32	TunSet_Ptr_Str->k_IncAng_Uls_f32

/********************************* RampCtrl **********************************/
#define k_RampRate_Ampps_f32	TunSet_Ptr_Str->k_RampRate_Ampps_f32
#define k_RampCurrLimit_Amp_f32	TunSet_Ptr_Str->k_RampCurrLimit_Amp_f32
#define k_ShutDwnTimeLim_Sec_f32	TunSet_Ptr_Str->k_ShutDwnTimeLim_Sec_f32

/********************************* PullComp **********************************/
#define k_EnPullComp_Cnt_lgc	TunSet_Ptr_Str->k_EnPullComp_Cnt_lgc
#define k_PullCompEnTime_Sec_f32	TunSet_Ptr_Str->k_PullCompEnTime_Sec_f32
#define k_EnVspdRate_Kphps_f32	TunSet_Ptr_Str->k_EnVspdRate_Kphps_f32
#define k_EnVspdLow_Kph_f32	TunSet_Ptr_Str->k_EnVspdLow_Kph_f32
#define k_EnVspdHigh_Kph_f32	TunSet_Ptr_Str->k_EnVspdHigh_Kph_f32
#define k_EnHWA_Deg_f32	TunSet_Ptr_Str->k_EnHWA_Deg_f32
#define k_EnPres_Bar_f32	TunSet_Ptr_Str->k_EnPres_Bar_f32
#define k_ShortResetPres_Bar_f32	TunSet_Ptr_Str->k_ShortResetPres_Bar_f32
#define k_ShortResetHWA_Deg_f32	TunSet_Ptr_Str->k_ShortResetHWA_Deg_f32
#define k_PullLimit_Bar_f32	TunSet_Ptr_Str->k_PullLimit_Bar_f32
#define k_LongInputLim_Bar_f32	TunSet_Ptr_Str->k_LongInputLim_Bar_f32
#define k_LongCompLim_Bar_f32	TunSet_Ptr_Str->k_LongCompLim_Bar_f32
#define k_ShortInputLim_Bar_f32	TunSet_Ptr_Str->k_ShortInputLim_Bar_f32
#define t_PullCompScaleX_Kph_f32	TunSet_Ptr_Str->t_PullCompScaleX_Kph_f32
#define t_PullCompScaleY_Uls_f32	TunSet_Ptr_Str->t_PullCompScaleY_Uls_f32
#define k_LongPCLrnTime_Sec_f32	TunSet_Ptr_Str->k_LongPCLrnTime_Sec_f32
#define k_ShortPCLrnTime_Sec_f32	TunSet_Ptr_Str->k_ShortPCLrnTime_Sec_f32

/********************************* ModHwAng **********************************/
#define k_CompHWAng_Cnt_lgc	TunSet_Ptr_Str->k_CompHWAng_Cnt_lgc

/********************************* ReqValAng *********************************/
#define t_PresThreshX_Kph_f32	TunSet_Ptr_Str->t_PresThreshX_Kph_f32
#define t_PresThresY_Bar_f32	TunSet_Ptr_Str->t_PresThresY_Bar_f32

/******************************** EstValveAng ********************************/
#define t_PresAngX_Bar_f32	TunSet_Ptr_Str->t_PresAngX_Bar_f32
#define t_PresAngY_Deg_f32	TunSet_Ptr_Str->t_PresAngY_Deg_f32
#define t2_FlowScaleX_Bar_u8p8	TunSet_Ptr_Str->t2_FlowScaleX_Bar_u8p8
#define t2_FlowScaleY_Uls_u4p12	TunSet_Ptr_Str->t2_FlowScaleY_Uls_u4p12
#define t_FlowScaleZ_Rpm_u14p2	TunSet_Ptr_Str->t_FlowScaleZ_Rpm_u14p2
#define k_EffortScaleMax_Uls_f32	TunSet_Ptr_Str->k_EffortScaleMax_Uls_f32
#define k_EffortScaleMin_Uls_f32	TunSet_Ptr_Str->k_EffortScaleMin_Uls_f32

/******************************** Damping_MTO ********************************/
#define k_DmpRcvrDur_Sec_f32	TunSet_Ptr_Str->k_DmpRcvrDur_Sec_f32
#define k_DmpMaxResetVel_Degps_f32	TunSet_Ptr_Str->k_DmpMaxResetVel_Degps_f32
#define k_DmpRampRate_1psec_f32	TunSet_Ptr_Str->k_DmpRampRate_1psec_f32
#define k_DmpRcvrRate_1psec_f32	TunSet_Ptr_Str->k_DmpRcvrRate_1psec_f32

/******************************* EstFluidTemp ********************************/
#define t_CoilRes_Ohm_f32	TunSet_Ptr_Str->t_CoilRes_Ohm_f32
#define t_CoilTemp_DegC_f32	TunSet_Ptr_Str->t_CoilTemp_DegC_f32
#define t_FluidTempChgX_Amp_f32	TunSet_Ptr_Str->t_FluidTempChgX_Amp_f32
#define t_FluidTempChgY_DegC_f32	TunSet_Ptr_Str->t_FluidTempChgY_DegC_f32
#define k_TempRateLmt_DegCps_f32	TunSet_Ptr_Str->k_TempRateLmt_DegCps_f32
#define k_CoolRate_DegCps_f32	TunSet_Ptr_Str->k_CoolRate_DegCps_f32
#define k_HeatRate_DegCps_f32	TunSet_Ptr_Str->k_HeatRate_DegCps_f32

/******************************** EstLatAccel ********************************/
#define k_Understr_Degpg_f32	TunSet_Ptr_Str->k_Understr_Degpg_f32
#define k_Ratio_Uls_f32	TunSet_Ptr_Str->k_Ratio_Uls_f32
#define k_Wheelbase_m_f32	TunSet_Ptr_Str->k_Wheelbase_m_f32

/********************************** HysComp **********************************/
#define k_HysCompPressFiltCo_Uls_f32	TunSet_Ptr_Str->k_HysCompPressFiltCo_Uls_f32
#define t_HysCompVelBlndX_Degps_f32	TunSet_Ptr_Str->t_HysCompVelBlndX_Degps_f32
#define t_HysCompVelBlndY_Uls_f32	TunSet_Ptr_Str->t_HysCompVelBlndY_Uls_f32
#define t_HysRiseX_Nm_f32	TunSet_Ptr_Str->t_HysRiseX_Nm_f32
#define t_HysRiseY_Uls_f32	TunSet_Ptr_Str->t_HysRiseY_Uls_f32
#define k_HysRevGain_1pNm_f32	TunSet_Ptr_Str->k_HysRevGain_1pNm_f32
#define k_HysMaxChng_Barps_f32	TunSet_Ptr_Str->k_HysMaxChng_Barps_f32
#define k_Vel2Trq_Nmspdeg_f32	TunSet_Ptr_Str->k_Vel2Trq_Nmspdeg_f32
#define k_HysCmpRcvrDur_Sec_f32	TunSet_Ptr_Str->k_HysCmpRcvrDur_Sec_f32
#define k_HysCmpMaxResetTrq_Nm_f32	TunSet_Ptr_Str->k_HysCmpMaxResetTrq_Nm_f32
#define k_HysCmpRampRate_1psec_f32	TunSet_Ptr_Str->k_HysCmpRampRate_1psec_f32
#define k_HysCmpRcvrRate_1psec_f32	TunSet_Ptr_Str->k_HysCmpRcvrRate_1psec_f32

/******************************** AvailMagTrq ********************************/
#define t_MagAngle_Deg_f32	TunSet_Ptr_Str->t_MagAngle_Deg_f32
#define t_ZeroAmpTrq_Nm_f32	TunSet_Ptr_Str->t_ZeroAmpTrq_Nm_f32
#define t_ThreeAmpTrq_Nm_f32	TunSet_Ptr_Str->t_ThreeAmpTrq_Nm_f32
#define k_ThreeAmpScaleMax_Uls_f32	TunSet_Ptr_Str->k_ThreeAmpScaleMax_Uls_f32
#define k_ThreeAmpScaleMin_Uls_f32	TunSet_Ptr_Str->k_ThreeAmpScaleMin_Uls_f32
#define k_ZeroAmpScaleMax_Uls_f32	TunSet_Ptr_Str->k_ZeroAmpScaleMax_Uls_f32
#define k_ZeroAmpScaleMin_Uls_f32	TunSet_Ptr_Str->k_ZeroAmpScaleMin_Uls_f32

/******************************* ImbCorrection *******************************/
#define t_ImbalBlndX_Kph_f32	TunSet_Ptr_Str->t_ImbalBlndX_Kph_f32
#define t_ImbalBlndY_Uls_f32	TunSet_Ptr_Str->t_ImbalBlndY_Uls_f32

/******************************** Return_MTO *********************************/
#define k_EnRetrn_Cnt_lgc	TunSet_Ptr_Str->k_EnRetrn_Cnt_lgc
#define k_RTNGain_Uls_f32	TunSet_Ptr_Str->k_RTNGain_Uls_f32
#define t_RTNmaxX_Kph_f32	TunSet_Ptr_Str->t_RTNmaxX_Kph_f32
#define t_RTNmaxY_Nm_f32	TunSet_Ptr_Str->t_RTNmaxY_Nm_f32
#define k_RTNRcvrDur_Sec_f32	TunSet_Ptr_Str->k_RTNRcvrDur_Sec_f32
#define k_RTNMaxResetAng_Deg_f32	TunSet_Ptr_Str->k_RTNMaxResetAng_Deg_f32
#define k_RTNRampRate_1psec_f32	TunSet_Ptr_Str->k_RTNRampRate_1psec_f32
#define k_RTNRcvrRate_1psec_f32	TunSet_Ptr_Str->k_RTNRcvrRate_1psec_f32

/******************************* PresBsdVarEff *******************************/
#define t_SpeedX_Kph_f32	TunPer_Ptr_Str->t_SpeedX_Kph_f32
#define t_SpeedY_NmpDeg_f32	TunPer_Ptr_Str->t_SpeedY_NmpDeg_f32
#define t_VlvAngBlndX_Kph_f32	TunPer_Ptr_Str->t_VlvAngBlndX_Kph_f32
#define t_VlvAngBlndY_Uls_f32	TunPer_Ptr_Str->t_VlvAngBlndY_Uls_f32
#define t_VlvAngTrqX_Deg_f32	TunPer_Ptr_Str->t_VlvAngTrqX_Deg_f32
#define t_VlvAngTrqY_Nm_f32	TunPer_Ptr_Str->t_VlvAngTrqY_Nm_f32

/******************************** EstValveAng ********************************/
#define t_TempScaleX_DegC_f32	TunPer_Ptr_Str->t_TempScaleX_DegC_f32
#define t_TempScaleY_Uls_f32	TunPer_Ptr_Str->t_TempScaleY_Uls_f32

/******************************** Damping_MTO ********************************/
#define t_DampX_Kph_f32	TunPer_Ptr_Str->t_DampX_Kph_f32
#define t_DampY_Barspdeg_f32	TunPer_Ptr_Str->t_DampY_Barspdeg_f32
#define t_DampBlndX_Bar_f32	TunPer_Ptr_Str->t_DampBlndX_Bar_f32
#define t_DampBlndY_Uls_f32	TunPer_Ptr_Str->t_DampBlndY_Uls_f32
#define k_EnDamp_Cnt_lgc	TunPer_Ptr_Str->k_EnDamp_Cnt_lgc

/**************************** CogTrqComp, HysComp ****************************/
#define t_HysBlendX_Bar_f32	TunPer_Ptr_Str->t_HysBlendX_Bar_f32

/******************************** CogTrqComp *********************************/
#define t_CompCogTrqX_Kph_f32	TunPer_Ptr_Str->t_CompCogTrqX_Kph_f32
#define t_CompCogTrqY_Uls_f32	TunPer_Ptr_Str->t_CompCogTrqY_Uls_f32

/********************************** HysComp **********************************/
#define t_HysBlendY_Uls_f32	TunPer_Ptr_Str->t_HysBlendY_Uls_f32
#define t_HysSpeedX_Kph_f32	TunPer_Ptr_Str->t_HysSpeedX_Kph_f32
#define t_HysConstY_Bar_f32	TunPer_Ptr_Str->t_HysConstY_Bar_f32
#define t_HysEffLossY_Uls_f32	TunPer_Ptr_Str->t_HysEffLossY_Uls_f32
#define t_HysSatY_Bar_f32	TunPer_Ptr_Str->t_HysSatY_Bar_f32
#define t_HysEffOffsetY_Bar_f32	TunPer_Ptr_Str->t_HysEffOffsetY_Bar_f32
#define k_EnHysComp_Cnt_lgc	TunPer_Ptr_Str->k_EnHysComp_Cnt_lgc

/******************************* LatBsdVarEff ********************************/
#define t_LatX_g_f32	TunPer_Ptr_Str->t_LatX_g_f32
#define t_LatY_Nm_f32	TunPer_Ptr_Str->t_LatY_Nm_f32
#define t_LatMultX_kph_f32	TunPer_Ptr_Str->t_LatMultX_kph_f32
#define t_LatMultY_uls_f32	TunPer_Ptr_Str->t_LatMultY_uls_f32

/******************************** Return_MTO *********************************/
#define t_RTNFullOffPresX_Kph_f32	TunPer_Ptr_Str->t_RTNFullOffPresX_Kph_f32
#define t_RTNFullOffPresY_Bar_f32	TunPer_Ptr_Str->t_RTNFullOffPresY_Bar_f32
#define t_RtnBlndX_Kph_f32	TunPer_Ptr_Str->t_RtnBlndX_Kph_f32
#define t_RtnBlndY_Uls_f32	TunPer_Ptr_Str->t_RtnBlndY_Uls_f32
#define t_RtnTrqX_Deg_f32	TunPer_Ptr_Str->t_RtnTrqX_Deg_f32
#define t_RtnTrqY_Nm_f32	TunPer_Ptr_Str->t_RtnTrqY_Nm_f32
#endif

/*********************** Start of Code Footer ************************/

extern P2CONST(TUNING_P_Str, AUTOMATIC, AUTOMATIC) TunPer_Ptr_Str;
extern P2CONST(TUNING_Y_Str, AUTOMATIC, AUTOMATIC) TunSet_Ptr_Str;
extern CONSTP2CONST(TUNING_P_Str, AUTOMATIC, AUTOMATIC) T_TunPersSelectionTbl_Ptr_Str[D_NUMOFTUNSETS_CNT_U16][D_NUMOFPERS_CNT_U16];
extern CONSTP2CONST(TUNING_Y_Str, AUTOMATIC, AUTOMATIC) T_TunSetSelectionTbl_Ptr_Str[D_NUMOFTUNSETS_CNT_U16];
