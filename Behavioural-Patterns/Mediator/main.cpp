/*
 * main.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include <iostream>
#include "AirTrafficControlTower.h"
#include "Airplane.h"
#include "CommercialAirplane.h"
#include "AirportControlTower.h"

int main()
{

	AirTrafficControlTower* controlTower = new AirportControlTower();

	Airplane* airplane1 = new CommercialAirplane(controlTower);
	Airplane* airplane2 = new CommercialAirplane(controlTower);

	airplane1->requestTakeOff();

	airplane2->requestTakeOff();

	airplane1->requestLanding();
	airplane2->requestLanding();

}


