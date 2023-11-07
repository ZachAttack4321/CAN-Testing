#include "uart.h"





void UART_init(const uint32_t BAUD_RATE) {
    UCSR1A  = 0x00;
    UCSR1B |= (1<<RXEN1) | (1<<TXEN1);      /* enables transmit/recv */
    UCSR1C |= (1<<UMSEL11) | (1<<UMSEL10);  /* asynchronous uart */

    UART_setBaud(BAUD_RATE);
}

void UART_setBaud(const uint32_t BAUD_RATE) {
    uint16_t reg_value = F_CPU/BAUD_RATE;
    reg_value = 51;                         /* temp value while i figure formula out */
    UBRR1H = (reg_value>>8);                /* takes the top nibble */
    UBRR1L = (uint8_t) reg_value;           /* takes the bottom nibble */
}

void UART_Txchar(char character) {
    while(UCSR1A && (1<<UDRE1));            /* uh ignore how bad this is */
    UDR1 = character;
    UCSR1A &= ~(1<<UDRE1);                  /* sets transmitter to ready or something */
}