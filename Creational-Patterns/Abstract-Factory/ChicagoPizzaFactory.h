/*
 * ChicagoPizzaFactory.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef CHICAGOPIZZAFACTORY_H_
#define CHICAGOPIZZAFACTORY_H_

#include "PizzaFactory.h"

class ChicagoPizzaFactory : public PizzaFactory{
public:
		virtual Pizza* createCheesePizza() override;
		virtual Pizza* createPepperoniPizza() override;

};

#endif /* CHICAGOPIZZAFACTORY_H_ */
