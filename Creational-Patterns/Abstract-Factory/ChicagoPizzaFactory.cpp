/*
 * ChicagoPizzaFactory.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "ChicagoPizzaFactory.h"
#include "ChicagoCheesePizza.h"
#include "ChicagoPepperoniPizza.h"
#include "Pizza.h"

Pizza* ChicagoPizzaFactory::createCheesePizza()
{
	return new ChicagoCheesePizza();
}

Pizza* ChicagoPizzaFactory::createPepperoniPizza()
{
	return new ChicagoPepperoniPizza();
}

