/*
 * main.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: hp
 */

#include "Image.h"
#include "ImageProxy.h"
#include "RealImage.h"
#include <iostream>

int main()
{
	Image* image1 = new ImageProxy("file.txt");
	Image* image2 = new ImageProxy("picture.jpeg");

	image1->display();
	image2->display();
	delete image1;
	delete image2;
	return 0;
}


