/*
 * ledBlinky.c
 *
 *  Created on: Dec 13, 2022
 *      Author: LUUVINHLOI
 */

#include "ledBlinky.h"

void ledBlinky(void) {
	switch(led) {
		case INIT:
			setTimer3(TICK);
			led = LED_BLINKY;
			break;

		case LED_BLINKY:
			if(timer3_flag == 1) {
				setTimer3(LED_PERIOD);
				HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			}
		break;
	}
}
