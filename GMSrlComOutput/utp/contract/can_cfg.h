#if !defined(__CAN_CFG_H__)
#define __CAN_CFG_H__


#define kCanNumberOfChannels                 2
#define kCanNumberOfHwChannels               2
#define kCanNumberOfPhysChannels             2
#define C_DISABLE_MEMCOPY_SUPPORT
#define C_DISABLE_OSEK_OS
#define C_DISABLE_VARIABLE_DLC
#define C_DISABLE_DLC_FAILED_FCT
#define C_DISABLE_VARIABLE_RX_DATALEN
#define C_DISABLE_MULTI_ECU_CONFIG
#define C_DISABLE_MULTI_ECU_PHYS
#define C_DISABLE_EXTENDED_ID
#define C_DISABLE_MIXED_ID
#define C_DISABLE_RECEIVE_FCT

#define C_DISABLE_ECU_SWITCH_PASS
#define C_ENABLE_TRANSMIT_QUEUE
#define C_DISABLE_OVERRUN
#define C_DISABLE_INTCTRL_BY_APPL
#define C_DISABLE_COMMON_CAN
#define C_DISABLE_USER_CHECK
#define C_DISABLE_HARDWARE_CHECK
#define C_DISABLE_GEN_CHECK
#define C_DISABLE_INTERNAL_CHECK
#define C_DISABLE_DYN_RX_OBJECTS
#define C_DISABLE_DYN_TX_OBJECTS
#define C_DISABLE_DYN_TX_ID
#define C_DISABLE_DYN_TX_DLC
#define C_DISABLE_DYN_TX_DATAPTR
#define C_DISABLE_DYN_TX_PRETRANS_FCT
#define C_DISABLE_DYN_TX_CONF_FCT
#define C_DISABLE_EXTENDED_STATUS
#define C_DISABLE_TX_OBSERVE
#define C_DISABLE_HW_LOOP_TIMER
#define C_DISABLE_NOT_MATCHED_FCT
#define C_SECURITY_LEVEL                     30

#define C_ENABLE_MULTICHANNEL_API
#define C_ENABLE_PART_OFFLINE
#define C_ENABLE_MSG_TRANSMIT
#define C_DISABLE_MSG_TRANSMIT_CONF_FCT

#define C_DISABLE_RANGE_0
#define C_DISABLE_RANGE_1
#define C_DISABLE_RANGE_2
#define C_DISABLE_RANGE_3
#define kCanNumberOfTxObjects                12
#define kCanNumberOfTxStatObjects            12
#define kCanNumberOfTxDynObjects             0
#define kCanNumberOfRxObjects                27
#define kCanNumberOfRxStatFullCANObjects     27
#define kCanNumberOfRxStatBasicCANObjects    0
#define kCanNumberOfRxDynFullCANObjects      0
#define kCanNumberOfRxDynBasicCANObjects     0
#define kCanNumberOfRxDynObjects             0
#define kCanNumberOfRxStatObjects            27
#define kCanNumberOfConfFlags                7
#define kCanNumberOfIndFlags                 1
#define kCanNumberOfConfirmationFlags        1
#define kCanNumberOfIndicationFlags          1
#define kCanNumberOfInitObjects              2
#define kCanExtNumberOfInitObjects           0
#define C_SEARCH_LINEAR

#define C_ENABLE_RX_MSG_INDIRECTION

#define C_ENABLE_CONFIRMATION_FLAG
#define C_ENABLE_INDICATION_FLAG
#define C_DISABLE_PRETRANSMIT_FCT
#define C_ENABLE_CONFIRMATION_FCT
#define C_ENABLE_INDICATION_FCT
#define C_ENABLE_PRECOPY_FCT
#define C_ENABLE_COPY_TX_DATA
#define C_ENABLE_COPY_RX_DATA
#define C_ENABLE_DLC_CHECK
#define C_DISABLE_DLC_CHECK_MIN_DATALEN

#define C_ENABLE_GENERIC_PRECOPY
#define APPL_CAN_GENERIC_PRECOPY             IlCanGenericPrecopy

#define C_SEND_GRP_NONE                      0x00u
#define C_SEND_GRP_ALL                       0xFFu
#define C_SEND_GRP_LKA                       0x01u
#define C_SEND_GRP_APA                       0x02u
#define C_SEND_GRP_USER2                     0x04u
#define C_SEND_GRP_USER3                     0x08u
#define C_SEND_GRP_USER4                     0x10u
#define C_SEND_GRP_USER5                     0x20u
#define C_SEND_GRP_USER6                     0x40u
#define C_SEND_GRP_USER7                     0x80u
#define C_ENABLE_CAN_CANCEL_NOTIFICATION

#define CANCHANNEL_0
#define CANCHANNEL_1
#define kCanIndex0                           0
#define kCanIndex1                           1
#define kCanPhysToLogChannelIndex_0          0
#define kCanPhysToLogChannelIndex_1          1
#define C_ENABLE_RX_FULLCAN_OBJECTS
#define C_DISABLE_RX_BASICCAN_OBJECTS
#define kCanNumberOfRxFullCANObjects         27

#define kCanNumberOfRxBasicCANObjects        0
#define kCanNumberOfUsedRxBasicCANObjects    4

#define kCanInitObj1                         0
#define C_DISABLE_TX_MASK_EXT_ID
#define C_DISABLE_RX_MASK_EXT_ID
#define C_MASK_EXT_ID                        0x03FFFF00u

#define C_ENABLE_CAN_CAN_INTERRUPT_CONTROL
#define C_DISABLE_CAN_TX_CONF_FCT

#define C_DISABLE_TX_POLLING
#define C_DISABLE_RX_BASICCAN_POLLING
#define C_ENABLE_RX_FULLCAN_POLLING
#define C_DISABLE_ERROR_POLLING
#define C_DISABLE_WAKEUP_POLLING
#define C_DISABLE_MULTIPLE_BASICCAN
#define C_DISABLE_FULLCAN_OVERRUN
#define C_DISABLE_OSEK_OS_INTCAT2
#define C_DISABLE_COPY_RX_DATA_WITH_DLC
#define kCanTxQueueBytes                     8
#define kCanTxQueuePadBits                   52
#define kCanNumberOfMaxBasicCAN              1
#define kCanNumberOfHwObjPerBasicCan         2
#define C_DISABLE_CAN_RAM_CHECK
#define C_DISABLE_SLEEP_WAKEUP
#define C_DISABLE_CANCEL_IN_HW
#define C_DISABLE_ONLINE_OFFLINE_CALLBACK_FCT

#define C_DISABLE_CAN_MSG_TRANSMIT_CANCEL_NOTIFICATION

#endif /* __CAN_CFG_H__ */
