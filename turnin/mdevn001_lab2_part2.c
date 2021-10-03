/*	Author: mdevn001
 *  Partner(s) Name: 
 *	Lab Section:23
 *	Assignment: Lab #2  Exercise #2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
     DDRB = 0xFF; PORTA = 0x00; // Configure port B's 8 pins as outputs
     PORTB = 0x00; DDRB = 0xFF; // Initialize PORTB output to 0’s
    /* Insert your solution below */
    unsigned char tmpA = 0x00;
    //unsigned char tmpB = 0x00;
    
    while (1) {
	tmpA = PINA;
	if (tmpA == 0x00 || tmpA = 0x80) {
	PORTC = 0x04;	
	}
	else if (tmpA == 0x01 || tmpA == 0x02 || tmpA == 0x04 || tmpA == 0x08) {
        PORTC = 0x03;	
	}
	else if (tmpA == 0x03 || tmpA == 0x05 || tmpA == 0x06 || tmpA == 0x09 || tmpA == 0x0A || tmpA == 0x0C) {
	PORTC = 0x02;	
	}
	else if (tmpA == 0x07 || tmpA == 0x0B || tmpA == 0x0D || tmpA == 0x0E) {
        PORTC = 0x01;
        }
	else {
	PORTC = 0x00;	
	}
    }
    return 0;
}
