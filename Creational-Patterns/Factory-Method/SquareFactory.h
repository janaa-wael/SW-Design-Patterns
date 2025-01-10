/*
 * SquareFactory.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef SQUAREFACTORY_H_
#define SQUAREFACTORY_H_

#include "ShapeFactory.h"
#include "Shape.h"
class SquareFactory : public ShapeFactory{
public:
	Shape* createShape() override;
};

#endif /* SQUAREFACTORY_H_ */
