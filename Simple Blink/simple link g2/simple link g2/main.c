/* Author : Nicholas Riggins
 * Date: September 2019
 * Simple blink code lab 2
 * board MSP430G2553
 * Will blink led 1.0
 *
 */
#include <msp430.h> 


int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	



	 P1DIR |= BIT0;                          // Clear P1.0 output latch for a defined power-on state
	 P1OUT |= BIT0;                          // Set P1.0 to output direction


	    while(1)
	    {
	        P1OUT ^= BIT0;                      // Toggle LED
	        __delay_cycles(1000000);
	    }



	return 0;
}
