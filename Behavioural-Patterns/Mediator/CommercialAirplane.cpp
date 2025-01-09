/*
 * CommercialAirplane.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include <iostream>
#include "CommercialAirplane.h"
#include "AirportControlTower.h"

CommercialAirplane::CommercialAirplane(AirTrafficControlTower* mediator)
: mediator(mediator)
{

}

void CommercialAirplane::requestTakeOff()
{
	mediator->requestTakeOff(this);
}

void CommercialAirplane::requestLanding()
{
	mediator->requestLanding(this);
}

void CommercialAirplane::notifyAirTrafficControl(const std::string& msg)
{
	std::cout << "Commercial Airplane: " << msg << std::endl;
}
