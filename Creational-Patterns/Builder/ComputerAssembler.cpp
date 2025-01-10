/*
 * ComputerAssembler.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "ComputerAssembler.h"
#include "ComputerBuilder.h"

Computer ComputerAssembler::assembleComputer(ComputerBuilder& builder)
{
	builder.buildCPU("Intel i7");
	builder.buildMemory("16 GB");
	builder.buildStorage("512 GB SSD");
	return builder.getResult();
}
