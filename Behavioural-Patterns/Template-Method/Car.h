/*
 * Car.h
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#ifndef CAR_H_
#define CAR_H_

#include "VehicleTemplate.h"

class Car : public VehicleTemplate{
public:
	Car() = default;
	void assembleBody() override;
	void installEngine() override;
	void addWheels() override;
	virtual ~Car() = default;
};

#endif /* CAR_H_ */
