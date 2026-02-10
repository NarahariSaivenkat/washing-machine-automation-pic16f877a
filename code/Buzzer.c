/*
 * File:   main.c
 * Author: emertxe-69
 *
 * Created on 11 June, 2025, 6:41 PM
 */


#include <xc.h>
#include "main.h"
#define _XTAL_FREQ                  20000000
#pragma config WDTE = OFF

static void init_config(void) {
    //configure RC1 and RC2 as output
    BUZZER_DDR = 0;
    FAN_DDR = 0;
    //Turn off buzzer and fan initially
    BUZZER =0;
    FAN = 0;

}

void main(void) {
    init_config();
         
        BUZZER = 1;
       __delay_ms(2000);
       BUZZER = 0;
     
      
    
    return;
}
