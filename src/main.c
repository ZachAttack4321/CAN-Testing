//#define F_CPU 16000000UL
#include <stdio.h>
#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "microphone.h"
#include "neopixels.h"


#define LED_PIN             (1<<7)

int main(void) {
    // setup
    
    
    // sets the pin for the LED to output
    DDRC |= LED_PIN;
    sei();
    


    // loop
    while(1) {
        start_microphone();
        // flips the output pin for the LED
        PORTC ^= LED_PIN;
        _delay_ms(2000);
        
        //printf("hello world");
    }
}