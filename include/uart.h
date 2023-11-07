#ifndef _UART_H_
#define _UART_H_
#include <avr/io.h>



void UART_init(const uint32_t BAUD_RATE);
void UART_setBaud(const uint32_t BAUD_RATE);
void UART_Txchar(char character);






#endif