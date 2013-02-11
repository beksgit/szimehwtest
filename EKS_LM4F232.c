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

#include <inc/hw_memmap.h>
#include <inc/hw_types.h>
#include <inc/hw_ints.h>

#include <driverlib/udma.h>
#include <driverlib/gpio.h>
#include <driverlib/sysctl.h>
#include <driverlib/i2c.h>
#include <driverlib/ssi.h>

#include <xdc/std.h>

#include <ti/drivers/I2C.h>
#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>
#include <ti/drivers/SDSPI.h>
#include <ti/drivers/USBMSCHFatFs.h>

#include "EKS_LM4F232.h"

static Void EKS_LM4F232_setMaxSPIbitrate(SDSPI_Handle handle);

/* GPIO configuration structure */
/* Létrehozunk egy GPIO struktúrát
 * ezt az inicializáló rutin használja, késõbb programozáskor lesz hasznos gyors GPIO mûveletekhez
 */

const GPIO_HWAttrs gpioHWAttrs[EKS_LM4F232_GPIOCOUNT] = {
	//outputs
	{GPIO_PORTG_BASE, GPIO_PIN_2, GPIO_OUTPUT},/*EKS_LM4F232_USER_LED */

    {GPIO_PORTN_BASE, GPIO_PIN_4, GPIO_OUTPUT}, /*Motherboard_DIO_4*/
    {GPIO_PORTN_BASE, GPIO_PIN_5, GPIO_OUTPUT}, /*Motherboard_DIO_5*/
    {GPIO_PORTN_BASE, GPIO_PIN_6, GPIO_OUTPUT}, /*Motherboard_DIO_6*/
    {GPIO_PORTN_BASE, GPIO_PIN_7, GPIO_OUTPUT}, /*Motherboard_DIO_7*/
    {GPIO_PORTL_BASE, GPIO_PIN_1, GPIO_OUTPUT}, /*Motherboard_LED1*/
    {GPIO_PORTL_BASE, GPIO_PIN_2, GPIO_OUTPUT}, /*Motherboard_LED2*/
    {GPIO_PORTL_BASE, GPIO_PIN_3, GPIO_OUTPUT}, /*Motherboard_LED3*/
    {GPIO_PORTL_BASE, GPIO_PIN_4, GPIO_OUTPUT}, /*Motherboard_LED4*/
    {GPIO_PORTD_BASE, GPIO_PIN_5, GPIO_OUTPUT}, /*Motherboard_GPS_TRACE_TX*/

    //inputs
    {GPIO_PORTM_BASE, GPIO_PIN_0, GPIO_INPUT}, /* EKS_LM4F232_SW1_Up */
    {GPIO_PORTM_BASE, GPIO_PIN_1, GPIO_INPUT}, /* EKS_LM4F232_SW2 Down */
    {GPIO_PORTM_BASE, GPIO_PIN_2, GPIO_INPUT}, /* EKS_LM4F232_SW3 Left */
    {GPIO_PORTM_BASE, GPIO_PIN_3, GPIO_INPUT}, /* EKS_LM4F232_SW4 Right */
    {GPIO_PORTM_BASE, GPIO_PIN_4, GPIO_INPUT}, /* EKS_LM4F232_SW5 Select*/
	{GPIO_PORTN_BASE, GPIO_PIN_0, GPIO_INPUT}, /*Motherboard_DIO_0 */
	{GPIO_PORTN_BASE, GPIO_PIN_1, GPIO_INPUT}, /*Motherboard_DIO_1 */
	{GPIO_PORTN_BASE, GPIO_PIN_2, GPIO_INPUT}, /*Motherboard_DIO_2*/
	{GPIO_PORTN_BASE, GPIO_PIN_3, GPIO_INPUT}, /*Motherboard_DIO_3*/

};

const GPIO_Config GPIO_config =
    {EKS_LM4F232_GPIOCOUNT, gpioHWAttrs};

/* UART objects */
UART_Object uartObjects[EKS_LM4F232_UARTCOUNT];

/* UART configuration structure */
const UART_HWAttrs uartHWAttrs[EKS_LM4F232_UARTCOUNT] = {
	{UART0_BASE, INT_UART0}, /* EKS_LM4F232_UART0 */
	{UART1_BASE, INT_UART1}, /* EKS_LM4F232_UART1 */
    {UART2_BASE, INT_UART2}, /* EKS_LM4F232_UART2 */
    {UART3_BASE, INT_UART3}, /* EKS_LM4F232_UART3 */
    {UART4_BASE, INT_UART4}, /* EKS_LM4F232_UART4 */
    {UART5_BASE, INT_UART5}, /* EKS_LM4F232_UART5 */
    {UART6_BASE, INT_UART6}, /* EKS_LM4F232_UART6 */
};

