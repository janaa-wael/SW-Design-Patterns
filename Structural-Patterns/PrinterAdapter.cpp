/*
 * PrinterAdapter.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: hp
 */

#include "PrinterAdapter.h"
#include <iostream>

void PrinterAdapter::sendCommand(const std::string& command)
{
	std::string upperCaseString = command;
	for(char& c:upperCaseString)
	{
		c = std::toupper(c);
	}
	Printer.printInUpperCase(upperCaseString);
}
