/*
 * main.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include <iostream>
#include "ShapeFactory.h"
#include "CircleFactory.h"
#include "SquareFactory.h"
#include "Shape.h"
#include "Circle.h"
#include "Square.h"


int main()
{
	CircleFactory circleFactory;
	SquareFactory squareFactory;
	Shape* square = squareFactory.createShape();
	Shape* circle = circleFactory.createShape();

	square->draw();
	circle->draw();

}
