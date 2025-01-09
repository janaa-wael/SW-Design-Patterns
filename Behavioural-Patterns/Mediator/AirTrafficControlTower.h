/*
 * AirTrafficControlTower.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef AIRTRAFFICCONTROLTOWER_H_
#define AIRTRAFFICCONTROLTOWER_H_

#include "Airplane.h"

//Mediator Interface
class AirTrafficControlTower {
public:
	virtual void requestTakeOff(Airplane* airplane) = 0;
	virtual void requestLanding(Airplane* airplane) = 0;
};

#endif /* AIRTRAFFICCONTROLTOWER_H_ */
