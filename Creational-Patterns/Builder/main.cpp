/*
 * main.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "Computer.h"
#include "ComputerAssembler.h"
#include "ComputerBuilder.h"
#include "DesktopComputerBuilder.h"
#include <iostream>

int main()
{
	DesktopComputerBuilder builder1;
	ComputerAssembler assembler;
	Computer desktop = assembler.assembleComputer(builder1);

	std::cout << "Desktop computer configuration: " << std::endl;
	desktop.display();
}

