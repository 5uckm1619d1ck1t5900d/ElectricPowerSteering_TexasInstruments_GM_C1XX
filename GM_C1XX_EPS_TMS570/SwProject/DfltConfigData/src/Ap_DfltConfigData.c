/*****************************************************************************
* Copyright 2014 Nexteer
* Nexteer Confidential
*
* Module File Name  : Ap_DfltConfigData.c
* Module Description:
* Product           : Gen II Plus - EA3.0
* Author            : Kevin Smith
*
*
*****************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* Version Control:
 * Date Created:      Mon Apr 12 10:20:00 2012
 * %version:          EA3#56.2.11 %
 * %derived_by:       fz9hxm %
 * %date_modified:    Wed Feb 12 14:26:44 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                           SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 * 08/14/13  3        LWW       Updates for build
 * 08/30/13  4        LWW       Updates for build
 * 08/30/13  6        BWL       Fix location for T_GMLANID_Cnt_u8 to share with bootloader.
 * 09/12/13  7        LWW       Updates for build
 * 09/24/13  8        LWW       Removed initialization of polarity block
 * 10/01/13  9        LWW       Updates for build
 * 10/02/13  10       LWW       Updates for build
 * 10/11/13  11       BWL       Updates for build
 * 10/17/13  12       BWL       Updates for build
 * 10/18/13  13       BWL       Updates for build
 * 11/08/13  14       BWL       Updates for build
 * 11/26/13  17       BWL       Updates for build
 * 12/04/13  18       BWL       Updates for build
 * 02/12/14  19       BWL       Updates for build
 * 03/21/14  20       BWL       Updates for build
 * 03/26/14  21       BWL       Updates for build
 * 04/04/14  22       BWL       Update T_GMLANID_Cnt_u8 for new Message Database
 * 04/14/14  23       BWL       Updates for build
 * 04/28/14  24       BWL       Add logic for APA inhibit.
 * 05/06/14  25       BWL       Updates for build
 * 05/15/14  26       BWL       Updates for build
 * 06/03/14  27       BWL       Updates for build
 * 06/04/14  28       BWL       Updates for build
 * 06/05/14  29       BWL       Add default part numbers per A6848.
 * 06/09/14  30,31    BWL       Updates for build
 * 07/02/14  32       BWL       Updates for 01.04.00
 * 07/30/14  33       BWL       Remove TrqOvlSta NvM Initalization.
 * 08/07/14  34       JWJ       Updates for 01.04.01
 * 08/12/14  35       JWJ       Updates for 01.04.02                                                         12420
 * 08/12/14  35       JWJ       Updates for 02.00.00                                                         12163
 * 09/25/14  36       JWJ       Updates for 02.00.01                                                         12484
 * 10/03/14  37       JWJ       Updates for 02.00.02                                                         12514
 * 10/06/14  38       JWJ       Updates for 02.00.03                                                         12518
 * 10/10/14  40       JWJ       Updates for 02.00.04                                                         12532
 * 10/16/14  41       JWJ       Updates for 02.00.05                                                         12549
 *                              A7510: Update GMLAN kernel version to match actual kernel version used       12550
 * 10/22/14  42       JWJ       Updates for 02.00.06                                                         12570
 * 10/27/14  43       JWJ       Updates for 03.00.00                                                         12591
 * 11/20/14  44       JWJ       Updates for 03.01.00                                                         12638
 *                              Added NvM configuration for DID 02 - Cal Program Status                      12732
 * 12/08/14  45       JWJ       Updated part numbers for 03.02.00 build                                      12639
 * 12/16/14  46       JWJ       Updated part numbers for 03.02.01 build                                      12824
 * 01/16/15  47       JWJ       Updated part numbers for 04.00.00 build                                      12849
 *                              Updates for 5 byte seed and key                                              12851
 * 01/27/15  48       JWJ       Updated part numbers for 04.00.01 build                                      12951
 * 02/02/15  49       JWJ       Updated part numbers for 04.01.00 build                                      12850
 *                              A7755: Update DID DE, GM database version - again                            12879
 * 02/10/15  50       GMN       Updated part number for 04.01.01 build                                       13011
 * 02/16/15  51       JWJ       Updated part numbers for 04.01.02 build                                      13042
 *                              EA3#47: Set the new seed/key to write defaults regardless of MEC state       13041
 * 02/25/15  52       JWJ       Updated part numbers for 04.01.03 build                                      13069
 * 03/30/15  53       JWJ       Updated part numbers for 05.00.00 build                                      13188
 * 05/15/15  54       GMN       Updated part numbers for 05.01.00 build
 * 06/11/15  55       GMN       Updated part numbers for 05.02.00 build
 * 07/28/15  56       GMN       Updated part numbers for 05.03.00 build
 * 10/30/15  56.2.1   GMN       New variables for cyber security bootloader                                  EA3#4135
 * 12/12/15  56.2.2   CP        Updated part numbers for 06.01.00 build                                      EA3#5392
 * 02/22/15  56.2.3   CP        Updated part numbers for 06.01.01 build                                      EA3#6160
 * 04/12/16  56.2.3   CP        Updated part numbers for 06.02.00 build  
 * 04/12/16  56.2.4   CP        Updated part numbers for 06.02.01 build
 * 04/28/16  56.2.5   CP        Updated part numbers for 06.02.01 build and Moved data 
 *                              from nonInit to init region in app9
 * 05/03/16  56.2.5   CP        Updated part numbers for 06.03.00 build
 * 05/12/16  56.2.8   CP        Updated part numbers for 06.03.01 build
 * 05/24/16  56.2.9   CP        Updated part numbers for 06.04.00 build
 * 06/22/16  56.2.10  CP        Updated part numbers for BEV 03.00.00 build
 * 07/07/16  56.2.11  CP        Updated part numbers for BEV 03.00.01 build
 * 08/10/16  56.2.12  CP        Updated part numbers for BEV 03.01.00 build
 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Ap_DfltConfigData.h"
#include "NvM.h"
#include "EPS_DiagSrvcs_SrvcLUTbl.h"
#include "Cd_NvMProxy.h"
#include "CalConstants.h"
#include "Cd_NvMProxy_Cfg.h"
#include "T1_AppInterface.h"

/* Select the release suffix based on the build type*/
#if	defined(ENABLE_UTILIZATION_MONITOR)
	#define D_SUFFIX    "_U"
