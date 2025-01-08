/*
 * PressureStation.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#include "PressureStation.h"
#include "Observer.h"
#include <vector>
#include <algorithm>

void PressureStation::registerObserver(Observer* observer)
{
	observers.push_back(observer);
}

void PressureStation::removeObserver(Observer* observer)
{
	observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
}

void PressureStation::notifyObservers()
{
	for(Observer* observer : observers)
	{
		observer->updatePressure( pressure);
	}
}

void PressureStation::setPressure(float pressure)
{
	this->pressure = pressure;
	notifyObservers();
}
