/*	Author: mdevn001
 *  Partner(s) Name: Milind Devnani
 *	Lab Section:23 
 *	Assignment: Lab #2  Exercise #4
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
     DDRA = 0x00; PORTA = 0xFF; 
     DDRB = 0x00; PORTB = 0xFF; 
     DDRC = 0x00; PORTC = 0xFF; 
     DDRD = 0xFF; PORTD = 0x00; 

     unsigned char tmpA = 0x00; 
     unsigned char tmpB = 0x00; 
     unsigned char tmpC = 0x00; 
     unsigned char tmp1 = 0x00; 
     unsigned char tmp2 = 0x00; 
     unsigned char finalResult = 0x00; 
     unsigned char totalWeight = 0x00;
    /* Insert your solution below */
    while (1) {
    tmpA = PINA & 0xFF; 
    tmpB = PINB & 0xFF; 
    tmpC = PINC & 0xFF; 
    tmp1 = 0x00; 
    tmp2 = 0x00; 
   
    totalWeight = PINA + PINB + PINC; 
    if (totalWeight >= 141){
    tmp1 = 0x01; 
    }
    else{
    tmp1 = 0x00; 
    }
    
    if(tmpA > tmpC) { 
     if((tmpA - tmpC) > 0x50){
       tmp2 = 0x02;    
      }
    }
   else {
      if((tmpC - tmpA) > 0x50){
      tmp2 = 0x02; 
     }
  }
  totalWeight = totalWeight >> 2; 
  finalResult = (totalWeight & 0xFC) | tmp1 | tmp2; 
  PORTD = finalResult; 
 }
    return 0;
}
