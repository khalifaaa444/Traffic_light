/*
 * app.c
 *
 * Created: 12/17/2022 3:04:30 PM
 *  Author: ebrahem
 */ 
#include "app.h"

void app_init()
{
	//Timer_init();
	
	//INT_init();
	//INT_mode();
	//INT_EXT();
	LED_init(Car_LedRed_Port,Car_LedRed_Pin);
	LED_init(Car_LedYellow_Port,Car_LedYellow_Pin);
	LED_init(Car_LedGreen_Port,Car_LedGreen_Pin);
	LED_init(pedestrian_LedRed_Port,pedestrian_LedRed_Pin);
	LED_init(pedestrian_LedYellow_Port,pedestrian_LedYellow_Pin);
	LED_init(pedestrian_LedGreen_Port,pedestrian_LedGreen_Pin);
	//button_init(Button_EXT_PORT,Button_EXT_PIN);
}

void app_start()
{
	normal_mode();
}

