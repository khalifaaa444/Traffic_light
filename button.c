/*
 * button.c
 *
 * Created: 12/17/2022 2:17:49 PM
 *  Author: ebrahem
 */ 
#include "button.h"
void button_init(uint8_t port_num,uint8_t pin_num)
{
	dio_init(port_num,pin_num,IN);
}
/*
void button_GetState(uint8_t port_num,uint8_t pin_num,uint8_t* state)
{
	dio_read(port_num,pin_num,state);
}
*/