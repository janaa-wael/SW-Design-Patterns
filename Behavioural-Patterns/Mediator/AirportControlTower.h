/*
 * AirportControlTower.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef AIRPORTCONTROLTOWER_H_
#define AIRPORTCONTROLTOWER_H_

#include "AirTrafficControlTower.h"

class AirportControlTower : public AirTrafficControlTower{
public:
	virtual void requestTakeOff(Airplane* airplane) override;
	virtual void requestLanding(Airplane* airplane) override;
};

#endif /* AIRPORTCONTROLTOWER_H_ */
