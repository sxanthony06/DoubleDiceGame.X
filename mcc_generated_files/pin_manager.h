/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC18F45K22
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
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

// get/set Unused_IO_RA0 aliases
#define Unused_IO_RA0_TRIS                 TRISAbits.TRISA0
#define Unused_IO_RA0_LAT                  LATAbits.LATA0
#define Unused_IO_RA0_PORT                 PORTAbits.RA0
#define Unused_IO_RA0_ANS                  ANSELAbits.ANSA0
#define Unused_IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Unused_IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Unused_IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Unused_IO_RA0_GetValue()           PORTAbits.RA0
#define Unused_IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Unused_IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Unused_IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define Unused_IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set Activate_Dice_Roll aliases
#define Activate_Dice_Roll_TRIS                 TRISAbits.TRISA4
#define Activate_Dice_Roll_LAT                  LATAbits.LATA4
#define Activate_Dice_Roll_PORT                 PORTAbits.RA4
#define Activate_Dice_Roll_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define Activate_Dice_Roll_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define Activate_Dice_Roll_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define Activate_Dice_Roll_GetValue()           PORTAbits.RA4
#define Activate_Dice_Roll_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define Activate_Dice_Roll_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

// get/set Activate_Second_Display aliases
#define Activate_Second_Display_TRIS                 TRISAbits.TRISA5
#define Activate_Second_Display_LAT                  LATAbits.LATA5
#define Activate_Second_Display_PORT                 PORTAbits.RA5
#define Activate_Second_Display_ANS                  ANSELAbits.ANSA5
#define Activate_Second_Display_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define Activate_Second_Display_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define Activate_Second_Display_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define Activate_Second_Display_GetValue()           PORTAbits.RA5
#define Activate_Second_Display_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define Activate_Second_Display_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define Activate_Second_Display_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define Activate_Second_Display_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set Unused_IO_RB0 aliases
#define Unused_IO_RB0_TRIS                 TRISBbits.TRISB0
#define Unused_IO_RB0_LAT                  LATBbits.LATB0
#define Unused_IO_RB0_PORT                 PORTBbits.RB0
#define Unused_IO_RB0_WPU                  WPUBbits.WPUB0
#define Unused_IO_RB0_ANS                  ANSELBbits.ANSB0
#define Unused_IO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Unused_IO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Unused_IO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Unused_IO_RB0_GetValue()           PORTBbits.RB0
#define Unused_IO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Unused_IO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Unused_IO_RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Unused_IO_RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Unused_IO_RB0_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define Unused_IO_RB0_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set Display_1C aliases
#define Display_1C_TRIS                 TRISBbits.TRISB1
#define Display_1C_LAT                  LATBbits.LATB1
#define Display_1C_PORT                 PORTBbits.RB1
#define Display_1C_WPU                  WPUBbits.WPUB1
#define Display_1C_ANS                  ANSELBbits.ANSB1
#define Display_1C_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Display_1C_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Display_1C_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Display_1C_GetValue()           PORTBbits.RB1
#define Display_1C_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Display_1C_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Display_1C_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Display_1C_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Display_1C_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define Display_1C_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set Display_1UP aliases
#define Display_1UP_TRIS                 TRISBbits.TRISB2
#define Display_1UP_LAT                  LATBbits.LATB2
#define Display_1UP_PORT                 PORTBbits.RB2
#define Display_1UP_WPU                  WPUBbits.WPUB2
#define Display_1UP_ANS                  ANSELBbits.ANSB2
#define Display_1UP_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Display_1UP_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Display_1UP_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Display_1UP_GetValue()           PORTBbits.RB2
#define Display_1UP_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Display_1UP_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Display_1UP_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define Display_1UP_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define Display_1UP_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define Display_1UP_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set Display_1D aliases
#define Display_1D_TRIS                 TRISBbits.TRISB3
#define Display_1D_LAT                  LATBbits.LATB3
#define Display_1D_PORT                 PORTBbits.RB3
#define Display_1D_WPU                  WPUBbits.WPUB3
#define Display_1D_ANS                  ANSELBbits.ANSB3
#define Display_1D_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define Display_1D_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define Display_1D_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define Display_1D_GetValue()           PORTBbits.RB3
#define Display_1D_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define Display_1D_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define Display_1D_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define Display_1D_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define Display_1D_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define Display_1D_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set Display_1FE aliases
#define Display_1FE_TRIS                 TRISBbits.TRISB4
#define Display_1FE_LAT                  LATBbits.LATB4
#define Display_1FE_PORT                 PORTBbits.RB4
#define Display_1FE_WPU                  WPUBbits.WPUB4
#define Display_1FE_ANS                  ANSELBbits.ANSB4
#define Display_1FE_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Display_1FE_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Display_1FE_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Display_1FE_GetValue()           PORTBbits.RB4
#define Display_1FE_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Display_1FE_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Display_1FE_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define Display_1FE_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define Display_1FE_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define Display_1FE_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set Display_1G aliases
#define Display_1G_TRIS                 TRISBbits.TRISB5
#define Display_1G_LAT                  LATBbits.LATB5
#define Display_1G_PORT                 PORTBbits.RB5
#define Display_1G_WPU                  WPUBbits.WPUB5
#define Display_1G_ANS                  ANSELBbits.ANSB5
#define Display_1G_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Display_1G_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Display_1G_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Display_1G_GetValue()           PORTBbits.RB5
#define Display_1G_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Display_1G_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Display_1G_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define Display_1G_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define Display_1G_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define Display_1G_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set Display_1H aliases
#define Display_1H_TRIS                 TRISBbits.TRISB6
#define Display_1H_LAT                  LATBbits.LATB6
#define Display_1H_PORT                 PORTBbits.RB6
#define Display_1H_WPU                  WPUBbits.WPUB6
#define Display_1H_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define Display_1H_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define Display_1H_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define Display_1H_GetValue()           PORTBbits.RB6
#define Display_1H_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define Display_1H_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define Display_1H_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define Display_1H_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set Display_1BA aliases
#define Display_1BA_TRIS                 TRISBbits.TRISB7
#define Display_1BA_LAT                  LATBbits.LATB7
#define Display_1BA_PORT                 PORTBbits.RB7
#define Display_1BA_WPU                  WPUBbits.WPUB7
#define Display_1BA_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define Display_1BA_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define Display_1BA_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define Display_1BA_GetValue()           PORTBbits.RB7
#define Display_1BA_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define Display_1BA_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define Display_1BA_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define Display_1BA_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

