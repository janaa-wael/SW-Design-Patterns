/*
 * ComputerAssembler.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef COMPUTERASSEMBLER_H_
#define COMPUTERASSEMBLER_H_

#include "ComputerBuilder.h"
#include "Computer.h"

class ComputerAssembler {
public:
	Computer assembleComputer(ComputerBuilder& builder);
};

#endif /* COMPUTERASSEMBLER_H_ */
