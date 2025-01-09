/*
 * ConcreteCommand1.h
 *
 *  Created on: Jan 9, 2025
 *      Author: hp
 */

#ifndef CONCRETECOMMAND1_H_
#define CONCRETECOMMAND1_H_

#include "Command.h"
#include "Receiver.h"

class ConcreteCommand1 : public Command{
private: Receiver &receiver;
public:
	ConcreteCommand1(Receiver &rec);
	virtual void execute() override;
};

#endif /* CONCRETECOMMAND1_H_ */
