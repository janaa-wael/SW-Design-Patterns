/*
 * Invoker.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: hp
 */

#include "Invoker.h"
#include "Command.h"

void Invoker::setCommand(Command* cmd)
{
	command = cmd;
}

void Invoker::executeCommand()
{
	command->execute();
}
