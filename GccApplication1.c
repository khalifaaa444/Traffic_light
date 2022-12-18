/*
 * GccApplication1.c
 *
 * Created: 12/14/2022 6:15:14 AM
 *  Author: ebrahem
 */ 


#include <avr/io.h>
//#include "app.h"
int main(void)
{
	//app_init();
	//dio_init(PORT_A,0,1);
	DDRA = 0b11111111;
	//DDRB |= 0b11111111;
    while(1)
    {
		
			//LED_on(PORT_A,0);
			//LED_off(PORT_A,1);
	//		LED_off(PORT_A,2);
			
		
			//LED_on(PORT_B,2);
			//LED_off(PORT_B,1);
			//LED_off(PORT_B,0);


	//	LED_on(PORT_A,0);
		PORTA |= (1<<0);
		//dio_write(PORT_A,0,HIGH);
		//LED_on(PORT_A,0);	
    }
}
/*
ISR(EXT_INT_0)
{
	pedestrian_mode();
}
*/