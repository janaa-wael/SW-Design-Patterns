/*
 * main.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */
#include <iostream>

#include "Observer.h"
#include "WeatherStation.h"
#include "TemperatureStation.h"
#include "PressureStation.h"
#include "HumidityStation.h"
#include "Display.h"

int main()
{
	Display display1;
	Display display2;
	Display display3;
	Display display4;
	WeatherStation weatherStation;
	TemperatureStation temperatureStation;
	PressureStation pressureStation;
	HumidityStation humidityStation;

	weatherStation.registerObserver(&display1);
	weatherStation.registerObserver(&display2);
	weatherStation.setMeasurements(1,2,3);

	weatherStation.removeObserver(&display2);
	temperatureStation.registerObserver(&display2);
	temperatureStation.registerObserver(&display3);
	temperatureStation.setTemperature(10);

	humidityStation.registerObserver(&display4);
	humidityStation.setHumidity(6);

}



