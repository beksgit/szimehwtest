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

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>

/* MCUSDK Header files */
#include <ti/drivers/GPIO.h>
// #include <ti/drivers/SDSPI.h>
 #include <ti/drivers/UART.h>
// #include <ti/drivers/USBMSCHFatFs.h>

/* Board Header file */
#include "Board.h"


/* Globális változók a tesztelésehez */
int Ledindex;
int Internal_timer;

/*
 *  ======== UART TASK ========
 */
Void UartTask(UArg a0, UArg a1)
{
    Char input;
    UART_Handle uart0,uart1;
    UART_Params uartParams;
    const Char echoPrompt[] = "\fEchoing characters:\r\n";

    /* Create a UART with data processing off. */
    UART_Params_init(&uartParams);
    uartParams.writeDataMode = UART_DATA_BINARY;
    uartParams.readDataMode = UART_DATA_BINARY;
    uartParams.readReturnMode = UART_RETURN_FULL;
    uartParams.readEcho = UART_ECHO_OFF;
    uart0 = UART_open(UART0, &uartParams);
    uart1 = UART_open(UART1_GSM, &uartParams);


    if (uart0 == NULL) {
        System_abort("Error opening the UART0");
    }
    if (uart1 == NULL) {
          System_abort("Error opening the UART1");
      }

    UART_write(uart1, echoPrompt, sizeof(echoPrompt));

    /* Loop forever echoing */
    while (TRUE) {
        //UART_read(uart1, &input, 1);
        UART_write(uart0, "U", 1);
    }
}

/*
 *  ======== main ========
 */
Int main(Void)
{       
Internal_timer=0;
	/* Call board init functions. */
    Board_initGeneral();
    Board_initGPIO();
    // Board_initSDSPI();
    Board_initUART();
    // Board_initUSB(Board_USBDEVICE);
    // Board_initUSBMSCHFatFs();
    
    System_printf("Starting the example\nSystem provider is set to SysMin, halt the target and use ROV to view output.\n");
    /* SysMin will only print to the console when you call flush or exit */
    System_flush();
    
	int i;
	/* First off second on .... */
	 for (i=0;i< MB_OUTPUT_NUM;i++)
	 {
		 GPIO_write(i, i%2);
	 }
	 Ledindex=LED1_Red; //kezdeti érték beállítása
    /* Start BIOS. Will not return from this call. */
    BIOS_start();
}
/* GPIO FLip-FLop */
Void GPIOTicker(UArg arg0)
 {
	int i;
	++Internal_timer;

if (Ledindex==LED1_Red)
{
GPIO_write(A0,PIN_OFF);
GPIO_write(A1,PIN_OFF);
}

if (Ledindex==LED2_Green)
{
GPIO_write(A0,PIN_ON);
GPIO_write(A1,PIN_OFF);
}

if (Ledindex==LED3_Blue)
{
GPIO_write(A0,PIN_OFF);
GPIO_write(A1,PIN_ON);
}

if (Ledindex==LED4_Yellow)
{
GPIO_write(A0,PIN_ON);
GPIO_write(A1,PIN_ON);
}

//Relé kattogtatás: a latch regiszter bit átírása
if (Internal_timer==5000)
{
GPIO_toggle(DATA);
GPIO_write(CLK,PIN_OFF);
GPIO_write(CLK,PIN_ON);
}
	/* Toggle IO ports */
	//for (i=0;i< MB_OUTPUT_NUM;i++)
	//{

	//GPIO_toggle(i);

	// }
 //Kb 1 másodpercenként ez történik:

if (Internal_timer==10000)
	{
	Internal_timer=0;
		if (GPIO_read(LEFT_Button)==0)
			{
			for (i=0;i< MB_OUTPUT_NUM;i++)
				 {
					 GPIO_write(i, PIN_OFF);
				 }
			GPIO_write(Ledindex, PIN_OFF);
			++Ledindex;
			if (Ledindex==MB_OUTPUT_NUM) Ledindex=LED1_Red;
			}
	GPIO_toggle(Ledindex);
	}
 }

