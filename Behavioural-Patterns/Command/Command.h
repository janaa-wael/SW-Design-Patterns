/*
 * Command.h
 *
 *  Created on: Jan 9, 2025
 *      Author: hp
 */

#ifndef COMMAND_H_
#define COMMAND_H_
//Command Interface
class Command {
public:
	virtual void execute() = 0;
};

#endif /* COMMAND_H_ */
