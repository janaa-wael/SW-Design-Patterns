/*
 * Car.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "Car.h"
#include "Lights.h"
#include "Engine.h"

void Car::StartCar()
{
	engine.Start();
	lights.TurnOn();
}

void Car::StopCar()
{
	engine.Stop();
	lights.TurnOff();
}
