/*
 * Car.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef CAR_H_
#define CAR_H_

#include "Engine.h"
#include "Lights.h"

class Car {
private:
		Engine engine;
		Lights lights;
public:
	void StartCar();
	void StopCar();
};

#endif /* CAR_H_ */
