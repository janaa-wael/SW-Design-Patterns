/*
 * Circle.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "Circle.h"
#include "Shape.h"
#include <iostream>

Circle::Circle(double r)
: radius(r)
{

}

Shape* Circle::clone() const
{
	return new Circle(*this);
}

void Circle::draw() const
{
	std::cout << "Drawing a circle with radius " << radius << std::endl;
}
