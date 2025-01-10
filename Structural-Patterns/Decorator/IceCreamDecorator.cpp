/*
 * IceCreamDecorator.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "IceCreamDecorator.h"
#include <string>

IceCreamDecorator::IceCreamDecorator(IceCream* ic)
: iceCream(ic)
{

}
std::string IceCreamDecorator::getDescription() const
{
	return iceCream->getDescription();
}

double IceCreamDecorator::cost() const
{
	return iceCream->cost();
}
