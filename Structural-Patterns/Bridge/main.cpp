/*
 * main.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */


#include "Circle.h"
#include "Shape.h"
#include "Square.h"
#include "Renderer.h"
#include "RasterRenderer.h"
#include "VectorRenderer.h"
#include <iostream>

int main()
{
	VectorRenderer vectorRenderer;
	RasterRenderer rasterRenderer;

	Circle circle(vectorRenderer);
	Square square(rasterRenderer);

	circle.draw();  // Output: Drawing a circle Rendering as a vector
	square.draw();
}