#elif defined(ENABLE_CPUUSE_METRICS)
	#define D_SUFFIX    "_T"
#elif defined(ENABLE_METRICS)
	#define D_SUFFIX    "_O"
#elif defined(T1_ENABLE)
	#define D_SUFFIX    "_T1"
#elif defined(SWEEPBUILD)
	#define D_SUFFIX    "_SWP1"
#elif( BC_FLTINJECTION_ENABLEFAULTINJECTION == STD_ON )
	#define D_SUFFIX    "_FLT"
#else
	#define D_SUFFIX
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/*Current Sw Release Number(from CM Synergy)*/

/* Multiple strings separated by a space are combined at compile time.  So the result of the expression is a single string */
#pragma DATA_SECTION(k_SWRelNum_Cnt_u8,"N_NxtrSWPN");
CONST(uint8, CDD_PARTNUMBER) k_SWRelNum_Cnt_u8[0x20] = "BEV_03.01.00" D_SUFFIX;

/* -----[ SER Defined NvM Data ]------------------------------------------------------------------------------------- */
VAR(uint8, CDD_PARTNUMBER) Nvm_VIN_Cnt_u8[17];
VAR(uint8, CDD_PARTNUMBER) Nvm_SystemName_Cnt_u8[20];
VAR(uint8, CDD_PARTNUMBER) Nvm_RepairShopCode_Cnt_u8[10];
VAR(uint8, CDD_PARTNUMBER) Nvm_PrevRepairShopCode_Cnt_u8[10];
VAR(uint8, CDD_PARTNUMBER) Nvm_ProgDate_Cnt_u8[4];
VAR(uint8, CDD_PARTNUMBER) Nvm_SystemVerCodeDDI_Cnt_u8[2];
VAR(uint8, CDD_PARTNUMBER) Nvm_CMEC_Cnt_u8;
VAR(uint8, CDD_PARTNUMBER) Nvm_ManfTraceability_Cnt_u8[16];
VAR(uint8, CDD_PARTNUMBER) Nvm_EndModelPN_Cnt_u8[4];
VAR(uint8, CDD_PARTNUMBER) Nvm_EndModelPNAC_Cnt_u8[2];
VAR(uint8, CDD_PARTNUMBER) Nvm_DataUnivNumSysID_Cnt_u8[9];
VAR(uint8, NVM_APPL_DATA) Nvm_BaseModelPartNumber_Cnt_u8[4];
VAR(uint8, NVM_APPL_DATA) Nvm_BaseModelPartNumberAlphaCode_Cnt_u8[2];
VAR(uint8, NVM_APPL_DATA) Nvm_CalProgFlag_Cnt_u8;
VAR(uint8, NVM_APPL_DATA) Nvm_EcuId_Cnt_u8[16];
VAR(uint16, NVM_APPL_DATA) Nvm_AppNbid_Cnt_u16;
VAR(uint16, NVM_APPL_DATA) Nvm_Bcid_Cnt_u16;

