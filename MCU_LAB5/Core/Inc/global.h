/*
 * global.h
 *
 *  Created on: Dec 13, 2022
 *      Author: LUUVINHLOI
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include <stdio.h>
#include <string.h>
#include "software_timer.h"
#include "main.h"

#define LED_PERIOD 			500
#define PARSER_WAIT 		3000
#define SENSOR_READ_PERIOD 	500
#define BUFFER_SIZE 		30

#define READER_INIT 		1
#define READER_READ 		2
#define READER_WAIT 		3
#define READER_PRINT 		4

#define INIT_MODE 			11
#define READ_MODE 			12
#define PRINT_MODE 			13
#define WAIT_MODE 			14

#define INIT 				21
#define LED_BLINKY 			22

extern uint8_t parser;
extern uint8_t led;
extern uint8_t sensor;
extern uint8_t temp;
extern uint32_t ADC_value;
extern uint8_t buffer_flag;
extern uint8_t print;

#endif /* INC_GLOBAL_H_ */
