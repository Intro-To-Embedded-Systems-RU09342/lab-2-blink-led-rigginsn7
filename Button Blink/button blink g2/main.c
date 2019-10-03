#include <msp430.h> 


// button blink G2
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	


	        P1DIR = BIT0;

	        P1REN = BIT3;

	        P1OUT = BIT3;




	            while( 1 ) {
	                    if((P1IN & BIT3) !=BIT3)
	                    {

	                    __delay_cycles(180000);
	                    P1OUT ^= BIT0;
	                    }






	            }

	return 0;
}
