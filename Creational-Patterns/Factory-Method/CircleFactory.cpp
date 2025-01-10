/*
 * CircleFactory.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "CircleFactory.h"
#include "Shape.h"
#include "Circle.h"

Shape* CircleFactory::createShape()
{
	return new Circle();
}

