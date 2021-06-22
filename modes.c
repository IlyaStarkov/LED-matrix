#include <pic.h>
#include <stdlib.h>

#define _XTAL_FREQ 20000000

void spiral(void)
{
    PORTAbits.RA0 = 1;
    PORTCbits.RC0 = 1;
    __delay_ms(50);
    PORTCbits.RC0 = 0;
    PORTCbits.RC1 = 1;
    __delay_ms(50);
    PORTCbits.RC1 = 0;
    PORTCbits.RC2 = 1;
    __delay_ms(50);
    PORTCbits.RC2 = 0;
    PORTCbits.RC3 = 1;
    __delay_ms(50);
    PORTCbits.RC3 = 0;
    PORTCbits.RC4 = 1; 
    __delay_ms(50);
    PORTAbits.RA0 = 0;
    PORTAbits.RA1 = 1;
    __delay_ms(50);
    PORTAbits.RA1 = 0;
    PORTAbits.RA2 = 1;
    __delay_ms(50);
    PORTAbits.RA2 = 0;
    PORTAbits.RA4 = 1;
    __delay_ms(50);
    PORTAbits.RA4 = 0;
    PORTAbits.RA5 = 1;
    __delay_ms(50); 
    PORTCbits.RC4 = 0;
    PORTCbits.RC3 = 1;
    __delay_ms(50);
    PORTCbits.RC3 = 0;
    PORTCbits.RC2 = 1;
    __delay_ms(50);    
    PORTCbits.RC2 = 0;
    PORTCbits.RC1 = 1;
    __delay_ms(50);    
    PORTCbits.RC1 = 0;
    PORTCbits.RC0 = 1;
    __delay_ms(50); 
    PORTAbits.RA5 = 0;
    PORTAbits.RA4 = 1;
    __delay_ms(50);
    PORTAbits.RA4 = 0;
    PORTAbits.RA2 = 1;
    __delay_ms(50);
    PORTAbits.RA2 = 0;
    PORTAbits.RA1 = 1;    
    __delay_ms(50);
    PORTCbits.RC0 = 0;
    PORTCbits.RC1 = 1;
    __delay_ms(50);
    PORTCbits.RC1 = 0;
    PORTCbits.RC2 = 1;
    __delay_ms(50);   
    PORTCbits.RC2 = 0;
    PORTCbits.RC3 = 1;
    __delay_ms(50);
    PORTAbits.RA1 = 0;
    PORTAbits.RA2 = 1;
    __delay_ms(50);
    PORTAbits.RA2 = 0;
    PORTAbits.RA4 = 1;
    __delay_ms(50);
    PORTCbits.RC3 = 0;
    PORTCbits.RC2 = 1;
    __delay_ms(50);
    PORTCbits.RC2 = 0;
    PORTCbits.RC1 = 1;
    __delay_ms(50);
    PORTAbits.RA4 = 0;
    PORTAbits.RA2 = 1;
    __delay_ms(50);
    PORTCbits.RC1 = 0;
    PORTCbits.RC2 = 1;
    __delay_ms(50);
    PORTCbits.RC2 = 0;
    PORTAbits.RA2 = 0;
    
    return;
}

void cross(void)
{
    PORTAbits.RA0 = 1;
    PORTCbits.RC0 = 1;
    __delay_ms(100);
    PORTAbits.RA0 = 0;
    PORTCbits.RC0 = 0;
    PORTAbits.RA1 = 1;
    PORTCbits.RC1 = 1;
    __delay_ms(100);
    PORTAbits.RA1 = 0;
    PORTCbits.RC1 = 0;
    PORTAbits.RA2 = 1;
    PORTCbits.RC2 = 1;
    __delay_ms(100);
    PORTAbits.RA2 = 0;
    PORTCbits.RC2 = 0;
    PORTAbits.RA4 = 1;
    PORTCbits.RC3 = 1;    
    __delay_ms(100);
    PORTAbits.RA4 = 0;
    PORTCbits.RC3 = 0;     
    PORTAbits.RA5 = 1;
    PORTCbits.RC4 = 1;
    __delay_ms(100);
    PORTAbits.RA5 = 0;
    PORTAbits.RA0 = 1;
    __delay_ms(100);
    PORTAbits.RA0 = 0;
    PORTCbits.RC4 = 0;
    PORTAbits.RA1 = 1;
    PORTCbits.RC3 = 1;
    __delay_ms(100);
    PORTAbits.RA1 = 0;
    PORTCbits.RC3 = 0;
    PORTAbits.RA2 = 1;
    PORTCbits.RC2 = 1;
    __delay_ms(100);
    PORTAbits.RA2 = 0;
    PORTCbits.RC2 = 0;  
    PORTAbits.RA4 = 1;
    PORTCbits.RC1 = 1;    
    __delay_ms(100);
    PORTAbits.RA4 = 0;
    PORTCbits.RC1 = 0;      
    PORTAbits.RA5 = 1;
    PORTCbits.RC0 = 1;      
    __delay_ms(100);
    PORTAbits.RA5 = 0;
    PORTCbits.RC0 = 0;      
    
    return;
}

void line(void)
{
    PORTCbits.RC0 = 1;
    PORTCbits.RC1 = 1;
    PORTCbits.RC2 = 1;
    PORTCbits.RC3 = 1;
    PORTCbits.RC4 = 1;
    
    PORTAbits.RA0 = 1;
    __delay_ms(100);
    PORTAbits.RA0 = 0;
    PORTAbits.RA1 = 1;
    __delay_ms(100);
    PORTAbits.RA1 = 0;
    PORTAbits.RA2 = 1;
    __delay_ms(100);
    PORTAbits.RA2 = 0;
    PORTAbits.RA4 = 1;
    __delay_ms(100);
    PORTAbits.RA4 = 0;
    PORTAbits.RA5 = 1;
    __delay_ms(100);
    PORTAbits.RA5 = 0;
    
    PORTCbits.RC0 = 0;
    PORTCbits.RC1 = 0;
    PORTCbits.RC2 = 0;
    PORTCbits.RC3 = 0;
    PORTCbits.RC4 = 0;
    return;
}

void full(void)
{
    PORTCbits.RC0 = 1;
    PORTCbits.RC1 = 1;
    PORTCbits.RC2 = 1;
    PORTCbits.RC3 = 1;
    PORTCbits.RC4 = 1;
    PORTAbits.RA0 = 1;
    __delay_ms(10);
    PORTAbits.RA0 = 0;
    PORTAbits.RA1 = 1;
    __delay_ms(10);
    PORTAbits.RA1 = 0;
    PORTAbits.RA2 = 1;
    __delay_ms(10);
    PORTAbits.RA2 = 0;
    PORTAbits.RA4 = 1;
    __delay_ms(10);
    PORTAbits.RA4 = 0;
    PORTAbits.RA5 = 1;
    __delay_ms(10);
    PORTAbits.RA5 = 0; 
    PORTCbits.RC0 = 0;
    PORTCbits.RC1 = 0;
    PORTCbits.RC2 = 0;
    PORTCbits.RC3 = 0;
    PORTCbits.RC4 = 0;    
    return;
}