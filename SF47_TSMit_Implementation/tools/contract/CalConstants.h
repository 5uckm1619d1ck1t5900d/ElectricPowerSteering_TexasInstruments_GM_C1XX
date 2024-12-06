/***********************************************************************************************************************
 * Copyright 2014 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CalConstants.h
 * Module Description: This file contains the declarations of calibration constants used in the EPS Software.
 * Product           : EA3.0
 * Author            : Jared Julien
 **********************************************************************************************************************/
/*----------------------------------------------------------------------------------------------------------------------
 * Version Control:
 * Date Created:      Wed Jul 07 09:37:12 2014
 * %version:          1 %
 * %derived_by:       kzdyfh %
 *--------------------------------------------------------------------------------------------------------------------*/
#ifndef CALCONSTANTS_H
#define CALCONSTANTS_H

#include "Std_Types.h"

/*********************** Start of Auto Generated Code ************************/

/****************** File Generated on 7/23/2014 4:09:32 PM *******************/
/********************** Torque Steer Mitigation - Rev 1 **********************/



extern CONST(float32, CAL_CONST) k_TSMitHwTrqLPFiltFc_Hz_f32;
extern CONST(float32, CAL_CONST) k_TSMitYawRateLPFiltFc_Hz_f32;
extern CONST(float32, CAL_CONST) k_TSMitGainLearningFreqFc_Hz_f32;
extern CONST(boolean, CAL_CONST) k_TSMitUseABSActiveFlag_Cnt_lgc;
extern CONST(boolean, CAL_CONST) k_TSMitUseTCSActiveFlag_Cnt_lgc;
extern CONST(boolean, CAL_CONST) k_TSMitUseESCActiveFlag_Cnt_lgc;
extern CONST(float32, CAL_CONST) k_TSMitMinHwTrqEnable_HwNm_f32;
extern CONST(float32, CAL_CONST) k_TSMitMaxHwPosEnable_HwDeg_f32;
extern CONST(float32, CAL_CONST) k_TSMitMaxYawRateEnable_DegpS_f32;
extern CONST(float32, CAL_CONST) k_TSMitMinHwAuthEnable_Uls_f32;
extern CONST(float32, CAL_CONST) k_TSMitMinVehSpdEnable_Kph_f32;
extern CONST(float32, CAL_CONST) k_TSMitMaxVehSpdEnable_Kph_f32;
extern CONST(float32, CAL_CONST) k_TSMitMaxHwVelEnable_HwRadpS_f32;
extern CONST(float32, CAL_CONST) k_TSMitMaxNegTransTrqEnable_TransNm_f32;
extern CONST(float32, CAL_CONST) k_TSMitMinPosTransTrqEnable_TransNm_f32;
extern CONST(float32, CAL_CONST) k_TSMitTimeOnEnable_Sec_f32;
extern CONST(float32, CAL_CONST) k_TSMitPosTransGainLimit_HwNmpTransNm_f32;
extern CONST(boolean, CAL_CONST) k_TSMitDisableNegTransTrqSTGainLearning_Cnt_f32;
extern CONST(float32, CAL_CONST) k_TSMitNegTransGainLimit_HwNmpTransNm_f32;
extern CONST(uint16, CAL_CONST) t_TSMitCmdSclVelocityTbl_Kph_u8p8[5];
extern CONST(sint16, CAL_CONST) t_TSMitCmdSclHwPosTbl_HwDeg_s10p5[11];
extern CONST(uint16, CAL_CONST) t2_TSMitCmdSclScaleFactor_Uls_u2p14[5][11];
extern CONST(float32, CAL_CONST) k_TSMitPosTransTrqThresh_TransNm_f32;
extern CONST(float32, CAL_CONST) k_TSMitNegTransTrqThresh_TransNm_f32;
extern CONST(float32, CAL_CONST) k_TSMitCmdSlewRate_HwNmpS_f32;
extern CONST(float32, CAL_CONST) k_CmnSysTrqRatio_HwNmpMtrNm_f32;
#endif


