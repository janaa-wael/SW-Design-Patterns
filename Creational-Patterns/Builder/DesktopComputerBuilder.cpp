/*
 * DesktopComputerBuilder.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "DesktopComputerBuilder.h"


void DesktopComputerBuilder::buildCPU(const std::string& cpu)
{
	computer_.setCPU(cpu);
}

void DesktopComputerBuilder::buildMemory(const std::string& memory)
{
	computer_.setMemory(memory);
}

void DesktopComputerBuilder::buildStorage(const std::string& storage)
{
	computer_.setStorage(storage);
}

Computer DesktopComputerBuilder::getResult()
{
	return computer_;
}
