/*
 * Circle.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape{
private:
		double radius;
public:
	Circle(double r);
	Shape* clone() const override;
	void draw() const override;
};

#endif /* CIRCLE_H_ */
