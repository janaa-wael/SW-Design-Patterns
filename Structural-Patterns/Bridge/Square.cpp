/*
 * Square.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */
#include "Renderer.h"
#include "Square.h"
#include <iostream>

Square::Square(Renderer& renderer)
:renderer(renderer)
{

}

void Square::draw()
{
	std::cout << "Drawing a square" << std::endl;
}
