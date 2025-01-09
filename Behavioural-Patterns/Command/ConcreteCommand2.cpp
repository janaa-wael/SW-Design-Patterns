/*
 * ConcreteCommand2.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: hp
 */

#include "ConcreteCommand2.h"
#include "Receiver.h"

ConcreteCommand2::ConcreteCommand2(Receiver &rec): receiver(rec)
{
	// TODO Auto-generated constructor stub

}

// The execute method calls the action on the Receiver.
void ConcreteCommand2::execute()
{
	receiver.performAction();
}
