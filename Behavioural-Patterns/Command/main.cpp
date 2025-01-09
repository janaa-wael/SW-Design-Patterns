/*
 * main.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include <iostream>
#include "Command.h"
#include "ConcreteCommand1.h"
#include "ConcreteCommand2.h"
#include "Invoker.h"
#include "Receiver.h"

int main()
{
	// Create a Receiver instance.
	Receiver receiver;

	// Create a ConcreteCommand, passing the Receiver to it.
	ConcreteCommand1 command1(receiver);
	ConcreteCommand1 command2(receiver);

	// Create an Invoker.
	Invoker invoker1;
	Invoker invoker2;

	// Set the command to be executed by the invoker.
	invoker1.setCommand(&command1);
	invoker2.setCommand(&command2);

	// Execute the command.
	invoker1.executeCommand();
	invoker2.executeCommand();
}



