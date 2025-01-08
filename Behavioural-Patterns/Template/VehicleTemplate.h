/*
 * VehicleTemplate.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef VEHICLETEMPLATE_H_
#define VEHICLETEMPLATE_H_

class VehicleTemplate {
public:
	VehicleTemplate() = default;
	void buildVehicle();
	virtual void assembleBody() = 0;
	virtual void installEngine() = 0;
	virtual void addWheels() = 0;
	virtual ~VehicleTemplate() = default;
};

#endif /* VEHICLETEMPLATE_H_ */
