#include "platform.h"
#include <avr/io.h>

char test = 0x20;

int
main ()
{
    platformBasedSerialBegin(test++);
loop:
    PORTB = 0xFF;
    platformBasedDelay(1000);
    PORTB = 0x0;
    platformBasedSerialWrite(test++);
goto loop;
    return 0;
}
