/*
 * main.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

int main()
{
	Circle* circle = new Circle(3);
	Rectangle* rectangle = new Rectangle(7,8);

	Shape* cloned_circle = circle->clone();
	Shape* cloned_rectangle = rectangle->clone();

	cloned_circle->draw();
	cloned_rectangle->draw();
}