const UART_Config UART_config = 
    {EKS_LM4F232_UARTCOUNT, uartObjects, uartHWAttrs};

SDSPI_Object sdspiObjects[EKS_LM4F232_SDSPICOUNT];

/* SDSPI configuration structure, describing which pins are to be used */
const SDSPI_HWAttrs sdspiHWAttrs[EKS_LM4F232_SDSPICOUNT] = {
    {
        SSI0_BASE,          /* SPI base address */

        GPIO_PORTA_BASE,    /* The GPIO port used for the SPI pins */
        GPIO_PIN_2,         /* SCK */
        GPIO_PIN_4,         /* MISO */
        GPIO_PIN_5,         /* MOSI */

        GPIO_PORTA_BASE,    /* Chip select port */
        GPIO_PIN_3,         /* Chip select pin */

        GPIO_PORTA_BASE,    /* GPIO TX port */
        GPIO_PIN_5,         /* GPIO TX pin */

        EKS_LM4F232_setMaxSPIbitrate /* Function that sets a new SPI bitrate */
    }
};

const SDSPI_Config SDSPI_config = 
    {EKS_LM4F232_SDSPICOUNT, sdspiObjects, sdspiHWAttrs};

USBMSCHFatFs_Object USBMSCHFatFsObjects[EKS_LM4F232_USBMSCHFatFsCOUNT];

/* USBMSCHFatFs configuration structure, describing which pins are to be used */
const USBMSCHFatFs_HWAttrs USBMSCHFatFsHWAttrs[EKS_LM4F232_USBMSCHFatFsCOUNT] = {
    {INT_USB0}
};

const USBMSCHFatFs_Config USBMSCHFatFs_config = 
    {EKS_LM4F232_USBMSCHFatFsCOUNT, USBMSCHFatFsObjects, USBMSCHFatFsHWAttrs};

I2C_Object I2CObjects[EKS_LM4F232_I2CCOUNT];

/* I2C configuration structure, describing which pins are to be used */
const I2C_HWAttrs I2CHWAttrs[EKS_LM4F232_I2CCOUNT] = {
    {I2C0_MASTER_BASE, INT_I2C0},
    {I2C2_MASTER_BASE, INT_I2C2}
};

const I2C_Config I2C_config = 
    {EKS_LM4F232_I2CCOUNT, I2CObjects, I2CHWAttrs};

#pragma DATA_ALIGN(EKS_LM4F232_DMAControlTable, 1024)
static tDMAControlTable EKS_LM4F232_DMAControlTable[6];

/*
 *  ======== EKS_LM4F232_initDMA ========
 */
Void EKS_LM4F232_initDMA(Void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UDMA);
    uDMAEnable();
    uDMAControlBaseSet(EKS_LM4F232_DMAControlTable);
}

/*
 *  ======== EKS_LM4F232_initGeneral ========
 */
Void EKS_LM4F232_initGeneral(Void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOH);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOJ);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOK);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOL);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOM);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPION);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOP);
}

/*
 *  ======== EKS_LM4F232_initI2C ========
 */
Void EKS_LM4F232_initI2C(Void)
{
    /* I2C0 Init */
    /* Enable the peripheral */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);

    /* Initialize the I2C master. 400KHz */
    I2CMasterInitExpClk(I2C0_MASTER_BASE, SysCtlClockGet(), TRUE);

    /* Configure the appropriate pins to be I2C instead of GPIO. */
    GPIOPinConfigure(GPIO_PB2_I2C0SCL);
    GPIOPinConfigure(GPIO_PB3_I2C0SDA);
    GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_2);
    GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_3);

    /* I2C2 Init */
    /* Enable the peripheral */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C2);

    /* Initialize the I2C master. 400KHz */
    I2CMasterInitExpClk(I2C2_MASTER_BASE, SysCtlClockGet(), TRUE);

    /* Configure the appropriate pins to be I2C instead of GPIO. */
    GPIOPinConfigure(GPIO_PF6_I2C2SCL);
    GPIOPinConfigure(GPIO_PF7_I2C2SDA);
    GPIOPinTypeI2CSCL(GPIO_PORTF_BASE, GPIO_PIN_6);
    GPIOPinTypeI2C(GPIO_PORTF_BASE, GPIO_PIN_7);

    I2C_init();
}

