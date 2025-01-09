/*
 * Invoker.h
 *
 *  Created on: Jan 9, 2025
 *      Author: hp
 */

#ifndef INVOKER_H_
#define INVOKER_H_

#include "Command.h"


class Invoker {
private: Command* command;
public:
	void setCommand(Command* cmd);
	void executeCommand();
};

#endif /* INVOKER_H_ */
