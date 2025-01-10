/*
 * main.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "ChicagoCheesePizza.h"
#include "ChicagoPepperoniPizza.h"
#include "ChicagoPizzaFactory.h"
#include "NewYorkPizzaFactory.h"
#include "NewYorkCheesePizza.h"
#include "NewYorkPepperoniPizza.h"
#include "Pizza.h"
#include "PizzaFactory.h"
#include <iostream>

int main()
{
	NewYorkPizzaFactory NY_Pizza_Fac;
	ChicagoPizzaFactory CHI_Pizza_Fac;

	Pizza* Pizza1;
	Pizza* Pizza2;

	Pizza* Pizza3;
	Pizza* Pizza4;

	Pizza1 = NY_Pizza_Fac.createCheesePizza();
	Pizza2 = NY_Pizza_Fac.createPepperoniPizza();

	Pizza3 = CHI_Pizza_Fac.createCheesePizza();
	Pizza4 = CHI_Pizza_Fac.createPepperoniPizza();

	Pizza1->bake();
	Pizza1->cut();
	Pizza1->box();

	Pizza2->bake();
	Pizza2->cut();
	Pizza2->box();

	Pizza3->bake();
	Pizza3->cut();
	Pizza3->box();

	Pizza4->bake();
	Pizza4->cut();
	Pizza4->box();
}


