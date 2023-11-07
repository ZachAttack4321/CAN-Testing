#include <avr/io.h>
#include "microphone.h"


void MIC_init() {
    ADCSRA |= (1<<ADATE);       /* turns on the "auto-triggering", free running mode is the default */
    //ADCSRA |= (1<<ADIE);        /* enables interrupts for the ADC specifically */
}

void MIC_start() {
    ADCSRA |= (1<<ADSC);        /* starts all the conversions */
}

/*
 * turns off the "auto-triggering" mode, hardware will clear the ADSC bit
 * and stop the ADC after one final conversion (13 cycles)
 */
void MIC_stop() { ADCSRA &= ~(1<<ADATE); }

uint16_t MIC_get_value() { return ((ADCH<<8)) + (ADCL); }