/*
 * Circle.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */
#include <iostream>
#include "Circle.h"
#include "Renderer.h"

Circle::Circle(Renderer& renderer)
:renderer(renderer)
{

}

void Circle::draw()
{
	std::cout << "Drawing a circle " << std::endl;
}

