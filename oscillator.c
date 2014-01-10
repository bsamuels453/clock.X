#include <xc.h>
#include "oscillator.h"

void init_osc(){
#ifndef USE_EXT_OSC
    OSCCONbits.NOSC = 0b111; //fast rc oscillator w/ postscaler
    CLKDIVbits.RCDIV = FRCSCALE;
#else
    OSCCONbits.NOSC = 0b010; //ext-osc w/ xt, hs, ec
#endif
    OSCCONbits.OSWEN = 1; //init osc switch to src specified by NOSC
    while(OSCCONbits.OSWEN != 0);
    OSCCONbits.CLKLOCK = 1;
}