/* This section is created to move this Nvm_Sbat_Cnt_u8 from noninit
to init region of App9 as there is no room in noint app09 for build 06.02.02*/
#define DFLTCONFIGDATA_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */
VAR(uint8, NVM_APPL_DATA) Nvm_Sbat_Cnt_u8[822];
#define DFLTCONFIGDATA_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */

#define DFLTCONFIGDATA_START_SEC_VAR_HIDDEN_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */
VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_SPSSeed_Cnt_str;
VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_SPSKey_Cnt_str;
VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_CPIDSeed_Cnt_str;
VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_CPIDKey_Cnt_str;
VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_NexteerSeed_Cnt_str;
VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_NexteerKey_Cnt_str;
#define DFLTCONFIGDATA_STOP_SEC_VAR_HIDDEN_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */

/* -----[ Initial Data ]--------------------------------------------------------------------------------------------- */
static CONST(uint16, CDD_PARTNUMBER) T_InitEOLNxtrWIRSelect_Cnt_u16 = 0xA5A2U; /* PRQA S 3218 */

static CONST(uint8, CDD_PARTNUMBER) T_InitCalProgFlag_Cnt_u8 = 0xAAU; /* PRQA S 3218 */

static CONST(uint8, CDD_PARTNUMBER) T_InitVIN_Cnt_u8[17] = { /* PRQA S 3218 */
    0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U
};

static CONST(uint8, CDD_PARTNUMBER) T_InitSystemName_Cnt_u8[20] = { /* PRQA S 3218 */
    0x52U, 0x41U, 0x43U, 0x4BU, 0x2DU, 0x45U, 0x50U, 0x53U, 0x00U, 0x00U,
    0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U
};

static CONST(uint8, CDD_PARTNUMBER) T_InitRepairShopCode_Cnt_u8[10] = { /* PRQA S 3218 */
    0x30U, 0x30U, 0x30U, 0x30U, 0x30U, 0x30U, 0x30U, 0x30U, 0x30U, 0x30U
};

static CONST(uint8, CDD_PARTNUMBER) T_InitProgDate_Cnt_u8[4] = { /* PRQA S 3218 */
    0x00U, 0x00U, 0x00U, 0x00U
};

static CONST(uint8, CDD_PARTNUMBER) T_InitSystemVerCodeDDI_Cnt_u8[2] = { /* PRQA S 3218 */
    0x12U, 0x01U
};

static CONST(uint8, CDD_PARTNUMBER) T_InitCMEC_Cnt_u8 = 0xFEU; /* PRQA S 3218 */

static CONST(uint8, CDD_PARTNUMBER) T_InitSeed_Cnt_u08[5U] = { /* PRQA S 3218 */
    0x01U, 0x02U, 0x03U, 0x04U, 0x05U
};

