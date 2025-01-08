/*
 * YellowState.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef YELLOWSTATE_H_
#define YELLOWSTATE_H_

#include "TrafficLightState.h"

class YellowState : public TrafficLightState{
public:
	virtual void handle() override;
};
#endif /* YELLOWSTATE_H_ */
