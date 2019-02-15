/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC18F45K22
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include <stdlib.h>

#define testbit(var, bit) ((var) & (1 <<(bit)))

typedef union displ_conf {
    unsigned char conc_displ_val;
    struct{
        unsigned    :1;
        unsigned c:1, up:1, d:1, fe:1, g:1, h:1, ba:1; 
    }led_seg;
} displ_conf;

uint8_t randRange(uint8_t);
void resolve_ledsegs(uint8_t, displ_conf*);



void main(void)
{
    bool seed_initd = false;
    unsigned int disp1_num, disp2_num, timer_read;
    displ_conf displ_1_conf, displ_2_conf;
    
    // Initialize the device
    SYSTEM_Initialize();
//    PORTB = 0xFE;
//    PORTD = 0xF0;;
//    PORTC = 0xE0;

    while (1)
    {
        if(Activate_Dice_Roll_GetValue()){
            if(!seed_initd){
                timer_read  = TMR0_ReadTimer();
                srand(timer_read);
                TMR0_StopTimer();
                seed_initd = true;
            }       
            disp1_num = randRange(6)+1;
            resolve_ledsegs(disp1_num, &displ_1_conf);
            disp2_num = randRange(6)+1;
            resolve_ledsegs(disp2_num, &displ_2_conf);
                        

            PORTB = (displ_1_conf.conc_displ_val & 0xFE);
            if(Activate_Second_Display_GetValue()){
                PORTD = (displ_2_conf.conc_displ_val & 0xF0);
                PORTC = ((displ_2_conf.conc_displ_val<<4) & 0xE0);         
            }
            __delay_ms(3000);
        }
        if(!Activate_Second_Display_GetValue()){
            PORTD = 0xF0;
            PORTC = 0xE0;
        }
    }
}

    // Return a uniform random value in the range 0..n-1 inclusive. More info @ https://bit.ly/2O4JHz7
   uint8_t randRange(uint8_t n)
   {
       unsigned int limit, r;
       limit = RAND_MAX - (RAND_MAX % n);
       while((r = rand()) >= limit);
       return (r % n);
   }
   
   void resolve_ledsegs(uint8_t displ_nr, displ_conf *a_displ_conf){
       bool s0, s1, s2;
       
       s0 = testbit(displ_nr,0);
       s1 = testbit(displ_nr,1);
       s2 = testbit(displ_nr,2);
       
       a_displ_conf->led_seg.ba= ~(s1 | (s0 & s2));
       a_displ_conf->led_seg.fe = ~(s1 | (s0 & s2));
       a_displ_conf->led_seg.c =  ~(~(s2) + (~(s1) & ~(s0)));
       a_displ_conf->led_seg.d = ~(s2 | s0);
       a_displ_conf->led_seg.g = ~(s1 & ~(s0));
       a_displ_conf->led_seg.h = ~(s2);
       a_displ_conf->led_seg.up = ~(s2 | s1);
   }
   
/**
 End of File
*/