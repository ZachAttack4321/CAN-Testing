#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "microphone.h"
#include "neopixels.h"
#include "uart.h"


#define LED_PIN             (1<<7)

int main(void) {
    UART_init(9600);            /* initializes the uart */
    
    DDRC |= LED_PIN;            /* sets the led pin to output */
    sei();                      /* enables interrupts */


    while(1) {
        PORTC ^= LED_PIN;       /* flips the led pin */
        _delay_ms(2000);
        
    }
}