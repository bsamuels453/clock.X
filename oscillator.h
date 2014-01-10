#pragma once

//used to define oscillator frequency
//#define FRCSCALE 0b111 //31.25khz
//#define FRCSCALE 0b110 //125khz
//#define FRCSCALE 0b101 //250khz
//#define FRCSCALE 0b100 //500khz
#define FRCSCALE 0b011 //1mhz
//#define FRCSCALE 0b010 //2mhz
//#define FRCSCALE 0b001 //4mhz
//#define FRCSCALE 0b000 //8mhz

void init_osc();
