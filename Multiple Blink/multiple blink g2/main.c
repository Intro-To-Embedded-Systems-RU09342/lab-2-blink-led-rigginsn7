#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	

	// Configure GPIO
	        P1DIR |= BIT0;                          // Clear P1.0 output latch for a defined power-on state
	        P1OUT |= BIT0;                          // Set P1.0 to output direction

	        P2DIR |= BIT5;
	        P2OUT |= BIT5;


	        while(1)
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
