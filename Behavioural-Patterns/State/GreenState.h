/*
 * GreenState.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef GREENSTATE_H_
#define GREENSTATE_H_

#include "TrafficLightState.h"

class GreenState : public TrafficLightState {
public:
	virtual void handle() override;
};

#endif /* GREENSTATE_H_ */
