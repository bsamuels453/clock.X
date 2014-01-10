#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "oscillator.h"

/* features to implement
 * -motor driving via pwm
 * -remote poweron/off
 * -spin stuff
 * -spin modes
 * -timekeeping module or interface with timekeeping IC once TI validates sample order
 */


int main(int argc, char** argv) {
    init_osc();
    for(;;){

    }
    return (EXIT_SUCCESS);
}
