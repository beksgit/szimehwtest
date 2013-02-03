/*
 * Copyright (c) 2012, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/** ============================================================================
 *  @file       EKS_LM4F232.h
 *
 *  @brief      EKS_LM4F232 Board Specific APIs
 *
 *  The EKS_LM4F232 header file should be included in an application as follows:
 *  @code
 *  #include <EKS_LM4F232.h>
 *  @endcode
 *  
 *  ============================================================================
 */
 
#ifndef __EKS_LM4F232_H
#define __EKS_LM4F232_H

#ifdef __cplusplus
extern "C" {
#endif

/* LEDs on EKS_LM4F232 are active high. */
#define EKS_LM4F232_LED_OFF (0)
#define EKS_LM4F232_LED_ON  (~0)

#define EKS_LM4F232_PIN_OFF (0)
#define EKS_LM4F232_PIN_ON  (~0)

/*!
 *  @def    ledName
 *  @brief  Enum of LED names on the evmF28M25x dev board
 */
/* itt kell kezdeni!!!
 * Felsoroljuk a GPIO biteket, ez automatikusan számolja az EKS_LM4F232_GPIOCOUNT-ban , hogy hány ilyen bitünk van*/
typedef enum EKS_LM4F232_GPIOName {
    EKS_LM4F232_SW1_Up = 0,
    EKS_LM4F232_SW2_Down,
    EKS_LM4F232_SW3_Left,
    EKS_LM4F232_SW4_Right,
    EKS_LM4F232_SW5_Select,
    EKS_LM4F232_USER_LED,
    Motherboard_DIO_0,
    Motherboard_DIO_1,
    Motherboard_DIO_2,
    Motherboard_DIO_3,
    Motherboard_DIO_4,
    Motherboard_DIO_5,
    Motherboard_DIO_6,
    Motherboard_DIO_7,


    EKS_LM4F232_GPIOCOUNT
} EKS_LM4F232_GPIOName;

/*!
 *  @def    EKS_LM4F232_UARTName
 *  @brief  Enum of UARTs on the EKS_LM4F232 dev board
 */
typedef enum EKS_LM4F232_UARTName {
    EKS_LM4F232_UART0 = 0,
    EKS_LM4F232_UART1,
    EKS_LM4F232_UARTCOUNT
} EKS_LM4F232_UARTName;

/*!
 *  @def    EKS_LM4F232_SDSPIName
 *  @brief  Enum of SDSPI names on the EKS_LM4F232 dev board
 */
typedef enum EKS_LM4F232_SDSPIName {
    EKS_LM4F232_SDSPI0 = 0,
    
    EKS_LM4F232_SDSPICOUNT
} EKS_LM4F232_SDSPIName;

/*!
 *  @def    EKS_LM4F232_USBMSCHFatFsName
 *  @brief  Enum of USBMSCHFatFs names on the EKS_LM4F232 dev board
 */
typedef enum EKS_LM4F232_USBMSCHFatFsName {
    EKS_LM4F232_USBMSCHFatFs0 = 0,
    
    EKS_LM4F232_USBMSCHFatFsCOUNT
} EKS_LM4F232_USBMSCHFatFsName;

/*!
 *  @def    EKS_LM4F232_I2CName
 *  @brief  Enum of I2C names on the EKS_LM4F232 dev board
 */
typedef enum EKS_LM4F232_I2CName {
    EKS_LM4F232_I2C0 = 0,
    EKS_LM4F232_I2C2,
    
    EKS_LM4F232_I2CCOUNT
} EKS_LM4F232_I2CName;

/*!
 *  @def    EKS_LM4F232_USBMode
 *  @brief  Enum of USB setup function on the EKS_LM4F232 dev board
 */
typedef enum EKS_LM4F232_USBMode {
    EKS_LM4F232_USBDEVICE,
    EKS_LM4F232_USBHOST
} EKS_LM4F232_USBMode;

/*!
 *  @brief  Initialize the general board specific settings 
 *
 *  This function initializes the general board specific settings. This include
 *     - Enable clock sources for peripherals
 */
extern Void EKS_LM4F232_initGeneral(Void);

/*!
 *  @brief  Initialize board specific GPIO settings
 *
 *  This function initializes the board specific GPIO settings and 
 *  then calls the GPIO_init API to initialize the GPIO module.
 *
 *  The GPIOs controlled by the GPIO module are determined by the GPIO_config
 *  variable.
 */
extern Void EKS_LM4F232_initGPIO(Void);

/*!
 *  @brief  Initialize board specific I2C settings
 *
 *  This function initializes the board specific I2C settings and then calls
 *  the I2C_init API to initialize the I2C module.
 *
 *  The I2C peripherals controlled by the I2C module are determined by the
 *  I2C_config variable.
 */
extern Void EKS_LM4F232_initI2C(Void);

/*!
 *  @brief  Initialize board specific SDSPI settings
 *
 *  This function initializes the board specific SDSPI settings and then calls
 *  the SDSPI_init API to initialize the SDSPI module.
 *
 *  The SDSPI peripherals controlled by the SDSPI module are determined by the
 *  SDSPI_config variable.
 */
extern Void EKS_LM4F232_initSDSPI(Void);

/*!
 *  @brief  Initialize board specific UART settings
 *
 *  This function initializes the board specific UART settings and then calls
 *  the UART_init API to initialize the UART module.
 *
 *  The UART peripherals controlled by the UART module are determined by the
 *  UART_config variable.
 */
extern Void EKS_LM4F232_initUART(Void);

/*!
 *  @brief  Initialize board specific USB settings
 *
 *  This function initializes the board specific USB settings and pins based on
 *  the USB mode of operation.
 *
 *  @param      usbMode    USB mode of operation
 */
extern Void EKS_LM4F232_initUSB(EKS_LM4F232_USBMode usbMode);

/*!
 *  @brief  Initialize board specific USBMSCHFatFs settings
 *
 *  This function initializes the board specific USBMSCHFatFs settings and then
 *  calls the USBMSCHFatFs_init API to initialize the USBMSCHFatFs module.
 *
 *  The USBMSCHFatFs peripherals controlled by the USBMSCHFatFs module are
 *  determined by the USBMSCHFatFs_config variable.
 */
extern Void EKS_LM4F232_initUSBMSCHFatFs(Void);

#ifdef __cplusplus
}
#endif

#endif /* __EKS_LM4F232_BOARD_H */
