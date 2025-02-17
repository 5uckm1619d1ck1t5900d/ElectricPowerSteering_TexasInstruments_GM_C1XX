/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2011 by Vector Informatik GmbH.                                                  All rights reserved.
 * 
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  T_Port_Cfg.h
 *      Project:  DrvPort_Tms570Tigio01Asr
 *       Module:  DrvPort
 *    Generator:  DaVinci CFG
 *
 *  Description:  This module implements a driver in ANSI C programming language to centralize the
 *                configuration of ports and pins which are used by more than one driver module.
 *                With this driver you can:
 *                - Configure all port pins
 *                - Initialize the configuration
 *                - Refresh the configuration (EMC purposes)
 *                - Switch the port pin configuration during runtime
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
  
    Project:    EPS.ecuc
    Generated:  2014-04-09 04:13 pm
    Licensee:   Nexteer Automotive Corporation (2502600608)
 
    This file is generated by DaVinci Configurator Pro - DAVINCICFG.EXE V4.0.67.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
    
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Martin Froschhammer           Mfr           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2008-09-08  Mfr     -             Initial release
 *  01.01.00  2010-04-29  Mfr     ESCAN00035117 PBCFG_ROOT memory section added
 *  01.01.01  2010-11-23  Mfr     ESCAN00045238 Symbolic name creation with prefix added
 *  01.01.02  2011-02-15  Mfr     -             Support Tms570ls30x added
 *  01.02.00  2011-09-02  Mfr     ESCAN00053719 Selection and generation of port IIC was corrected 
 *            2011-11-04  Mfr     -             Implementation of safety SFR access
 *********************************************************************************************************************/

#if (!defined PORT_CFG_H)
#define PORT_CFG_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*  Cfg Version identification  */
#define PORT_CFG_MAJOR_VERSION    (1)
#define PORT_CFG_MINOR_VERSION    (2)
#define PORT_CFG_PATCH_VERSION    (0)

