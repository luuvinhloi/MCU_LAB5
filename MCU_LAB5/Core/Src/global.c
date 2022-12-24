/*
 * global.c
 *
 *  Created on: Dec 13, 2022
 *      Author: LUUVINHLOI
 */

#include "global.h"

uint8_t parser = INIT_MODE;
uint8_t led = INIT;
uint8_t sensor = READER_INIT;

uint8_t temp = 0;
uint32_t ADC_value = 0;
uint8_t buffer_flag = 0;

uint8_t print = 0;
