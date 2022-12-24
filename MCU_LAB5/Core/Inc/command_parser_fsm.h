/*
 * command_parser.h
 *
 *  Created on: Dec 13, 2022
 *      Author: LUUVINHLOI
 */

#ifndef INC_COMMAND_PARSER_FSM_H_
#define INC_COMMAND_PARSER_FSM_H_

#include "global.h"

void command_parser_fsm(void);
void update_Buffer(uint8_t temp);
void clear(void);
int isRST(void);
int isOK(void);

#endif /* INC_COMMAND_PARSER_FSM_H_ */