/* List of symbolic names for Dio pin channels */
/*<PORT_PIN_CHANNEL_LIST>*/
#define GA_UPPER (0u)
#define GA_LOWER (1u)
#define GB_UPPER (2u)
#define WdReset (3u)
#define WdMonitor (4u)
#define FetDrvReset (5u)
#define POS_SDA_DSP (6u)
#define POS_SCL_DSP (7u)
#define GB_LOWER (8u)
#define GC_UPPER (9u)
#define FetDrvCntl (10u)
#define GC_LOWER (11u)
#define PwrSwitchEn (12u)
#define T1_SENT (13u)
#define T1_SENT_Sync (14u)
#define SPI_50us_Trigger (15u)
#define SysFault2 (16u)
#define ePWM_Sync (17u)
#define SPI_1m_Trigger (18u)
#define TODReset (19u)
#define OvrVoltFdbk (20u)
#define FetFlt1Data (21u)
#define FetFlt2_Clk (22u)
#define T2_SENT (23u)
#define T2_SENT_Sync (24u)
#define PhaseC (25u)
#define PhaseA (26u)
#define PhaseB (27u)
#define EpsEn (28u)
/*</PORT_PIN_CHANNEL_LIST>*/


     /*  Pre-compile switches for services  */
    #define PORT_SET_PIN_DIRECTION_API                        /*<PORT_SET_PIN_DIRECTION_API/>*/ (STD_ON)
    #define PORT_REFRESH_PORT_DIRECTION_API              /*<PORT_REFRESH_PORT_DIRECTION_API/>*/ (STD_OFF)
    #define PORT_VERSION_INFO_API                                  /*<PORT_VERSION_INFO_API/>*/ (STD_OFF)
    #define PORT_SET_PIN_MODE_API                                  /*<PORT_SET_PIN_MODE_API/>*/ (STD_OFF)

    
    /* Configuration of Safety Hw Access */
    
    #define PORT_SPECIAL_REGISTER_ACCESS_ENABLED    /*<PORT_SPECIAL_REGISTER_ACCESS_ENABLED/>*/ (STD_ON)
 
    #if (STD_ON == PORT_SPECIAL_REGISTER_ACCESS_ENABLED)
        #define PORT_SPECIAL_REGISTER_ACCESS_ONLY_FOR_WRITE /*<PORT_SPECIAL_REGISTER_ACCESS_ONLY_FOR_WRITE/>*/ (STD_ON)
        #define PORT_SPECIAL_REGISTER_ACCESS_ONLY_FOR_PRIVILEGED_MODE_REGISTERS /*<PORT_SPECIAL_REGISTER_ACCESS_ONLY_FOR_PRIVILEGED_MODE_REGISTERS/>*/ (STD_ON)
        #define PORT_SPECIAL_REGISTER_ACCESS_NOT_IN_INIT /*<PORT_SPECIAL_REGISTER_ACCESS_NOT_IN_INIT/>*/ (STD_OFF)
    #else
        #define PORT_SPECIAL_REGISTER_ACCESS_ONLY_FOR_WRITE                                     (STD_OFF)
        #define PORT_SPECIAL_REGISTER_ACCESS_ONLY_FOR_PRIVILEGED_MODE_REGISTERS                 (STD_OFF)
        #define PORT_SPECIAL_REGISTER_ACCESS_NOT_IN_INIT                                        (STD_OFF)
    #endif


    /*  Configurations for Development mode  */
    #define PORT_DEV_ERROR_DETECT                                  /*<PORT_DEV_ERROR_DETECT/>*/ (STD_ON)

    #if (STD_ON == PORT_DEV_ERROR_DETECT)                           /* Check parameters               */
      
        /*  Development Mode  */

        #define PORT_CFG_CHK_UNINIT                                  /*<PORT_CFG_CHK_UNINIT/>*/ (STD_ON)
        #define PORT_CFG_DO_PARAM_CHK                              /*<PORT_CFG_DO_PARAM_CHK/>*/ (STD_ON)

        #if (STD_ON == PORT_CFG_DO_PARAM_CHK)
         
            #define PORT_CFG_CHK_PARAM_CONFIG                  /*<PORT_CFG_CHK_PARAM_CONFIG/>*/ (STD_ON)
            #define PORT_CFG_CHK_PARAM_PIN                        /*<PORT_CFG_CHK_PARAM_PIN/>*/ (STD_ON)
            #define PORT_CFG_CHK_PARAM_VINFO                    /*<PORT_CFG_CHK_PARAM_VINFO/>*/ (STD_ON)

        #else

            #define PORT_CFG_CHK_PARAM_CONFIG                                                   (STD_OFF)
            #define PORT_CFG_CHK_PARAM_PIN                                                      (STD_OFF)
            #define PORT_CFG_CHK_PARAM_VINFO                                                    (STD_OFF)

        #endif/*(STD_ON == PORT_CFG_DO_PARAM_CHK)*/

        #define Port_Errorhook(Port_FunctionId, Port_ErrorCode) \
        /*<PORT_ERRORHOOK>*/(Det_ReportError((PORT_MODULE_ID), 0, (Port_FunctionId), (Port_ErrorCode))) /* PRQA S 3453 *//* MD_MSR_19.7 *//*</PORT_ERRORHOOK>*/

    #else 

        /*  Production Mode  */

        #define PORT_CFG_CHK_UNINIT                                                             (STD_OFF)
        #define PORT_CFG_CHK_PARAM_CONFIG                                                       (STD_OFF)
        #define PORT_CFG_CHK_PARAM_PIN                                                          (STD_OFF)
        #define PORT_CFG_CHK_PARAM_VINFO                                                        (STD_OFF)

        #define Port_Errorhook(Port_FunctionId, Port_ErrorCode)

    #endif   /*(STD_ON == PORT_DEV_ERROR_DETECT)*/


    /*  Mapping of port registers as data struct  */
    typedef 
        union
        { /* PRQA S 750 *//* MD_PORT_18.4 */
            /* Regular Port register structure */
            struct
            {
                uint32 Function_u32;
                uint32 Direction_u32;
                uint32 DataIn_u32;
                uint32 DataOut_u32;
                uint32 DataSet_u32;
                uint32 DataClr_u32;
                uint32 OpenDrain_u32;
                uint32 PullDisable_u32;
                uint32 PullSelect_u32;
                uint32 Dummy1[15];            
                uint32 SlewRate1_u32;
                uint32 Dummy2[3];
                uint32 SlewRate2_u32;
            }Reg; 
            /*Alternative Port register structure for ADC*/
            struct
            {
                uint32 Function_u32;
                uint32 Direction_u32;
                uint32 DataOut_u32;
                uint32 DataIn_u32;
                uint32 DataSet_u32;
                uint32 DataClr_u32;
                uint32 OpenDrain_u32;
                uint32 PullDisable_u32;
                uint32 PullSelect_u32;
            }AltReg; 

            /* Special structure for Can pheripheral*/
            struct
            {
                uint32 IoCtrl_0_u32;
                uint32 IoCtrl_1_u32;
            }Can;

            /* Struct for Mux register */
            struct
            {
                uint32 GnrlRg_u32;
            }Mux;
       } Port_RegisterType;

    typedef volatile P2VAR(Port_RegisterType, AUTOMATIC, MSR_REGSPACE) Port_RegisterPtrType;

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* Pointer to a function */
typedef P2FUNC(void, PORT_PBCODE, Port_InternFcnType)( void );