static CONST(uint8, CDD_PARTNUMBER) T_InitKey_Cnt_u08[5U] = { /* PRQA S 3218 */
    0xFEU, 0xFDU, 0xFCU, 0xFBU, 0xFAU
};

static CONST(float32, CDD_PARTNUMBER) T_InitTorqueCmdSF_Uls_f32 = 1.0F; /* PRQA S 3218 */

static CONST(uint8, CDD_PARTNUMBER) T_InitNMEC_Cnt_u8 = 0xFEU; /* PRQA S 3218 */

static CONST(uint8, CDD_PARTNUMBER) T_InitECUHwPn_Cnt_u8[12] = { /* PRQA S 3218, 4414 2 */
    '2', '8', '6', '4', '8', '8', '3', '1', '-', '0', '0', '7'
};

static CONST(uint8, CDD_PARTNUMBER) T_InitDataUnivNumSysID_Cnt_u8[9] = { /* PRQA S 3218, 4414 2 */
    '0', '5', '3', '3', '3', '3', '0', '5', '5'
};

static CONST(uint8, CDD_PARTNUMBER) T_InitBaseModelPartNumber_Cnt_u8[4] = { /* PRQA S 3218 */
    0x01U, 0x62U, 0x19U, 0x2AU
};

static CONST(uint8, NVM_APPL_DATA) T_InitBaseModelPartNumberAlphaCode_Cnt_u8[2] = { /* PRQA S 3218, 4414 2 */
    'A', 'B'
};

static CONST(uint8, CDD_PARTNUMBER) T_InitEndModelPN_Cnt_u8[4] = { /* PRQA S 3218 */
	0x01U, 0x62U, 0x19U, 0x28U
};

static CONST(uint8, NVM_APPL_DATA) T_InitEndModelPNAC_Cnt_u8[2] = { /* PRQA S 3218, 4414 2 */
	'A', 'G'
};

/*
 * The ECU_ID is a 16 byte, secure static memory, unsigned string which stores a controller
 * specific unique number. Check DID 0xF3 for more details.
 */
static CONST(uint8, NVM_APPL_DATA) T_InitEcuId_Cnt_u8[16] = { /* PRQA S 3218 */
	0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU,
	0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU
};

/* -----[ Flash Constant Data ]-------------------------------------------------------------------------------------- */
#pragma DATA_SECTION(T_GMLANID_Cnt_u8, "N_GMLANID");
CONST(uint8, CDD_PARTNUMBER) T_GMLANID_Cnt_u8[12] = {
	0x02U, 0x03U, 0x00U, 0x11U, 0x11U, 0x6EU,
	0x03U, 0x03U, 0x00U, 0x11U, 0x11U, 0x6EU
};

