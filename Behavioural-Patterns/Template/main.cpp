/*
 * main.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#include <iostream>
#include "VehicleTemplate.h"
#include "Car.h"
#include "Motorcycle.h"

int main()
{
	std::cout << "Building a car:\n";
	Car car;
	car.buildVehicle();

	std::cout << "Building a motorcycle:\n";
	Motorcycle motorcycle;
	motorcycle.buildVehicle();

}


