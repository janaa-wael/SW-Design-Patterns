/*
 * NewYorkPizzaFactory.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef NEWYORKPIZZAFACTORY_H_
#define NEWYORKPIZZAFACTORY_H_

#include "PizzaFactory.h"

class NewYorkPizzaFactory : public PizzaFactory{
public:
		virtual Pizza* createCheesePizza() override;
		virtual Pizza* createPepperoniPizza() override;

};

#endif /* NEWYORKPIZZAFACTORY_H_ */
