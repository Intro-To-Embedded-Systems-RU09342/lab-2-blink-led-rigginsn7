# Button Blink
For this part of the lab the LED would be turned on then when a button on the board was pressed the LED would proceed to blink. This was done using the internal resistor and setting it to 1. After that it was but in an if statement comparing the initial value to the current value. When the button is pressed the current value is then read to be 0. When these 2 values are compared in an if statement if they're not the same then the LED starts to toggle. 

# Processors Utilized
* MSP430G2553
* MSP430FR6989

## Dependencies
The only dependency is the library called MSP430.h. this is used for all TI MSP 430 processors.

## Difference in the Processors
For the MSP430FR6989 I had to disable the GPIO power on default high impedence mode. This allowed me to activate previously configured port settings. If you don't do this you can not use the on board LEDs. The only other difference in the code is the pin assignments specific to each board
