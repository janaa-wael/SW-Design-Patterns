/*
 * Display.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#include "Display.h"
#include <iostream>

void Display::update(float temperature, float humidity, float pressure)
{
	std::cout << "Display: Temperature = " << temperature
			  << "°C, Humidity = " << humidity
			  << "%, Pressure = " << pressure << " hPa"
			  << std::endl;
}

void Display::updatePressure(float pressure)
{
	std::cout << "Display: Pressure = " << pressure
			  << "hPa " << std::endl;
}

void Display::updateTemperature(float temperature)
{
	std::cout << "Display: Temperature = " << temperature
			  << "°C" << std::endl;
}

void Display::updateHumidity(float humidity)
{
	std::cout << "Display: Humidity = " << humidity
			  << "% " << std::endl;

}
