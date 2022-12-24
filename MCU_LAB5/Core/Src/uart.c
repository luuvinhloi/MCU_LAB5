/*
 * uart_communiation_fsm.c
 *
 *  Created on: Dec 13, 2022
 *      Author: LUUVINHLOI
 */

#include "uart.h"

void uart_communiation_fsm(void){
	switch(sensor) {
		case READER_INIT:
			setTimer2(TICK);
			sensor = READER_READ;
		break;

		case READER_READ:
			if(print == 0) {
				sensor = READER_WAIT;
			}

			if(timer2_flag == 1) {
				setTimer2(SENSOR_READ_PERIOD);
				readSensor();
			}
		break;

		case READER_WAIT:
			if(print == 1) {
				sensor = READER_PRINT;
			}
		break;

		case READER_PRINT:
			setTimer2(SENSOR_READ_PERIOD);
			readSensor();
			sensor = READER_READ;
			break;
	}
}
