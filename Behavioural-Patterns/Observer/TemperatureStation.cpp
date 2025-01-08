/*
 * TemperatureStation.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#include "TemperatureStation.h"
#include <vector>
#include <algorithm>

void TemperatureStation::registerObserver(Observer* observer)
{
	observers.push_back(observer);
}

void TemperatureStation::removeObserver(Observer* observer)
{
	observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
}

void TemperatureStation::notifyObservers()
{
	for (Observer* observer : observers)
	{
		observer->updateTemperature(temperature);
	}
}

void TemperatureStation::setTemperature(float temp)
{
	temperature = temp;
	notifyObservers();
}
