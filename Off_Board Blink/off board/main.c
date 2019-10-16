/* Author : Nicholas Riggins
 * Date: September 2019
 * off board blink code lab 2
 * board MSP430G2553
 * The processor on the MSP430G2553 was extracted from the board and was placed on a bread board
 * The processor was used in a reset circuit connected to 2 led's and they both blink at different rates
 *
 */

#include <msp430.h> 

unsigned int count = 0;


int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	//P2SEL &= ~BIT2;

	P2DIR |= BIT2;  // P2.2 is set as an input
	P2OUT &= ~BIT2; // P2.2 is set as an I/O

	P2DIR |= BIT3;  // P2.3 is set as an input
	P2OUT &= ~BIT3; // P2.3 is set as an I/O


	while (1)  // runs the loop
	{
	    if (count % 1000 == 0){ // toggles the first LED connected to pin 2.2
	        P2OUT ^= BIT2;
	    }
	    if (count % 500==0){    // toggles the second LED connected to pin 2.3
	        P2OUT ^= BIT3;
	    }

	    count++;

	}




	return 0;
}
