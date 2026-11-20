 /*********************************************************************************\
 *
 * MMMMMMMMMMMM   SSSSSSSSSSSS   WW   WW   WW   MECHATRONIK
 * MM   MM   MM   SS             WW   WW   WW   SCHULE
 * MM   MM   MM   SSSSSSSSSSSS   WW   WW   WW   WINTERTHUR
 * MM   MM   MM             SS   WW   WW   WW
 * MM   MM   MM   SSSSSSSSSSSS   WWWWWWWWWWWW   www.msw.ch
 *
 *
 * Template_C_Executable_Project.c
 *
 * Filename: $projectname$
 *
 * Created: 13.11.2026 $time$
 * Author : $username$
 *
 \*********************************************************************************/

//Includes

 #include <avr/io.h>
 #define F_CPU 16000000UL
 #include <util/delay.h>
 #include <stdint.h>
 #include <stdbool.h>

// Defines

 #define OUTPUT				0xFF
 #define INPUT				0x00

 #define LEDA				PORTA
 #define LEDB				PORTB
 #define SWITCH				PINC




 int main(void)
 {
	 
	 // Variablen
	 
	 
	 
	 // Initialisierung
	 
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
		 
		 
	 } // end while
 } // end main