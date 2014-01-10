#pragma once

//#define USE_EXT_OSC

#ifndef USE_EXT_OSC
#define FRCSCALE 0b111 //31.25khz
//#define FRCSCALE 0b110 //125khz
//#define FRCSCALE 0b101 //250khz
//#define FRCSCALE 0b100 //500khz
//#define FRCSCALE 0b011 //1mhz
//#define FRCSCALE 0b010 //2mhz
//#define FRCSCALE 0b001 //4mhz
//#define FRCSCALE 0b000 //8mhz
#else
#endif

void init_osc();