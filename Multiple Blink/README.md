# Multiple Blink
For this part of the Lab I used 2 LED's on the processors and had them blinking are different speeds. This was accomplished by just Using a while loop and then having delays to have then toggle at different rates. One LED is going at double the speed the other LED so you can easily notice the difference.


# Processors Utlilized
* MSP430G2553
* MSP430FR6989

## Dependencies
The only dependency is the library called MSP430.h. this is used for all TI MSP 430 processors.

## Differences in the Processors
For the MSP430FR6989 I had to disable the GPIO power on default high impedence mode. This allowed me to activate previously configured port settings. If you don't do this you can not use the on board LEDs. The only other difference in the code is the pin assignments specific to each board
