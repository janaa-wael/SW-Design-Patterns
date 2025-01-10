/*
 * Computer.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */
#include <iostream>
#include "Computer.h"

void Computer::setCPU(const std::string& cpu)
{
	cpu_ = cpu;
}

void Computer::setMemory(const std::string& memory)
{
	memory_ = memory;
}

void Computer::setStorage(const std::string& storage)
{
	storage_ = storage;
}

void Computer::display()
{
	std::cout << "CPU: " << cpu_ << std::endl;
	std::cout << "Memory: " << memory_ << std::endl;
}
