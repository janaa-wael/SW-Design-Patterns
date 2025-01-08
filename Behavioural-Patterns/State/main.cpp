/*
 * main.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#include "RedState.h"
#include "GreenState.h"
#include "YellowState.h"
#include "TrafficLight.h"
#include "TrafficLightState.h"

int main()
{
	TrafficLight trafficLight;

	trafficLight.change(); // Initial state: Red
	trafficLight.setState(new GreenState());
	trafficLight.change(); // State changed to Green
	trafficLight.setState(new YellowState());
	trafficLight.change(); // State changed to Green
}



