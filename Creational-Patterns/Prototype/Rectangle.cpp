/*
 * Rectangle.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */
#include <iostream>
#include "Rectangle.h"
#include "Shape.h"

Rectangle::Rectangle(double w, double h)
: width(w), height(h)
{

}
Shape* Rectangle::clone() const
{
	return new Rectangle(*this);
}
void Rectangle::draw() const
{
	std::cout << "Drawing a rectangle with width " << width << " and height " << height << std::endl;
}
