//#include <Arduino.h>
#include <stdio.h>
#include <util/delay.h>

#define DDRC    (*(volatile uint8_t *)((0x07) + 0x20))
#define PORTC   (*(volatile uint8_t *)((0x08) + 0x20))

#define LED_PIN (1<<7)


int main(void) {
    // setup
    
    // sets the pin for the LED to output
    DDRC |= LED_PIN;
    


    // loop
    while(1) {
        // flips the output pin for the LED
        PORTC ^= LED_PIN;
        _delay_ms(1000);
        
        //printf("hello world");
    }
}