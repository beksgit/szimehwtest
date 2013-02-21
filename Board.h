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

#ifndef __BOARD_H
#define __BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "EKS_LM4F232.h"

#define Board_initGeneral           EKS_LM4F232_initGeneral
#define Board_initGPIO              EKS_LM4F232_initGPIO
#define Board_initI2C               EKS_LM4F232_initI2C
#define Board_initSDSPI             EKS_LM4F232_initSDSPI
#define Board_initUART              EKS_LM4F232_initUART
#define Board_initUSB               EKS_LM4F232_initUSB
#define Board_initUSBMSCHFatFs      EKS_LM4F232_initUSBMSCHFatFs
#define LED_ON               		EKS_LM4F232_LED_ON
#define LED_OFF               		EKS_LM4F232_LED_OFF
#define PIN_OFF						EKS_LM4F232_PIN_OFF
#define PIN_ON						EKS_LM4F232_PIN_ON
#define UP_Button					EKS_LM4F232_SW1_Up
#define DOWN_Button				    EKS_LM4F232_SW2_Down
#define LEFT_Button				    EKS_LM4F232_SW3_Left
#define RIGHT_Button			    EKS_LM4F232_SW4_Right
#define DIO_0						Motherboard_DIO_0
#define DIO_1						Motherboard_DIO_1
#define DIO_2						Motherboard_DIO_2
#define DIO_3						Motherboard_DIO_3
#define A0							Motherboard_DIO_4
#define A1							Motherboard_DIO_5
#define DATA						Motherboard_DIO_6
#define CLK							Motherboard_DIO_7
#define LED1_Red					Motherboard_LED1
#define LED2_Green					Motherboard_LED2
#define LED3_Blue					Motherboard_LED3
#define LED4_Yellow							Motherboard_LED4
#define USER_LED				    EKS_LM4F232_USER_LED
#define MB_OUTPUT_NUM				MOTHERBOARD_OUTCOUNT
#define Board_SDSPI                 EKS_LM4F232_SDSPI0
#define Board_USBMSCHFatFs          EKS_LM4F232_USBMSCHFatFs0
#define Board_USBDEVICE             EKS_LM4F232_USBDEVICE
#define Board_USBHOST               EKS_LM4F232_USBHOST
#define UART0                       EKS_LM4F232_UART0
#define UART1_GSM                   EKS_LM4F232_UART1
#define UART2_GPS	                EKS_LM4F232_UART2
#define UART3_ELM                   EKS_LM4F232_UART3
#define UART4_BT	                EKS_LM4F232_UART4
#define UART5_RS232                 EKS_LM4F232_UART5
#define UART6_GPS_TRACE             EKS_LM4F232_UART6

#ifdef __cplusplus
}
#endif

#endif /* __BOARD_H */
