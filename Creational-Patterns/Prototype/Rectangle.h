/*
 * Rectangle.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape{
private:
		double width;
		double height;
public:
		Rectangle(double w, double h);
		Shape* clone() const override;
		void draw() const override;
};

#endif /* RECTANGLE_H_ */
