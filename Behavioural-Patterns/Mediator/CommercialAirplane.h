/*
 * CommercialAirplane.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef COMMERCIALAIRPLANE_H_
#define COMMERCIALAIRPLANE_H_

#include "Airplane.h"
#include "AirTrafficControlTower.h"

class CommercialAirplane : public Airplane{
private: AirTrafficControlTower* mediator;
public:
		CommercialAirplane(AirTrafficControlTower* mediator);
		virtual void requestTakeOff() override;
		virtual void requestLanding() override;
		virtual void notifyAirTrafficControl(const std::string& msg) override;
};

#endif /* COMMERCIALAIRPLANE_H_ */
