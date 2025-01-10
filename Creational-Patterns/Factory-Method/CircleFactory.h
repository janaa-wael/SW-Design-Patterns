/*
 * CircleFactory.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef CIRCLEFACTORY_H_
#define CIRCLEFACTORY_H_

#include "ShapeFactory.h"

class CircleFactory : public ShapeFactory{
public:
	virtual Shape* createShape() override;
};

#endif /* CIRCLEFACTORY_H_ */
