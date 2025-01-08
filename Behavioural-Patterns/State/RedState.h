/*
 * RedState.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef REDSTATE_H_
#define REDSTATE_H_

#include "TrafficLightState.h"

class RedState : public TrafficLightState{
public:
	virtual void handle() override;
};

#endif /* REDSTATE_H_ */
