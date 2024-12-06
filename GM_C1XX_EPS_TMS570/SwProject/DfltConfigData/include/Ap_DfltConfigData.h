/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : EPS_DiagSrvcs_CommonFunc.h file
* Module Description: Common Manufacturing Program Interface for XCP and ISO services
* Product           : Gen II Plus - EA3.0
* Author            : Kevin Smith
*
* Notes:
* This file contains configurations that are shared between ISO and XCP services.
*
*****************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* Version Control:
 * Date Created:      Mon Apr 12 10:20:00 2012
 * %version:          EA3#12 %
 * %derived_by:       CZ8L9T %
 * %date_modified:    Fri Jan 24 16:14:39 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 * 01/24/13  6        RM        A6141: Customer PID $4074 Not Working                                           11307
 * 05/06/14  7        BWL       Updates for new NvMProxy component.
 * 07/30/14  9        BWL       Remove references to TrqOvlSta NvM.
 * 11/24/14  10       JWJ       Implemented Cal Program Status NvM block                                        12732
 * 01/16/15  11       JWJ       Added new typedef for seed/key structure                                        12851
 * 10/30/15  12       GMN       New variables for cyber security bootloader                                     EA3#4135
 * 10/30/15  12       GMN       Moved indirect header include of NvM.h to .c file

 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include area >>		                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Rte_Type.h"
#include "GlobalMacro.h"
#include "CDD_Data.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include area >>   		      		    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#ifndef RTE_AP_DFLTCONFIGDATA_H
#define RTE_AP_DFLTCONFIGDATA_H

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of custom include area >>	                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of custom include area >>	                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of custom define area >>   		  	    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of custom define area >>	                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define D_SEEDKEYNOTPROGRAMMED_CNT_U08	0x00U
#define D_SEEDKEYPROGRAMMED_CNT_U08		0xAAU

typedef struct {
	union {
		VAR(uint8, AUTOMATIC) Seed[5U];
		VAR(uint8, AUTOMATIC) Key[5U];
	} Data;
	VAR(uint8, AUTOMATIC) ProgramFlag;
} DfltConfigData_SeedKey_Str;

/* RAM references */
extern VAR(UInt16, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_Polarity_k_SystemPolarity_Cnt_b16;
extern VAR(uint16, AUTOMATIC) SrlComWIRFltStatus_Cnt_u16;
extern VAR(uint16, CDD_VAR_NOINIT) CDD_EOLNxtrWIRSelect_Cnt_G_u16;
extern VAR(EOLNomMtrParamType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_ParamComp_EOLNomMtrParam;
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) NvMP_Rte_TrqCmdScl_TorqueCmdSF_Uls_f32[4u];
extern VAR(Float, RTE_VAR_INIT) Rte_DigColPs_I2CHwAbsPos_HwDeg_f32;
extern VAR(uint8, EPSDIAGSRVCS_VAR) NxtrMEC_Cnt_G_u8;
extern VAR(Float, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_Return_EOLReturnRange;
extern VAR(uint8, CDD_PARTNUMBER) Nvm_VIN_Cnt_u8[17];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_SystemName_Cnt_u8[20];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_RepairShopCode_Cnt_u8[10];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_PrevRepairShopCode_Cnt_u8[10];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_ProgDate_Cnt_u8[4];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_SystemVerCodeDDI_Cnt_u8[2];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_CMEC_Cnt_u8;
extern VAR(uint8, CDD_PARTNUMBER) Nvm_ManfTraceability_Cnt_u8[16];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_EndModelPN_Cnt_u8[4];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_EndModelPNAC_Cnt_u8[2];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_DataUnivNumSysID_Cnt_u8[9];

/*
 * The ECU_ID is a 16 byte, secure static memory, unsigned string which stores a controller
 * specific unique number. Check DID 0xF3 for more details.
 */
extern VAR(uint8, NVM_APPL_DATA) Nvm_EcuId_Cnt_u8[16];

/* ECU ID size */
#define D_DFTCFGECUID_CNT_U8 (sizeof(Nvm_EcuId_Cnt_u8)/sizeof(Nvm_EcuId_Cnt_u8[0]))

extern VAR(uint16, NVM_APPL_DATA) Nvm_AppNbid_Cnt_u16;
extern VAR(uint16, NVM_APPL_DATA) Nvm_Bcid_Cnt_u16;

/*
 * Signature Bypass Authorization Ticket (SBAT).
 * Check DID 0xF4 for more details.
 */
extern VAR(uint8, NVM_APPL_DATA) Nvm_Sbat_Cnt_u8[822];

/* SBAT size */
#define D_DFTCFGSBAT_CNT_U16 (sizeof(Nvm_Sbat_Cnt_u8)/sizeof(Nvm_Sbat_Cnt_u8[0]))

extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_SPSSeed_Cnt_str;
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_SPSKey_Cnt_str;
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_CPIDSeed_Cnt_str;
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_CPIDKey_Cnt_str;
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_NexteerSeed_Cnt_str;
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_NexteerKey_Cnt_str;

extern VAR(uint8, NVM_APPL_DATA) Nvm_BaseModelPartNumber_Cnt_u8[4];
extern VAR(uint8, NVM_APPL_DATA) Nvm_BaseModelPartNumberAlphaCode_Cnt_u8[2];
extern VAR(uint8, NVM_APPL_DATA) Nvm_CalProgFlag_Cnt_u8;

extern VAR(uint8, CDD_PARTNUMBER) Nvm_NMEC_Cnt_u8;
extern VAR(boolean, NVM_APPL_DATA) Nvm_NMECReachedZero_Cnt_lgc;
extern VAR(uint8, CDD_PARTNUMBER) Nvm_EcuSrlNum_Cnt_u8[4];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_EpsSrlNum_Cnt_u8[4];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_EcuHwPn_Cnt_u8[12];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_NxtrManfScrpd_Cnt_u8[64];
extern VAR(uint16, CDD_PARTNUMBER) Nvm_IgnCntr_Cnt_u16;

extern CONST(uint8, CDD_PARTNUMBER) T_GMLANID_Cnt_u8[12];
extern CONST(uint8, CDD_PARTNUMBER) T_SwModID1andAC_Cnt_u8[6];

extern CONST(uint8, CDD_PARTNUMBER) k_SWRelNum_Cnt_u8[0x20];

extern FUNC(void, CDD_PARTNUMBER_CODE) DfltConfigData_Init1(void);

#endif /* RTE_AP_DFLTCONFIGDATA_H */
