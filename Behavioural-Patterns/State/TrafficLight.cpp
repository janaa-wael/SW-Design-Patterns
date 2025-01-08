/*
 * TrafficLight.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#include "TrafficLight.h"
#include "RedState.h"
#include "TrafficLightState.h"

TrafficLight::TrafficLight() : state(new RedState())
{

}

void TrafficLight::setState(TrafficLightState* newState)
{
	delete state;
	state = newState;
}

void TrafficLight::change()
{
	state->handle();
}