// get/set Display_2C aliases
#define Display_2C_TRIS                 TRISCbits.TRISC5
#define Display_2C_LAT                  LATCbits.LATC5
#define Display_2C_PORT                 PORTCbits.RC5
#define Display_2C_ANS                  ANSELCbits.ANSC5
#define Display_2C_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define Display_2C_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define Display_2C_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define Display_2C_GetValue()           PORTCbits.RC5
#define Display_2C_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define Display_2C_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define Display_2C_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define Display_2C_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set Display_2UP aliases
#define Display_2UP_TRIS                 TRISCbits.TRISC6
#define Display_2UP_LAT                  LATCbits.LATC6
#define Display_2UP_PORT                 PORTCbits.RC6
#define Display_2UP_ANS                  ANSELCbits.ANSC6
#define Display_2UP_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define Display_2UP_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define Display_2UP_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define Display_2UP_GetValue()           PORTCbits.RC6
#define Display_2UP_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define Display_2UP_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define Display_2UP_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define Display_2UP_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set Display_2D aliases
#define Display_2D_TRIS                 TRISCbits.TRISC7
#define Display_2D_LAT                  LATCbits.LATC7
#define Display_2D_PORT                 PORTCbits.RC7
#define Display_2D_ANS                  ANSELCbits.ANSC7
#define Display_2D_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define Display_2D_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define Display_2D_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define Display_2D_GetValue()           PORTCbits.RC7
#define Display_2D_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define Display_2D_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define Display_2D_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define Display_2D_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set Display_2FE aliases
#define Display_2FE_TRIS                 TRISDbits.TRISD4
#define Display_2FE_LAT                  LATDbits.LATD4
#define Display_2FE_PORT                 PORTDbits.RD4
#define Display_2FE_ANS                  ANSELDbits.ANSD4
#define Display_2FE_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define Display_2FE_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define Display_2FE_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define Display_2FE_GetValue()           PORTDbits.RD4
#define Display_2FE_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define Display_2FE_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define Display_2FE_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define Display_2FE_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set Display_2G aliases
#define Display_2G_TRIS                 TRISDbits.TRISD5
#define Display_2G_LAT                  LATDbits.LATD5
#define Display_2G_PORT                 PORTDbits.RD5
#define Display_2G_ANS                  ANSELDbits.ANSD5
#define Display_2G_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define Display_2G_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define Display_2G_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define Display_2G_GetValue()           PORTDbits.RD5
#define Display_2G_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define Display_2G_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define Display_2G_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define Display_2G_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set Display_2H aliases
#define Display_2H_TRIS                 TRISDbits.TRISD6
#define Display_2H_LAT                  LATDbits.LATD6
#define Display_2H_PORT                 PORTDbits.RD6
#define Display_2H_ANS                  ANSELDbits.ANSD6
#define Display_2H_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define Display_2H_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define Display_2H_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define Display_2H_GetValue()           PORTDbits.RD6
#define Display_2H_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define Display_2H_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define Display_2H_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define Display_2H_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set Display_2BA aliases
#define Display_2BA_TRIS                 TRISDbits.TRISD7
#define Display_2BA_LAT                  LATDbits.LATD7
#define Display_2BA_PORT                 PORTDbits.RD7
#define Display_2BA_ANS                  ANSELDbits.ANSD7
#define Display_2BA_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define Display_2BA_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define Display_2BA_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define Display_2BA_GetValue()           PORTDbits.RD7
#define Display_2BA_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define Display_2BA_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define Display_2BA_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define Display_2BA_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set Unused_IO_RE0 aliases
#define Unused_IO_RE0_TRIS                 TRISEbits.TRISE0
#define Unused_IO_RE0_LAT                  LATEbits.LATE0
#define Unused_IO_RE0_PORT                 PORTEbits.RE0
#define Unused_IO_RE0_ANS                  ANSELEbits.ANSE0
#define Unused_IO_RE0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define Unused_IO_RE0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define Unused_IO_RE0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define Unused_IO_RE0_GetValue()           PORTEbits.RE0
#define Unused_IO_RE0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define Unused_IO_RE0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define Unused_IO_RE0_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define Unused_IO_RE0_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

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



#endif // PIN_MANAGER_H
/**
 End of File
*/