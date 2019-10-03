#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	



	 P1DIR |= BIT0;                          // Clear P1.0 output latch for a defined power-on state
	    P1OUT |= BIT0;                          // Set P1.0 to output direction

	   // PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
	                                            // to activate previously configured port settings

	    while(1)
	    {
	        P1OUT ^= BIT0;                      // Toggle LED
	        __delay_cycles(1000000);
	    }



	return 0;
}
