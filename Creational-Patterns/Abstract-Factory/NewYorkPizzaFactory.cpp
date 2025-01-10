/*
 * NewYorkPizzaFactory.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */
#include <iostream>
#include "NewYorkPizzaFactory.h"
#include "NewYorkCheesePizza.h"
#include "NewYorkPepperoniPizza.h"
#include "Pizza.h"

Pizza* NewYorkPizzaFactory::createCheesePizza()
{
	return new NewYorkCheesePizza();
}

Pizza* NewYorkPizzaFactory::createPepperoniPizza()
{
	return new NewYorkPepperoniPizza();
}
