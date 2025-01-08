/*
 * WeatherStation.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#include "WeatherStation.h"
#include <vector>
#include <algorithm>

void WeatherStation::registerObserver(Observer* observer)
{
	observers.push_back(observer);
}

void WeatherStation::removeObserver(Observer* observer)
{
	observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
}



void WeatherStation::notifyObservers()  {
	for (Observer* observer : observers)
	{
		observer->update(temperature, humidity, pressure);
	}
}

void WeatherStation::setMeasurements(float temp, float hum, float press)
{
	temperature = temp;
	humidity = hum;
	pressure = press;
	notifyObservers();
}

