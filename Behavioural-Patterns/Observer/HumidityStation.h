/*
 * HumidityStation.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef HUMIDITYSTATION_H_
#define HUMIDITYSTATION_H_

#include "Observer.h"
#include "Subject.h"
#include <vector>
#include <algorithm>

class HumidityStation : public Subject{
private:
	float humidity;
	std::vector<Observer*> observers;
public:
	virtual void registerObserver(Observer* observer) override;
	virtual void removeObserver(Observer* observer) override;
	virtual void notifyObservers() override;
	void setHumidity(float humidity);
};

#endif /* HUMIDITYSTATION_H_ */
