/*
 * TrafficLight.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef TRAFFICLIGHT_H_
#define TRAFFICLIGHT_H_

#include "TrafficLightState.h"

class TrafficLight {
private: TrafficLightState* state;
public:
	TrafficLight();
	void setState(TrafficLightState* newState);
	void change();
};

#endif /* TRAFFICLIGHT_H_ */
