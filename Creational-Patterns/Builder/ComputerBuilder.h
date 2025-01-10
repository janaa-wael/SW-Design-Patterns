/*
 * ComputerBuilder.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef COMPUTERBUILDER_H_
#define COMPUTERBUILDER_H_

#include <string>
#include <iostream>
#include "Computer.h"

class ComputerBuilder {
public:
	virtual void buildCPU(const std::string& cpu) = 0;
	virtual void buildMemory(const std::string& memory) = 0;
	virtual void buildStorage(const std::string& storage) = 0;
	virtual Computer getResult() = 0;
};

#endif /* COMPUTERBUILDER_H_ */
