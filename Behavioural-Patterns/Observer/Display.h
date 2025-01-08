/*
 * Display.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include "Observer.h"

class Display : public Observer{
public:
	void update(float temperature, float humidity, float pressure);
	virtual void updatePressure(float pressure);
	virtual void updateTemperature(float temperature);
	virtual void updateHumidity(float humidity);
};

#endif /* DISPLAY_H_ */
