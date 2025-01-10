/*
 * main.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "IceCream.h"
#include "ChocolateDecorator.h"
#include "IceCreamDecorator.h"
#include "CaramelDecorator.h"
#include "VanillaIceCream.h"
#include <iostream>

int main()
{
	VanillaIceCream* vanilla_ic = new VanillaIceCream;
	std::cout << "Order 1:\nDescription: " << vanilla_ic->getDescription() << "\nCost: " << vanilla_ic->cost() << std::endl;


	ChocolateDecorator* chocolate_ic = new ChocolateDecorator(vanilla_ic);
	std::cout << "Order 2:\nDescription: " << chocolate_ic->getDescription() << "\nCost: " << chocolate_ic->cost() << std::endl;

	CaramelDecorator* caramel_ic = new CaramelDecorator(vanilla_ic);
	std::cout << "Order 3:\nDescription: " << caramel_ic->getDescription() << "\nCost: " << caramel_ic->cost() << std::endl;


}
