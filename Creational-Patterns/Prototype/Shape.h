/*
 * Shape.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
public:
	virtual Shape* clone() const = 0;
	virtual void draw() const = 0;
	virtual ~Shape() {}
};

#endif /* SHAPE_H_ */
