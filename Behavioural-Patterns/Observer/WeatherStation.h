/*
 * WeatherStation.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef WEATHERSTATION_H_
#define WEATHERSTATION_H_

#include "Subject.h"
#include "Observer.h"
#include <vector>

class WeatherStation : public Subject{
private:
	float temperature;
	float humidity;
	float pressure;
	std::vector<Observer*> observers;

public:
	virtual void registerObserver(Observer* observer) override;
	virtual void removeObserver(Observer* observer) override;
	virtual void notifyObservers() override;
	void setMeasurements(float temp, float hum, float press);
};

#endif /* WEATHERSTATION_H_ */
