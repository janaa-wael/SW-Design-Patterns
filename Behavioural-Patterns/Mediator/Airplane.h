/*
 * Airplane.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef AIRPLANE_H_
#define AIRPLANE_H_

#include <string>

//Colleague Interface
class Airplane {
public:
	virtual void requestTakeOff() = 0;
	virtual void requestLanding() = 0;
	virtual void notifyAirTrafficControl(const std::string& msg) = 0;
};

#endif /* AIRPLANE_H_ */
