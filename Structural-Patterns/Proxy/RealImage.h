/*
 * RealImage.h
 *
 *  Created on: Jan 10, 2025
 *      Author: hp
 */

#ifndef REALIMAGE_H_
#define REALIMAGE_H_

#include "Image.h"
#include <iostream>

//Implement the Real Object
class RealImage : public Image{
private:
		std::string filename;
public:
		RealImage(const std::string& filename) ;
		void display() override;
};

#endif /* REALIMAGE_H_ */
