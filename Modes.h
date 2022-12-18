/*
 * Three_Leds.h
 *
 * Created: 12/17/2022 5:23:12 PM
 *  Author: ebrahem
 */ 


#ifndef MODES_H_
#define MODES_H_


#include "button.h"
#include "Interrupt.h"
#include "Timer.h"
#include "LED.h"



void normal_mode();
void pedestrian_mode();
void Cars_stop();
void pedestrian_go();
void Cars_ready();
void pedestrian_ready();
void Cars_go();
void pedestrian_stop();


#endif /* MODES_H_ */