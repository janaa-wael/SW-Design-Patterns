/*
 * PressureStation.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef PRESSURESTATION_H_
#define PRESSURESTATION_H_

#include "Observer.h"
#include "Subject.h"
#include <vector>
#include <algorithm>

class PressureStation : public Subject{
public:
private:
	float pressure;
	std::vector<Observer*> observers;
public:
	virtual void registerObserver(Observer* observer) override;
	virtual void removeObserver(Observer* observer) override;
	virtual void notifyObservers() override;
	void setPressure(float pressure);
};

#endif /* PRESSURESTATION_H_ */
