/*
 * Subject.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include "Observer.h"

class Subject {
public:
	virtual void registerObserver(Observer* observer) = 0;
	virtual void removeObserver(Observer* observer) = 0;
	virtual void notifyObservers() = 0;
};

#endif /* SUBJECT_H_ */
