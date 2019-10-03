#include <msp430.h> 

unsigned int count = 0;
/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P2SEL &= ~BIT2;

	P2DIR |= BIT2;
	P2OUT &= ~BIT2;

	P2DIR |= BIT3;
	P2OUT &= ~BIT3;


	while (1)
	{
	    if (count % 1000 == 0){
	        P2OUT ^= BIT2;
	    }
	    if (count % 500==0){
	        P2OUT ^= BIT3;
	    }

	    count++;

	}




	return 0;
}
