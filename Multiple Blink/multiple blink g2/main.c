/* Author : Nicholas Riggins
 * Date: September 2019
 * Multiple blink code lab 2
 * board MSP430G2553
 * Will blink led 1.0 and 2.5
 *
 */

#include <msp430.h>


int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	

	// Configure GPIO
	        P1DIR |= BIT0;                          // Clear P1.0 output latch for a defined power-on state
	        P1OUT |= BIT0;                          // Set P1.0 to output direction

	        P2DIR |= BIT5;                          // Clear P2.5 output latch for a defined power-on state
	        P2OUT |= BIT5;                          // Set P2.5 to output direction


	        while(1)               // keeps program in a loop
	        {
	            P1OUT ^= BIT0;                      // Toggle LED
	            __delay_cycles(100000);

	            P2OUT ^= BIT5;
	            __delay_cycles(200000);

	            P1OUT ^= BIT0;
	            __delay_cycles(100000);

	        }


	return 0;
}
