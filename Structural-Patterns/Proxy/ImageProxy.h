/*
 * ImageProxy.h
 *
 *  Created on: Jan 10, 2025
 *      Author: hp
 */

#ifndef IMAGEPROXY_H_
#define IMAGEPROXY_H_

#include "Image.h"
#include "RealImage.h"

class ImageProxy : public Image{
private:
		RealImage* realImage;	//Reference to the Real Object
		std::string filename;
public:
		ImageProxy(const std::string& filename);
		void display() override;
};

#endif /* IMAGEPROXY_H_ */
