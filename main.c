#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "main.h"
#include "definition.h"

/* features to implement
 * -motor driving via pwm
 * -remote poweron/off
 * -spin stuff
 * -spin modes
 * -timekeeping module or interface with timekeeping IC once TI validates sample order
 */

int main(int argc, char** argv) {
    for(;;){

    }
    return (EXIT_SUCCESS);
}

void init_osc(){
    OSCCONbits.NOSC = 0b111; //fast rc oscillator w/ postscaler
    CLKDIVbits.RCDIV = FRCSCALE;
    OSCCONbits.OSWEN = 1; //init osc switch to src specified by NOSC
    while(OSCCONbits.OSWEN != 0);
    OSCCONbits.CLKLOCK = 1;
}