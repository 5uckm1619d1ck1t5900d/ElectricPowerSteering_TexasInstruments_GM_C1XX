#ifndef NVMCFG_H
#define NVMCFG_H
typedef uint16 NvM_BlockIdType;
#define NVM_BLOCK_SER_CUSTMEC (19U)
FUNC(void, RTE_NVM_APPL_CODE) NvM_SetRamBlockStatus(NvM_BlockIdType parg0, Boolean RamBlockStatus);
#endif  /* NVM_CFG_H */
