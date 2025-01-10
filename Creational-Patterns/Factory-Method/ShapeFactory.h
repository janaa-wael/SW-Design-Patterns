/*
 * ShapeFactory.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef SHAPEFACTORY_H_
#define SHAPEFACTORY_H_

#include "Shape.h"
// Abstract creator class
class ShapeFactory{
public:
		virtual Shape* createShape() = 0;
		virtual ~ShapeFactory() {}
};

#endif /* SHAPEFACTORY_H_ */
