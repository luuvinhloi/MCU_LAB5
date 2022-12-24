/*
 * software_timer.c
 *
 *  Created on: Dec 13, 2022
 *      Author: LUUVINHLOI
 */

#include "software_timer.h"

int traffic_flag = 0;
int traffic_count = 0;

int timer1_flag = 0;
int timer2_flag = 0;
int timer3_flag = 0;
int timer1_count = 0;
int timer2_count = 0;
int timer3_count = 0;



void setTimer1(int duration){
	timer1_flag = 0;
	timer1_count = duration/TICK;
}

void setTimer2(int duration){
	timer2_flag = 0;
	timer2_count = duration/TICK;
}

void setTimer3(int duration){
	timer3_flag = 0;
	timer3_count = duration/TICK;
}

void timerRun(){

	if(timer1_count >0){
		timer1_count--;
		if(timer1_count<=0){
			timer1_flag = 1;
		}
	}

	if(timer2_count > 0){
		timer2_count--;
		if(timer2_count <= 0){
			timer2_flag = 1;
		}
	}

	if(timer3_count > 0){
		timer3_count--;
		if(timer3_count<=0){
			timer3_flag = 1;
		}
	}
}
