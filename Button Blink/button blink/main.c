/* Author : Nicholas Riggins
 * Date: September 2019
 * Button Blink code lab 2
 * board MSP-EXPFR6989
 * will blink led 1.0 when button 1.1 is pressed
 *
 */
#include <msp430.h> 

#include <stdio.h>



int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

	PM5CTL0 &= ~LOCKLPM5;


	    P1DIR = BIT0;    // Clear P1.0 output latch for a defined power-on state
	    P1REN = BIT1;    // Enables Internal resistor so it can connect to 3.6 v or ground
	    P1OUT = BIT1;    // Sets pin 1.3 as an input pin
	                     // The LED initial value is at 1



	        while( 1 ) {    // keeps program in a loop
	                if((P1IN & BIT1) !=BIT1)  // if the value of pin input and bit 3 doesn't equal the value of bit 3  the LED will toggle

	                __delay_cycles(180000);
	                P1OUT ^= BIT0;


	        }
	return 0;
}