/*
 *  ======== EKS_LM4F232_initGPIO ========
 */
Void EKS_LM4F232_initGPIO(Void)
{
    /* Setup the OUTPUT GPIO pins used */

    GPIOPinTypeGPIOOutput(GPIO_PORTG_BASE, GPIO_PIN_2); /* EKS_LM4F232_USER_LED */
    GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_4); /*Motherboard_DIO_4 */
    GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_5); /*Motherboard_DIO_5*/
    GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_6); /*Motherboard_DIO_6 */
    GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_7); /*Motherboard_DIO_7*/
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_1); /*Motherboard_LED1*/
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_2); /*Motherboard_LED2*/
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_3); /*Motherboard_LED3*/
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_4); /*Motherboard_LED4*/
    GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_5); /*Motherboard_GPS_TRACE_TX*/
    
    /* Setup the INPUT GPIO pins used */

    /* EKS_LM4F232_SW1_Up */
    GPIOPinTypeGPIOInput(GPIO_PORTM_BASE, GPIO_PIN_0);
    GPIOPadConfigSet(GPIO_PORTM_BASE, GPIO_PIN_0, GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);
    /* EKS_LM4F232_SW2_Down */
    GPIOPinTypeGPIOInput(GPIO_PORTM_BASE, GPIO_PIN_1);
    GPIOPadConfigSet(GPIO_PORTM_BASE, GPIO_PIN_1, GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);
    /* EKS_LM4F232_SW3_Left */
    GPIOPinTypeGPIOInput(GPIO_PORTM_BASE, GPIO_PIN_2);
    GPIOPadConfigSet(GPIO_PORTM_BASE, GPIO_PIN_2, GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);
    /* EKS_LM4F232_SW4 Right */
    GPIOPinTypeGPIOInput(GPIO_PORTM_BASE, GPIO_PIN_3);
    GPIOPadConfigSet(GPIO_PORTM_BASE, GPIO_PIN_3, GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);
    /* EKS_LM4F232_SW5 Select*/
    GPIOPinTypeGPIOInput(GPIO_PORTM_BASE, GPIO_PIN_4);
    GPIOPadConfigSet(GPIO_PORTM_BASE, GPIO_PIN_4, GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);
    /*Motherboard_DIO_0 */
    GPIOPinTypeGPIOInput(GPIO_PORTN_BASE, GPIO_PIN_0);
    GPIOPadConfigSet(GPIO_PORTN_BASE, GPIO_PIN_0, GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);
    /*Motherboard_DIO_1 */
    GPIOPinTypeGPIOInput(GPIO_PORTN_BASE, GPIO_PIN_1);
    GPIOPadConfigSet(GPIO_PORTN_BASE, GPIO_PIN_1, GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);
    /*Motherboard_DIO_2 */
    GPIOPinTypeGPIOInput(GPIO_PORTN_BASE, GPIO_PIN_2);
    GPIOPadConfigSet(GPIO_PORTN_BASE, GPIO_PIN_2, GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);
    /*Motherboard_DIO_3 */
    GPIOPinTypeGPIOInput(GPIO_PORTN_BASE, GPIO_PIN_3);
    GPIOPadConfigSet(GPIO_PORTN_BASE, GPIO_PIN_3, GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);

    
    /* Once GPIO_init is called, GPIO_config cannot be changed */
    GPIO_init();
    
    GPIO_write(EKS_LM4F232_USER_LED, EKS_LM4F232_LED_ON);
    GPIO_write(Motherboard_DIO_4,EKS_LM4F232_PIN_OFF);
    GPIO_write(Motherboard_DIO_5,EKS_LM4F232_PIN_OFF);
    GPIO_write(Motherboard_DIO_6,EKS_LM4F232_PIN_OFF);
    GPIO_write(Motherboard_DIO_7,EKS_LM4F232_PIN_ON); //A latch regiszter CLK jelet magasba kell tenni induláskor, hogy ne kattogjonak a relék
}

/*
 *  ======== EKS_LM4F232_initSDSPI ========
 */
