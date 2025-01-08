/*
 * TemperatureStation.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef TEMPERATURESTATION_H_
#define TEMPERATURESTATION_H_

#include "Subject.h"
#include "Observer.h"
#include <vector>

class TemperatureStation : public Subject{
private:
	float temperature;
	std::vector<Observer*> observers;
public:
	virtual void registerObserver(Observer* observer) override;
	virtual void removeObserver(Observer* observer) override;
	virtual void notifyObservers() override;
	void setTemperature(float temp);
};

#endif /* TEMPERATURESTATION_H_ */
