/*
 * CaramelDecorator.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "CaramelDecorator.h"
#include "IceCreamDecorator.h"
#include <iostream>

CaramelDecorator::CaramelDecorator(IceCream* ic)
: IceCreamDecorator(ic)
{

}

std::string CaramelDecorator::getDescription() const
{
	return iceCream->getDescription() + " with caramel";
}

double CaramelDecorator::cost() const
{
	return iceCream->cost() + 180;
}