Void EKS_LM4F232_initSDSPI(Void)
{
    SDSPI_HWAttrs const *attrs;
    
    /* Enable the peripherals used by the SD Card */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI0);

    attrs = SDSPI_config.hwAttrs;
    
    /* Configure pad settings */
    GPIOPadConfigSet(attrs->portSPI,
            attrs->pinSCK | attrs->pinMOSI,
            GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD);

    GPIOPadConfigSet(attrs->portSPI,
            attrs->pinMISO,
            GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);

    GPIOPadConfigSet(attrs->portCS, attrs->pinCS,
            GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD);

    /* Set to a 400 kHz SPI bit rate */
    SSIConfigSetExpClk(attrs->baseAddr,
            SysCtlClockGet(),
            SSI_FRF_MOTO_MODE_0, SSI_MODE_MASTER, 400000, 8);

    /* Configure the SPI and GPIO ports based on the config structure */
    SDSPI_init();

}

/*
 *  ======== EKS_LM4F232_initUART ========
 */
Void EKS_LM4F232_initUART()
{    
    /* Enable and configure the peripherals used by the uart. */
	SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinConfigure(GPIO_PA1_U0TX);
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);

	SysCtlPeripheralEnable(SYSCTL_PERIPH_UART1);
    GPIOPinConfigure(GPIO_PC4_U1RX);
    GPIOPinConfigure(GPIO_PC5_U1TX);
    GPIOPinTypeUART(GPIO_PORTC_BASE, GPIO_PIN_4 | GPIO_PIN_5);
    
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART2);
    GPIOPinConfigure(GPIO_PD6_U2RX);
    GPIOPinConfigure(GPIO_PD7_U2TX);
    GPIOPinTypeUART(GPIO_PORTD_BASE, GPIO_PIN_6 | GPIO_PIN_7);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART3);
    GPIOPinConfigure(GPIO_PC6_U3RX);
    GPIOPinConfigure(GPIO_PC7_U3TX);
    GPIOPinTypeUART(GPIO_PORTC_BASE, GPIO_PIN_6 | GPIO_PIN_7);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART4);
    GPIOPinConfigure(GPIO_PJ0_U4RX);
    GPIOPinConfigure(GPIO_PJ1_U4TX);
    GPIOPinTypeUART(GPIO_PORTJ_BASE, GPIO_PIN_0 | GPIO_PIN_1);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART5);
    GPIOPinConfigure(GPIO_PJ2_U5RX);
    GPIOPinConfigure(GPIO_PJ3_U5TX);
    GPIOPinTypeUART(GPIO_PORTJ_BASE, GPIO_PIN_2 | GPIO_PIN_3);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART6);
    GPIOPinConfigure(GPIO_PD4_U6RX);
    GPIOPinConfigure(GPIO_PD5_U6TX);
    GPIOPinTypeUART(GPIO_PORTD_BASE, GPIO_PIN_4 | GPIO_PIN_5);



    /* Initialize the UART driver */
    UART_init();
}

/*
 *  ======== EKS_LM4F232_initUSB ========
 *  This function just turns on the USB
 */
Void EKS_LM4F232_initUSB(EKS_LM4F232_USBMode usbMode)
{
    /* Enable the USB peripheral and PLL */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_USB0);
    SysCtlUSBPLLEnable();

    /* Setup pins for USB operation */
    GPIOPinTypeUSBAnalog(GPIO_PORTB_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    GPIOPinTypeUSBAnalog(GPIO_PORTL_BASE, GPIO_PIN_6 | GPIO_PIN_7);

    /* Additional configurations for Host mode */
    if (usbMode == EKS_LM4F232_USBHOST) {
        /* Configure the pins needed */
        GPIOPinConfigure(GPIO_PG4_USB0EPEN);
        GPIOPinConfigure(GPIO_PG5_USB0PFLT);
        GPIOPinTypeUSBDigital(GPIO_PORTG_BASE, GPIO_PIN_4 | GPIO_PIN_5);
    }
}

/*
 *  ======== EKS_LM4F232_initUSBMSCHFatFs ========
 */
Void EKS_LM4F232_initUSBMSCHFatFs(Void)
{
    /* Initialize the DMA control table */
    EKS_LM4F232_initDMA();
    
    /* Call the USB initialization function for the USB Reference modules */
    EKS_LM4F232_initUSB(EKS_LM4F232_USBHOST);
    USBMSCHFatFs_init();
}

/*
 *  ======== EKS_LM4F232_setMaxSPIbitrate ========
 */
static Void EKS_LM4F232_setMaxSPIbitrate(SDSPI_Handle handle)
{
    /* Set to a 12.5 MHz SPI bit rate */
    SSIConfigSetExpClk(handle->hwAttrs->baseAddr,
            SysCtlClockGet(),
            SSI_FRF_MOTO_MODE_0, SSI_MODE_MASTER, 12500000, 8);
}
