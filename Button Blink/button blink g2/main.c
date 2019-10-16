/* Author : Nicholas Riggins
 * Date: September 2019
 * Button blink code lab 2
 * board MSP430G2553
 * Will blink LED 1.0 when button 1.3 is pressed
 *
 */
#include <msp430.h> 


// button blink G2
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	


	        P1DIR = BIT0;      //  Clear P1.0 output latch for a defined power-on state

	        P1REN = BIT3;     // Enable internal resistor so it can connect to 3.6v or ground

	        P1OUT = BIT3;     //Sets pin 1.3 as an input pin
	                          // The LED initial value is at 1



	            while( 1 ) {                       // Keeps the loop running
	                    if((P1IN & BIT3) !=BIT3)  // if the value of pin input and bit 3 doesn't equal the value of bit 3  the LED will toggle
	                    {

	                    __delay_cycles(180000);
	                    P1OUT ^= BIT0;
	                    }






	            }

	return 0;
}
