#include "config.h"
#include "modes.h"
#include <pic.h>

void main(void)
{
    TRISA = 0;
	TRISC = 0;
	CMCON = 7;
    PORTA = 0;
	PORTC = 0; 
    TRISC5 = 1;
    void (*modes[4])(void) = {cross, spiral, line, full};
    int i = 0;
    while(1)
    {   
        if(!RC5)
        {
            i++;
        }
        modes[i%4]();
        
    }
    return;
    
}