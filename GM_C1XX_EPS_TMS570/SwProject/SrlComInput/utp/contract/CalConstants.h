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
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          10 %
 * %derived_by:       CZ8L9T %
 * %date_modified:    Fri Sep 27 10:27:34 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 */

#ifndef CALCONSTANTS_H
#define CALCONSTANTS_H

#include "Std_Types.h"

/*********************** Start of Auto Generated Code ************************/

/****************** File Generated on 7/9/2015 10:19:52 AM *******************/
/*************************** SrlComInput - Rev 19 ****************************/



extern CONST(uint16, CAL_CONST) k_LatAccValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_YawRateValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_VehSpdValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_WhlRotVldTimeOut_mS_u16p0;
extern CONST(float32, CAL_CONST) k_WhlTstmpRes_SecpCnt_f32;
extern CONST(float32, CAL_CONST) k_MaxFreqChg_Hz_f32;
extern CONST(uint16, CAL_CONST) k_WhlPlsPerRev_Cnt_u16p0;
extern CONST(sint8, CAL_CONST) k_SComTrqPosPol_Cnt_s08;
extern CONST(float32, CAL_CONST) k_DefaultVehSpd_Kph_f32;

/**************************** GM_K2XX_EPS_TMS570 *****************************/
extern CONST(uint16, CAL_CONST) k_Msg500TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg3E9TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg232TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg1F5TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg1F1TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg1E9TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg0C9TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg0C1TimeOut_mS_u16p0;
extern CONST(float32, CAL_CONST) k_YawRateDflt_DegpSec_f32;
extern CONST(float32, CAL_CONST) k_LatAccDflt_MpSecSqrd_f32;
extern CONST(uint16, CAL_CONST) k_Msg337TimeOut_mS_u16;
extern CONST(uint16, CAL_CONST) k_Msg182TimeOut_mS_u16;
extern CONST(uint16, CAL_CONST) k_EngTempValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_AmbTempValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg4C1TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg3F1TimeOut_mS_u16p0;
extern CONST(float32, CAL_CONST) k_AmbTempDflt_DegC_f32;
extern CONST(float32, CAL_CONST) k_EngTempDflt_DegC_f32;
extern CONST(uint16, CAL_CONST) k_ParkAssistParallelValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_VehicleDynamicsESCHybCEValTimeOut_mS_u16p0;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg1E9TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg232TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg0C9TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg0C1TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg500TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg1F1TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg1F5TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg214TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg3E9TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg348CETimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg348HSTimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg180HSTimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg34ACETimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg34AHSTimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg337TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg182TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_VehSpdValDiag_Cnt_Str;
extern CONST(DiagSettings_Str, CAL_CONST) k_LatAccValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_YawRateValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_ParkAssistParallelValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_VehicleDynamicsESCHybCEValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_EngTempValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_AmbTempValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg3F1LossTimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg4C1LossTimeOutDiag_Cnt_str;
extern CONST(uint16, CAL_CONST) k_Msg214TimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg214LKATimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg1E9LKATimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg180HSLKATimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg348CELKATimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg34AHSLKATimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg34ACELKATimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg348HSLKATimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg17DLKATimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg17DTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg180HSTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg348HSTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg348CETimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg34AHSTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg34ACETimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_LKATqOvrDltCmdPrtVlVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_LKATqOvrDltCmdRCVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_RedntVSEActARCVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_RedntVSEActVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_ABSActvProtPValVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_ABSActvProtARCVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_WhlGrndVlctyStuckTime_mS_u16;
extern CONST(uint16, CAL_CONST) k_WhlGrndVlctyLftDrvnHSVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_WhlGrndVlctyLftNnDrvnHSVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_WhlGrndVlctyLftDrvnCEVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_WhlGrndVlctyLftNnDrvnCEVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_WhlGrndVlctyRtDrvnHSVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_WhlGrndVlctyRtNnDrvnHSVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_WhlGrndVlctyRtDrvnCEVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_WhlGrndVlctyRtNnDrvnCEVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_VSEActValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_TCSysEValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_TCSysAValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_VhDynCValTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_ABSFldValTimeOut_mS_u16p0;
extern CONST(DiagSettings_Str, CAL_CONST) k_VSEActValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_TCSysEValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_TCSysAValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_ABSFldValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_VhDynCValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyRtDrvnHSValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyLftDrvnHSValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyRtNnDrvnHSValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyLftNnDrvnHSValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyRtDrvnCEValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyLftDrvnCEValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyRtNnDrvnCEValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyLftNnDrvnCEValDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_LKATqOvrDltCmdPrtVlVldDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_LKATqOvrDltCmdRCVldDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_RedntVSEActARCVldDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_RedntVSEActVldDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_ABSActvProtPValVldDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_ABSActvProtARCVldDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_ABSActvProtVldDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_TrnsShftLvrPosVldDiag_Cnt_str;
extern CONST(uint16, CAL_CONST) k_TrnsShftLvrPosVldTimeOut_mS_u16p0;
extern CONST(DiagSettings_Str, CAL_CONST) k_Ms17DTimeOutDiag_Cnt_str;

/******************************** SrlComInput ********************************/
extern CONST(uint16, CAL_CONST) k_LKAVehStabEnVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_ESCRollCountVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_Msg180CETimeOut_mS_u16p0;
extern CONST(boolean, CAL_CONST) k_ESCMfgEnable_Cnt_lgc;
extern CONST(boolean, CAL_CONST) k_LKAMfgEnable_Cnt_lgc;
extern CONST(boolean, CAL_CONST) k_APAMfgEnable_Cnt_lgc;
extern CONST(DiagSettings_Str, CAL_CONST) k_ActAxleTrqVldDiag_Cnt_str;
extern CONST(uint16, CAL_CONST) k_ActAxleTrqVldTimeOut_mS_u16p0;
extern CONST(uint16, CAL_CONST) k_ESCChksmVldTimeOut_mS_u16p0;
extern CONST(DiagSettings_Str, CAL_CONST) k_ESCRollCountVldDiag_Cnt_str;
extern CONST(uint16, CAL_CONST) k_Msg0D3TimeOut_mS_u16p0;
extern CONST(DiagSettings_Str, CAL_CONST) k_EngSpdStatVldDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg0D3TimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg180CETimeOutDiag_Cnt_str;
extern CONST(uint16, CAL_CONST) k_EngSpdStatVldTimeOut_mS_u16p0;
extern CONST(DiagSettings_Str, CAL_CONST) k_ESCChksmVldDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_WIRFltStatusDiag_Cnt_str;
extern CONST(uint8, CAL_CONST) k_APARecFltsMsk_Cnt_b08;
extern CONST(uint16, CAL_CONST) k_APANonRecFltsMsk_Cnt_b16;
extern CONST(uint16, CAL_CONST) k_Msg337APARecTimeOut_mS_u16;
extern CONST(uint16, CAL_CONST) k_Msg337APANonRecTimeOut_mS_u16;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg337APATimeOutDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_Msg337APAInvalidDiag_Cnt_str;
#endif
