/*
 * ConcreteCommand1.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include "ConcreteCommand1.h"
#include "Receiver.h"

ConcreteCommand1::ConcreteCommand1(Receiver &rec): receiver(rec)
{
	// TODO Auto-generated constructor stub

}

// The execute method calls the action on the Receiver.
void ConcreteCommand1::execute()
{
	receiver.performAction();
}