#if (PORT_SET_PIN_MODE_API == STD_ON)
/*Pseudo struct, necessary for the unsupported API */
/*function Port_SetPinMode()                       */
typedef struct
{
    uint8 PinMode;
}Port_PinModeType;
#endif /*(PORT_SET_PIN_MODE_API == STD_ON)*/


#if (STD_ON == PORT_REFRESH_PORT_DIRECTION_API)
/* Type to configure all the direction register with the configured content */
typedef struct
{
    /* Address of register (see list of #defines)                           */
    uint32 RegisterInfo_pt;

    /* Value which shall be written to the register                         */
    uint32 InitialDirection_u32;

    /* Information which pins are refreshable
     * ("1" = refreshable, "0" non re-freshable)                            */
    uint32 RefreshMask_u32;
}Port_RefreshConfigType;
#endif


#if ( STD_ON == PORT_SET_PIN_DIRECTION_API )
/* Configuration type for pin channels                                      */
typedef P2CONST(uint32, AUTOMATIC, PORT_PBCFG) Port_PinChlConfigType;
#endif

 
/* Here ist the resulting, whole configuration type. It includes all types
 * of configuration which can be made by the customer.                      */
typedef struct
{
   Port_InternFcnType Port_InitPortPins_t;
    #if ( STD_ON == PORT_REFRESH_PORT_DIRECTION_API )
       P2CONST( Port_RefreshConfigType, AUTOMATIC, PORT_PBCFG) RefreshConfig_pt;
    #endif

    #if ( STD_ON == PORT_SET_PIN_DIRECTION_API )
        Port_PinChlConfigType PinChlConfig_pt;
    #endif    

    #if ( STD_ON == PORT_REFRESH_PORT_DIRECTION_API )
        uint8 NumberOfRefreshPorts_u8;
    #endif

    #if ( STD_ON == PORT_SET_PIN_DIRECTION_API )
        uint8 NumberOfPinChannels_u8;
    #endif


}Port_ConfigType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define PORT_START_SEC_PBCFG_ROOT
#include "MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

/*<PORT_CFG_EXTERN>*/
extern CONST( Port_ConfigType, PORT_PBCFG) Port_Runtime;
/*</PORT_CFG_EXTERN>*/

#define PORT_STOP_SEC_PBCFG_ROOT
#include "MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* PORT_CFG_H */

#if ( (defined PORT_SOURCE) || (defined PORT_PBCFG_SOURCE) ) /* PRQA S 883 *//* MD_PORT_19.15 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

 /* Include-File, which contains Errorhook-Function                            */
 /*<PORT_DET_INCLUDE_FILE>*/#include "Det.h"/*</PORT_DET_INCLUDE_FILE>*/ 

 /* Include list - here you must insert the Irq.h or Os.h file, dependent,
  * which function you will use to protect critical sections */
 /*<PORT_CFG_INCLUDE_IRQ>*/
#include "SchM_Port.h"
/*</PORT_CFG_INCLUDE_IRQ>*/
 
 /*<PORT_CFG_INCLUDE_OS>*/
