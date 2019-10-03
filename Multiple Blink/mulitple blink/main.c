#include <msp430.h> 
#include <stdio.h>


/**
 * main.c
 */

// Mulitple blink
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	// Configure GPIO
	    P1DIR |= BIT0;                          // Clear P1.0 output latch for a defined power-on state
	    P1OUT |= BIT0;                          // Set P1.0 to output direction

	    P9DIR |= BIT7;
	    P9OUT |= BIT7;

	    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
	                                            // to activate previously configured port settings

	    while(1)
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
