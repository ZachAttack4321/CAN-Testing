#include <avr/io.h>
#include "microphone.h"



void start_microphone() {
    ADCSRA |= (1<<ADATE);       /* turns on the "auto-triggering", free running mode is the default */
    //ADCSRA |= (1<<ADIE);        /* enables interrupts for the ADC specifically */
    ADCSRA |= (1<<ADSC);        /* starts all the conversions */
}

/*
 * turns off the "auto-triggering" mode, hardware will clear the ADSC bit
 * and stop the ADC after one final conversion (13 cycles)
 */
void stop_microphone() { ADCSRA &= ~(1<<ADATE); }

uint16_t get_mic_result() { return ((ADCH<<8)) + (ADCL); }