/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F1824
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set reedSensor aliases
#define reedSensor_TRIS               TRISAbits.TRISA0
#define reedSensor_LAT                LATAbits.LATA0
#define reedSensor_PORT               PORTAbits.RA0
#define reedSensor_WPU                WPUAbits.WPUA0
#define reedSensor_ANS                ANSELAbits.ANSA0
#define reedSensor_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define reedSensor_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define reedSensor_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define reedSensor_GetValue()           PORTAbits.RA0
#define reedSensor_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define reedSensor_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define reedSensor_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define reedSensor_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define reedSensor_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define reedSensor_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set switch1 aliases
#define switch1_TRIS               TRISAbits.TRISA1
#define switch1_LAT                LATAbits.LATA1
#define switch1_PORT               PORTAbits.RA1
#define switch1_WPU                WPUAbits.WPUA1
#define switch1_ANS                ANSELAbits.ANSA1
#define switch1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define switch1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define switch1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define switch1_GetValue()           PORTAbits.RA1
#define switch1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define switch1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define switch1_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define switch1_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define switch1_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define switch1_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()    do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()   do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()   do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()         PORTAbits.RA2
#define RA2_SetDigitalInput()   do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()  do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()     do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()   do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode() do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set led1 aliases
#define led1_TRIS               TRISAbits.TRISA4
#define led1_LAT                LATAbits.LATA4
#define led1_PORT               PORTAbits.RA4
#define led1_WPU                WPUAbits.WPUA4
#define led1_ANS                ANSELAbits.ANSA4
#define led1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define led1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define led1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define led1_GetValue()           PORTAbits.RA4
#define led1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define led1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define led1_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define led1_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define led1_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define led1_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set led2 aliases
#define led2_TRIS               TRISAbits.TRISA5
#define led2_LAT                LATAbits.LATA5
#define led2_PORT               PORTAbits.RA5
#define led2_WPU                WPUAbits.WPUA5
#define led2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define led2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define led2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define led2_GetValue()           PORTAbits.RA5
#define led2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define led2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define led2_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define led2_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)

// get/set switch2 aliases
#define switch2_TRIS               TRISCbits.TRISC0
#define switch2_LAT                LATCbits.LATC0
#define switch2_PORT               PORTCbits.RC0
#define switch2_WPU                WPUCbits.WPUC0
#define switch2_ANS                ANSELCbits.ANSC0
#define switch2_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define switch2_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define switch2_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define switch2_GetValue()           PORTCbits.RC0
#define switch2_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define switch2_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define switch2_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define switch2_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define switch2_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define switch2_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set alarmOp aliases
#define alarmOp_TRIS               TRISCbits.TRISC5
#define alarmOp_LAT                LATCbits.LATC5
#define alarmOp_PORT               PORTCbits.RC5
#define alarmOp_WPU                WPUCbits.WPUC5
#define alarmOp_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define alarmOp_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define alarmOp_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define alarmOp_GetValue()           PORTCbits.RC5
#define alarmOp_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define alarmOp_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define alarmOp_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define alarmOp_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF0 pin functionality
 * @Example
    IOCAF0_ISR();
 */
void IOCAF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_InterruptHandler);

*/
extern void (*IOCAF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);

*/
void IOCAF0_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF1 pin functionality
 * @Example
    IOCAF1_ISR();
 */
void IOCAF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF1_SetInterruptHandler() method.
    This handler is called every time the IOCAF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(IOCAF1_InterruptHandler);

*/
extern void (*IOCAF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF1_SetInterruptHandler() method.
    This handler is called every time the IOCAF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(IOCAF1_DefaultInterruptHandler);

*/
void IOCAF1_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/