/* -----[ Processing Functions ]------------------------------------------------------------------------------------- */
FUNC(void, CDD_PARTNUMBER_CODE) DfltConfigData_Init1(void)
{
	VAR(NvM_RequestResultType, AUTOMATIC) BlockStatus = 0U;
	VAR(ManufModeType, AUTOMATIC) NxtrMEC_Uls_T_enum;
	VAR(uint16, AUTOMATIC) i;

	/* Nexteer MEC */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_CMS_NXTRMEC, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		Nvm_NMEC_Cnt_u8 = T_InitNMEC_Cnt_u8;
	}
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_CMS_NXTRMECFLAG, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		Nvm_NMECReachedZero_Cnt_lgc = FALSE;
	}

	EPS_DiagSrvcs_Init();

	/* Read MEC */
	NxtrMEC_Uls_T_enum = NxtrMEC_Uls_G_enum;

	/* The following section are block checks that require the MEC to be set in Manufacturing Mode */
	if (NxtrMEC_Uls_T_enum == ManufacturingMode)
	{
		/* Torque Command Scale Factor */
		NvM_GetErrorStatus((NvM_BlockIdType)Rte_NvmBlock_TrqCmdScl_TorqueCmdSF_Uls_f32, &BlockStatus);
		if (BlockStatus != NVM_REQ_OK)
		{
			*(float32*)NvMP_Rte_TrqCmdScl_TorqueCmdSF_Uls_f32 = T_InitTorqueCmdSF_Uls_f32;
		}

		/* VIN */
		NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_VINDATA, &BlockStatus);
		if (BlockStatus != NVM_REQ_OK)
		{
			for (i = 0U; i < TableSize_m(Nvm_VIN_Cnt_u8); i++)
			{
				Nvm_VIN_Cnt_u8[i] = T_InitVIN_Cnt_u8[i];
			}
		}

		/* Repair Shop Code */
		NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_REPAIRSHOPCODE, &BlockStatus);
		if (BlockStatus != NVM_REQ_OK)
		{
			for (i = 0U; i < TableSize_m(Nvm_RepairShopCode_Cnt_u8); i++)
			{
				Nvm_RepairShopCode_Cnt_u8[i] = T_InitRepairShopCode_Cnt_u8[i];
			}
		}

		/* Programming Date */
		NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_PROGDATE, &BlockStatus);
		if (BlockStatus != NVM_REQ_OK)
		{
			for (i = 0U; i < TableSize_m(Nvm_ProgDate_Cnt_u8); i++)
			{
				Nvm_ProgDate_Cnt_u8[i] = T_InitProgDate_Cnt_u8[i];
			}
		}

		/* Customer MEC */
		NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_CUSTMEC, &BlockStatus);
		if (BlockStatus != NVM_REQ_OK)
		{
			Nvm_CMEC_Cnt_u8 = T_InitCMEC_Cnt_u8;
		}
	}
	else
	{
		/* MEC Validity Check */
		NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_CUSTMEC, &BlockStatus);
		if (BlockStatus != NVM_REQ_OK)
		{
			Nvm_CMEC_Cnt_u8 = 0U;
			NvM_SetRamBlockStatus((NvM_BlockIdType)NVM_BLOCK_SER_CUSTMEC, TRUE);
		}
	}

	/* The following sections are for blocks that do not require MEC checks */

	/* Nexteer WIR Select */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_CMS_NXTRWIRSELECT, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		CDD_EOLNxtrWIRSelect_Cnt_G_u16 = T_InitEOLNxtrWIRSelect_Cnt_u16;
	}

	/* Cal Programmed Flag */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_CALPRGFLAG, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		Nvm_CalProgFlag_Cnt_u8 = T_InitCalProgFlag_Cnt_u8;
	}

	/* DUNS Number */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_DATAUNIVNUMSYSID, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(Nvm_DataUnivNumSysID_Cnt_u8); i++)
		{
			Nvm_DataUnivNumSysID_Cnt_u8[i] = T_InitDataUnivNumSysID_Cnt_u8[i];
		}
	}

	/* System Name */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_SYSTEMNAME, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(Nvm_SystemName_Cnt_u8); i++)
		{
			Nvm_SystemName_Cnt_u8[i] = T_InitSystemName_Cnt_u8[i];
		}
	}

	/* System and Version Code DDI */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_SYSVERSCODEDDI, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(Nvm_SystemVerCodeDDI_Cnt_u8); i++)
		{
			Nvm_SystemVerCodeDDI_Cnt_u8[i] = T_InitSystemVerCodeDDI_Cnt_u8[i];
		}
	}

	/* ECU Hardware Part Number */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_CMS_ECUHWPN, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(Nvm_EcuHwPn_Cnt_u8); i++)
		{
			Nvm_EcuHwPn_Cnt_u8[i] = T_InitECUHwPn_Cnt_u8[i];
		}
	}

	/* Base Model Part Number */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_BASEMODELPN, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(Nvm_BaseModelPartNumber_Cnt_u8); i++)
		{
			Nvm_BaseModelPartNumber_Cnt_u8[i] = T_InitBaseModelPartNumber_Cnt_u8[i];
		}
	}


	/* Base Model Part Number Alpha Code*/
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_BASEMODELPNAC, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(Nvm_BaseModelPartNumberAlphaCode_Cnt_u8); i++)
		{
			Nvm_BaseModelPartNumberAlphaCode_Cnt_u8[i] = T_InitBaseModelPartNumberAlphaCode_Cnt_u8[i];
		}
	}

	/* End Model Part Number */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_ENDMODELPN, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(Nvm_EndModelPN_Cnt_u8); i++)
		{
			Nvm_EndModelPN_Cnt_u8[i] = T_InitEndModelPN_Cnt_u8[i];
		}
	}

	/* End Model Part Number Alpha Code*/
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_ENDMODELPNAC, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(Nvm_EndModelPNAC_Cnt_u8); i++)
		{
			Nvm_EndModelPNAC_Cnt_u8[i] = T_InitEndModelPNAC_Cnt_u8[i];
		}
	}

	/* Nexteer Storage Array */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_DIAGMGR_NTCSTRG, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(NTCStrgArray_Cnt_str); i++)
		{
			NTCStrgArray_Cnt_str[i].NTC = 0U;
			NTCStrgArray_Cnt_str[i].Status = 0U;
			NTCStrgArray_Cnt_str[i].AgingCounter = 0xFFU;
		}
	}

	/* Security: SPS Seed */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_SEED_SPS, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(T_InitSeed_Cnt_u08); i++)
		{
			Nvm_SPSSeed_Cnt_str.Data.Seed[i] = T_InitSeed_Cnt_u08[i];
		}
		Nvm_SPSSeed_Cnt_str.ProgramFlag = D_SEEDKEYNOTPROGRAMMED_CNT_U08;
	}

	/* Security: SPS Key */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_KEY_SPS, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(T_InitKey_Cnt_u08); i++)
		{
			Nvm_SPSKey_Cnt_str.Data.Key[i] = T_InitKey_Cnt_u08[i];
		}
		Nvm_SPSKey_Cnt_str.ProgramFlag = D_SEEDKEYNOTPROGRAMMED_CNT_U08;
	}

	/* Security: CPID Seed */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_SEED_CPID, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(T_InitSeed_Cnt_u08); i++)
		{
			Nvm_CPIDSeed_Cnt_str.Data.Seed[i] = T_InitSeed_Cnt_u08[i];
		}
		Nvm_CPIDSeed_Cnt_str.ProgramFlag = D_SEEDKEYNOTPROGRAMMED_CNT_U08;
	}

	/* Security: CPID Key */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_KEY_CPID, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(T_InitKey_Cnt_u08); i++)
		{
			Nvm_CPIDKey_Cnt_str.Data.Key[i] = T_InitKey_Cnt_u08[i];
		}
		Nvm_CPIDKey_Cnt_str.ProgramFlag = D_SEEDKEYNOTPROGRAMMED_CNT_U08;
	}

	/* Security: Nexteer Seed */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_SEED_NEXTEER, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(T_InitSeed_Cnt_u08); i++)
		{
			Nvm_NexteerSeed_Cnt_str.Data.Seed[i] = T_InitSeed_Cnt_u08[i];
		}
		Nvm_NexteerSeed_Cnt_str.ProgramFlag = D_SEEDKEYNOTPROGRAMMED_CNT_U08;
	}

	/* Security: Nexteer Key */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_KEY_NEXTEER, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(T_InitKey_Cnt_u08); i++)
		{
			Nvm_NexteerKey_Cnt_str.Data.Key[i] = T_InitKey_Cnt_u08[i];
		}
		Nvm_NexteerKey_Cnt_str.ProgramFlag = D_SEEDKEYNOTPROGRAMMED_CNT_U08;
	}

	/* ECU ID */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_ECU_ID, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < TableSize_m(T_InitEcuId_Cnt_u8); i++)
		{
			Nvm_EcuId_Cnt_u8[i] = T_InitEcuId_Cnt_u8[i];
		}
	}

	/* SBAT */
	NvM_GetErrorStatus((NvM_BlockIdType)NVM_BLOCK_SER_SBAT, &BlockStatus);
	if (BlockStatus != NVM_REQ_OK)
	{
		for (i = 0U; i < D_DFTCFGSBAT_CNT_U16; i++)
		{
			Nvm_Sbat_Cnt_u8[i] = 0xFFU;
		}
	}
}
