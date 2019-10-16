/* Author : Nicholas Riggins
 * Date: September 2019
 * Multiple blink code lab 2
 * board MSP-EXPFR6989
 * Will blink led 1.0 and 9.7
 *
 */

#include <msp430.h> 
#include <stdio.h>


// Mulitple blink
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	// Configure GPIO
	    P1DIR |= BIT0;                          // Clear P1.0 output latch for a defined power-on state
	    P1OUT |= BIT0;                          // Set P1.0 to output direction

	    P9DIR |= BIT7;                          //  Clear P9.7 output latch for a defined power-on state
	    P9OUT |= BIT7;                          //  Set P9.7 to output direction

	    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
	                                            // to activate previously configured port settings

	    while(1)                             // Keeps program in a loop
	    {
	        P1OUT ^= BIT0;                      // Toggle LED
	        __delay_cycles(100000);

	        P9OUT ^= BIT7;
	        __delay_cycles(200000);

	        P1OUT ^= BIT0;
	        __delay_cycles(100000);

	    }

	return 0;
}
