#include <xc.h>
#include "oscillator.h"

void init_osc(){
    OSCCONbits.NOSC = 0b111; //fast rc oscillator w/ postscaler
    CLKDIVbits.RCDIV = FRCSCALE;
    OSCCONbits.OSWEN = 1; //init osc switch to src specified by NOSC
    while(OSCCONbits.OSWEN != 0);
    OSCCONbits.CLKLOCK = 1;
}
