# Simple Blink
For this part of the Lab the goal was to blink one LED at 50% of the duty cycle. The LED will toggle on and off at a set rate.

## Processor Used
* MSP430G2553
* MSP430FR6989


## Dependencies
The only dependency is the library called MSP430.h. this is used for all TI MSP 430 processors.

## Differences in the Processors
For the MSP430FR6989 I had to disable the GPIO power on default high impedence mode. This allowed me to activate previously configured port settings. If you don't do this you can not use the on board LEDs. The only other difference in the code is the pin assignments specific to each board
