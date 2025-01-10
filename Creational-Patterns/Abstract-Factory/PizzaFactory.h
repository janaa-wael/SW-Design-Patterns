/*
 * PizzaFactory.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef PIZZAFACTORY_H_
#define PIZZAFACTORY_H_

#include "Pizza.h"

class PizzaFactory {
public:
	virtual Pizza* createCheesePizza() = 0;
	virtual Pizza* createPepperoniPizza() = 0;
};

#endif /* PIZZAFACTORY_H_ */
