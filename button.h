/*
 * button.h
 *
 * Created: 12/17/2022 11:42:50 AM
 *  Author: ebrahem
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "DIO.h"

void button_init(uint8_t port_num,uint8_t pin_num);

void button_GetState(uint8_t port_num,uint8_t pin_num,uint8_t* state);

#endif /* BUTTON_H_ */