#include "Os.h"
/*</PORT_CFG_INCLUDE_OS>*/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
    #define PORT_MEM_AREA_DUMMY     ((uint16)0u)

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

    /* Choose whether MICROSAR CAL Module Irq is available. Otherwise,
     * the Osek Os calls (SuspendAllInterrupts, ResumeAllInterrupts) have
     * to be mapped.                                                              */
    #define Port_GlobalSuspend() /*<PORT_GLOBAL_SUSPEND/>*/ SchM_Enter_Port(PORT_EXCLUSIVE_AREA_0)
    #define Port_GlobalRestore() /*<PORT_GLOBAL_RESTORE/>*/ SchM_Exit_Port(PORT_EXCLUSIVE_AREA_0)


    /* Wrapper macros for register access. Used to redirect read/write operations on HW registers
     * to special Os services. 
     */

    #ifndef PORT_WRITE_PROTECTED_REGISTER_32BIT
    # define PORT_WRITE_PROTECTED_REGISTER_32BIT(address, value, area)  (osWritePeripheral32((area), (address), (value))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #endif

    #ifndef PORT_READ_PROTECTED_REGISTER_32BIT
    # define PORT_READ_PROTECTED_REGISTER_32BIT(address, area)  (osReadPeripheral32((area), (address))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #endif

    #ifndef PORT_MODIFY_PROTECTED_REGISTER_32BIT
    # define PORT_MODIFY_PROTECTED_REGISTER_32BIT(address, clearmask, setmask, area) (osModifyPeripheral32((area), (address), (clearmask), (setmask))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #endif

    #if (PORT_SPECIAL_REGISTER_ACCESS_ENABLED == STD_ON)
    #  if(PORT_SPECIAL_REGISTER_ACCESS_NOT_IN_INIT == STD_ON)
    #    if (PORT_SPECIAL_REGISTER_ACCESS_ONLY_FOR_PRIVILEGED_MODE_REGISTERS == STD_ON)
    #      define PORT_WRITE_REGISTER_32BIT(address, value, area)                        (*((volatile uint32*)(address)) = (uint32)(value)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #    else
    #      define PORT_WRITE_REGISTER_32BIT(address, value, area)                        (PORT_WRITE_PROTECTED_REGISTER_32BIT(address, value, area)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #    endif
    #    define PORT_WRITE_REGISTER_32BIT_INIT(address, value, area)                     (*((volatile uint32*)(address)) = (uint32)(value)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #    define PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT(address, value, area)          (*((volatile uint32*)(address)) = (uint32)(value)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #  else
    #    if (PORT_SPECIAL_REGISTER_ACCESS_ONLY_FOR_PRIVILEGED_MODE_REGISTERS == STD_ON)
    #      define PORT_WRITE_REGISTER_32BIT_INIT(address, value, area)                   (*((volatile uint32*)(address)) = (uint32)(value)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #      define PORT_WRITE_REGISTER_32BIT(address, value, area)                        (*((volatile uint32*)(address)) = (uint32)(value)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #    else
    #      define PORT_WRITE_REGISTER_32BIT_INIT(address, value, area)                   (PORT_WRITE_PROTECTED_REGISTER_32BIT(address, value, area)) /* PRQA S 3453 *//* MD_MSR_19.7 */ 
    #      define PORT_WRITE_REGISTER_32BIT(address, value, area)                        (PORT_WRITE_PROTECTED_REGISTER_32BIT(address, value, area)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #    endif
    #    define PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT(address, value, area)          (PORT_WRITE_PROTECTED_REGISTER_32BIT(address, value, area)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #  endif
    #  define PORT_WRITE_REGISTER_32BIT_SUPERVISOR(address, value, area)                 (PORT_WRITE_PROTECTED_REGISTER_32BIT(address, value, area)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #else
    #  define PORT_WRITE_REGISTER_32BIT_INIT(address, value, area)                       (*((volatile uint32*)(address)) = (uint32)(value)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #  define PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT(address, value, area)            (*((volatile uint32*)(address)) = (uint32)(value)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #  define PORT_WRITE_REGISTER_32BIT(address, value, area)                            (*((volatile uint32*)(address)) = (uint32)(value)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #  define PORT_WRITE_REGISTER_32BIT_SUPERVISOR(address, value, area)                 (*((volatile uint32*)(address)) = (uint32)(value)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #endif

    #if (PORT_SPECIAL_REGISTER_ACCESS_ENABLED == STD_ON)
    #  if(PORT_SPECIAL_REGISTER_ACCESS_NOT_IN_INIT == STD_ON)
    #    if (PORT_SPECIAL_REGISTER_ACCESS_ONLY_FOR_PRIVILEGED_MODE_REGISTERS == STD_ON)
    #      define PORT_MODIFY_REGISTER_32BIT(address, clearmask, setmask, area)               ((*(volatile uint32*)(address)) = (((*(volatile uint32*)(address)) & ((clearmask))) | (setmask))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #    else
    #      define PORT_MODIFY_REGISTER_32BIT(address, clearmask, setmask, area)               (PORT_MODIFY_PROTECTED_REGISTER_32BIT(address, clearmask, setmask, area)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #    endif
    #    define PORT_MODIFY_REGISTER_32BIT_INIT(address, clearmask, setmask, area)            ((*(volatile uint32*)(address)) = (((*(volatile uint32*)(address)) & (clearmask)) | (setmask))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #    define PORT_MODIFY_REGISTER_32BIT_SUPERVISOR_INIT(address, clearmask, setmask, area) ((*(volatile uint32*)(address)) = (((*(volatile uint32*)(address)) & (clearmask)) | (setmask))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #  else
    #    if (PORT_SPECIAL_REGISTER_ACCESS_ONLY_FOR_PRIVILEGED_MODE_REGISTERS == STD_ON)
    #      define PORT_MODIFY_REGISTER_32BIT_INIT(address, clearmask, setmask, area)          ((*(volatile uint32*)(address)) = (((*(volatile uint32*)(address)) & (clearmask)) | (setmask))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #      define PORT_MODIFY_REGISTER_32BIT(address, clearmask, setmask, area)               ((*(volatile uint32*)(address)) = (((*(volatile uint32*)(address)) & (clearmask)) | (setmask))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #    else
    #      define PORT_MODIFY_REGISTER_32BIT_INIT(address, clearmask, setmask, area)          (PORT_MODIFY_PROTECTED_REGISTER_32BIT(address, clearmask, setmask, area)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #      define PORT_MODIFY_REGISTER_32BIT(address, clearmask, setmask, area)               (PORT_MODIFY_PROTECTED_REGISTER_32BIT(address, clearmask, setmask, area)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #    endif
    #    define PORT_MODIFY_REGISTER_32BIT_SUPERVISOR_INIT(address, clearmask, setmask, area) (PORT_MODIFY_PROTECTED_REGISTER_32BIT(address, clearmask, setmask, area)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #  endif
    #  define PORT_MODIFY_REGISTER_32BIT_SUPERVISOR(address, clearmask, setmask, area)        (PORT_MODIFY_PROTECTED_REGISTER_32BIT(address, clearmask, setmask, area)) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #else
    #  define PORT_MODIFY_REGISTER_32BIT_INIT(address, clearmask, setmask, area)              ((*(volatile uint32*)(address)) = (((*(volatile uint32*)(address)) & (clearmask)) | (setmask))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #  define PORT_MODIFY_REGISTER_32BIT_SUPERVISOR_INIT(address, clearmask, setmask, area)   ((*(volatile uint32*)(address)) = (((*(volatile uint32*)(address)) & (clearmask)) | (setmask))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #  define PORT_MODIFY_REGISTER_32BIT(address, clearmask, setmask, area)                   ((*(volatile uint32*)(address)) = (((*(volatile uint32*)(address)) & (clearmask)) | (setmask))) /* PRQA S 3453 *//* MD_MSR_19.7 */
    #  define PORT_MODIFY_REGISTER_32BIT_SUPERVISOR(address, clearmask, setmask, area)        ((*(volatile uint32*)(address)) = (((*(volatile uint32*)(address)) & (clearmask)) | (setmask))) /* PRQA S 3453 *//* MD_MSR_19.7 */ 
    #endif
	
	#define PORT_START_SEC_PBCFG
	#include "MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */
	
	/* Declaration of array that contains the Ids of the Memory Areas to protect */	
	/*<PORT_MEM_AREA_DECLARATION>*/
extern CONST( uint16, PORT_PBCFG ) Port_MemoryAreas_at[4];
/*</PORT_MEM_AREA_DECLARATION>*/
	
	#define PORT_STOP_SEC_PBCFG
	#include "MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */
       
#endif /* PORT_CFG_PRIVATE_H, protection of private part */

/* module specific MISRA deviations:

   MD_PORT_18.4:
     Reason: An union is used for an elegant access of the different io units of the specific microcontroller.
             A different implementation would cause a lot of type casts and similar looking typedefs.
     Risk: Breach of some coding standards. 
     Prevention: Nothing to prevent.

   MD_PORT_19.15:
     Reason: The multiple inclusion protection is realized in to sections in this file. On part 
             requires several preprocessor conditions to be fulfilled. This conditions are not protected 
             but because they does not produce code it is not a problem to include the file several times.
     Risk: Impact on readability. 
     Prevention: In code inspection it has to be checked that no code parts exist without a multiple inclusion
                 protection

*/

/**********************************************************************************************************************
 *  END OF FILE: T_Port_Cfg.h
 *********************************************************************************************************************/
