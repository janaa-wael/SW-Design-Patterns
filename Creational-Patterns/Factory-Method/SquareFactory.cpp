/*
 * SquareFactory.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "SquareFactory.h"
#include "Shape.h"
#include "Square.h"

Shape* SquareFactory::createShape()
{
	return new Square();
}
