/*	Author: mdevn001
 *  Partner(s) Name: Milind Devnani
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #1
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
    unsigned char tmpB = 0x00;

       while (1) {
	tmpA = PINA & 0x01;
	tmpB = PINA & 0x02;
	if (tmpA == 0x01 && tmpB == 0x00) {
		PORTB = 0x01;
	}
	else {
		PORTB = 0x00;
	}
    }
    return 0;
}
