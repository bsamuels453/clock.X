#define bitset(var, bitno) ((var) |= 1UL << (bitno))
#define bitclr(var, bitno) ((var) &= ~(1UL << (bitno)))

//auto_psv
//void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void) {}
//unsigned int FLASH_variable __attribute__((space(auto_psv)));
//void _ISR _INT0Interrupt(void){}
//void _ISR _SPI1Interrupt(void){}
//void __attribute__((deprecated)) Test(){}
//void _ISR intr(void){}