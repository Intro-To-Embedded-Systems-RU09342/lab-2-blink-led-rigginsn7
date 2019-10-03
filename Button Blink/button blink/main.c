#include <msp430.h> 

#include <stdio.h>


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

	PM5CTL0 &= ~LOCKLPM5;


	    P1DIR = BIT0;
	    P1REN = BIT1;
	    P1OUT = BIT1;




	        while( 1 ) {
	                if((P1IN & BIT1) !=BIT1)

	                __delay_cycles(180000);
	                P1OUT ^= BIT0;


	        }
	return 0;
}

