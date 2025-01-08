/*
 * Observer.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

class Observer {
public:
	virtual void update(float temp, float humidity, float pressure);
	virtual void updatePressure(float pressure);
	virtual void updateTemperature(float temperature);
	virtual void updateHumidity(float humidity);
};

#endif /* OBSERVER_H_ */
