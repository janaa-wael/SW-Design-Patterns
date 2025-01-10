/*
 * ImageProxy.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: hp
 */

#include "ImageProxy.h"
#include "RealImage.h"


ImageProxy::ImageProxy(const std::string& filename)
: filename(filename), realImage(nullptr)
{

}

void ImageProxy::display()
{
	if(realImage == nullptr)
	{
		realImage = new RealImage(filename);
	}
	realImage->display();
}
