/*
 * AirportControlTower.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include "AirportControlTower.h"
#include "Airplane.h"
#include "AirTrafficControlTower.h"

void AirportControlTower::requestTakeOff(Airplane* airplane)
{
	airplane->notifyAirTrafficControl("Requesting takeoff clearance.");
}

void AirportControlTower::requestLanding(Airplane* airplane)
{
	airplane->notifyAirTrafficControl("Requesting landing clearance.");
}
