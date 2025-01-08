/*
 * Motorcycle.h
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#ifndef MOTORCYCLE_H_
#define MOTORCYCLE_H_

#include "VehicleTemplate.h"

class Motorcycle : public VehicleTemplate{
public:
	Motorcycle() = default;
	virtual void assembleBody() override;
	virtual void installEngine() override;
	virtual void addWheels() override;
	virtual ~Motorcycle() = default;
};

#endif /* MOTORCYCLE_H_ */
