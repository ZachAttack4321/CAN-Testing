#ifndef _NEOPIXELS_H_
#define _NEOPIXELS_H_

#include <avr/io.h>

#define NEOPORT         PORTB
#define NEOPIX          (1<<0)

void write_to_neopixels(uint8_t * arr, uint8_t length);
void write_all_neopixels(uint8_t color, uint8_t length);



#endif