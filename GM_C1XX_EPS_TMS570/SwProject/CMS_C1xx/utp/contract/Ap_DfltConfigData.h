/* The following is only part of the header that was required at the 
 * time this component was made. 
 */

#define D_SEEDKEYPROGRAMMED_CNT_U08		0xAAU

typedef struct {
	union {
		VAR(uint8, AUTOMATIC) Seed[5U];
		VAR(uint8, AUTOMATIC) Key[5U];
	} Data;
	VAR(uint8, AUTOMATIC) ProgramFlag;
} DfltConfigData_SeedKey_Str;

extern VAR(uint8, CDD_PARTNUMBER) Nvm_CalProgFlag_Cnt_u8;
extern VAR(uint8, CDD_PARTNUMBER) Nvm_VIN_Cnt_u8[17];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_SystemName_Cnt_u8[20];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_RepairShopCode_Cnt_u8[10];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_ProgDate_Cnt_u8[4];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_SystemVerCodeDDI_Cnt_u8[2];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_CMEC_Cnt_u8;
extern VAR(uint8, CDD_PARTNUMBER) Nvm_GMManfData_Cnt_u8[5];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_ManfTraceability_Cnt_u8[16];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_EndModelPN_Cnt_u8[4];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_EndModelPNAC_Cnt_u8[2];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_GearCFactor_Cnt_u8[4];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_GearSrlNum_Cnt_u8[9];
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_SPSSeed_Cnt_str;
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_SPSKey_Cnt_str;
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_CPIDSeed_Cnt_str;
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_CPIDKey_Cnt_str;
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_NexteerSeed_Cnt_str;
extern VAR(DfltConfigData_SeedKey_Str, CDD_PARTNUMBER) Nvm_NexteerKey_Cnt_str;
extern VAR(uint8, CDD_PARTNUMBER) Nvm_ECUConfigData_Cnt_u8;

extern VAR(uint8, CDD_PARTNUMBER) Nvm_NMEC_Cnt_u8;
extern VAR(uint8, CDD_PARTNUMBER) Nvm_EcuSrlNum_Cnt_u8[4];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_EpsSrlNum_Cnt_u8[4];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_EcuHwPn_Cnt_u8[12];
extern VAR(uint8, CDD_PARTNUMBER) Nvm_NxtrManfScrpd_Cnt_u8[64];
extern VAR(uint16, CDD_PARTNUMBER) Nvm_IgnCntr_Cnt_u16;

VAR(UInt16, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_SrlComInput_SrlComWIRFltStatus_Cnt_u16;

extern CONST(uint8, CDD_PARTNUMBER) k_SWRelNum_Cnt_u8[50];
