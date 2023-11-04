
#include "definitions.h"
#include <stdio.h>
#include <util/delay.h>
#include <avr/io.h>


#define     LED_PIN (1<<7)


int main(void) {
    // setup
    
    
    // sets the pin for the LED to output
    DDRC |= LED_PIN;
    


    // loop
    while(1) {
        // flips the output pin for the LED
        PORTC ^= LED_PIN;
        _delay_ms(2000);
        
        //printf("hello world");
    }
}