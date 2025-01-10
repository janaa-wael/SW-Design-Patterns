/*
 * ChocolateDecorator.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "ChocolateDecorator.h"


ChocolateDecorator::ChocolateDecorator(IceCream* ic)
: IceCreamDecorator(ic)
{

}

std::string ChocolateDecorator::getDescription() const
{
	return iceCream->getDescription() + " with chocolate";
}

double ChocolateDecorator::cost() const
{
	return iceCream->cost() + 100.0;
}
;
