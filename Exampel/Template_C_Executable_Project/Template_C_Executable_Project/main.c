/*
 * Template_C_Executable_Project.c
 *
 * Created: 13.11.2026 09:46:41
 * Author : e5Damman
 */ 


#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include <stdint.h>
#include <stdbool.h>

#define OUTPUT				0xFF
#define INPUT				0x00

#define LEDA				PORTA
#define LEDB				PORTB
#define SWITCH				PINC




int main(void)
{
	
	DDRA=OUTPUT;
	DDRB=OUTPUT;
	DDRC=INPUT;
	
	LEDA=0;
	LEDB=0;
	
	while (1)
	{
		
		//Input
		
		
		
		//processing
		
		
		
		//output
		LEDA=
		
		
		//Delay
		_delay_ms(10);
		
		
	}
}