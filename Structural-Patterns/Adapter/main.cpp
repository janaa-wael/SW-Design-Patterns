/*
 * main.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: hp
 */

#include <iostream>
#include "LegacyPrinter.h"
#include "ModernComputer.h"
#include "PrinterAdapter.h"

int main()
{
	ModernComputer computer;
	PrinterAdapter adapter;

	computer.sendCommand("Hello, this is Jana!");
	adapter.sendCommand("Hello, this is Jana!");
}


