/*
 * RealImage.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: hp
 */

#include "RealImage.h"

RealImage::RealImage(const std::string& filename)
: filename(filename)
{
	std::cout << "Loading image: " << filename << std::endl;
}

void RealImage::display()
{
	std::cout << "Displaying image" << std::endl;
}

