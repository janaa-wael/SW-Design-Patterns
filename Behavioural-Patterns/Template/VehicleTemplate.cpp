/*
 * VehicleTemplate.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#include <iostream>
#include "VehicleTemplate.h"

void VehicleTemplate::buildVehicle()
{
	assembleBody();
	installEngine();
	addWheels();
	std::cout << "Vehicle is ready!\n";
}

