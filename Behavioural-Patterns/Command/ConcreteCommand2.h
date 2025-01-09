/*
 * ConcreteCommand2.h
 *
 *  Created on: Jan 9, 2025
 *      Author: hp
 */

#ifndef CONCRETECOMMAND2_H_
#define CONCRETECOMMAND2_H_

#include "Receiver.h"
#include  "Command.h"

class ConcreteCommand2 : public Command{
private: Receiver &receiver;
public:
	ConcreteCommand2(Receiver &rec);
	virtual void execute() override;
};

#endif /* CONCRETECOMMAND2_H_ */
