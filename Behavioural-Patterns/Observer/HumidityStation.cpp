/*
 * HumidityStation.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#include "HumidityStation.h"

void HumidityStation::registerObserver(Observer* observer)
{
	observers.push_back(observer);
}

void HumidityStation::removeObserver(Observer* observer)
{
	observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
}

void HumidityStation::notifyObservers()
{
	for(Observer* observer : observers)
	{
		observer->updateHumidity(humidity);
	}
}

void HumidityStation::setHumidity(float humidity)
{
	this->humidity = humidity;
	notifyObservers();
}

