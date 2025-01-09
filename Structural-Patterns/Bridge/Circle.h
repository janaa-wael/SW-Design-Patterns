/*
 * Circle.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"
#include "Renderer.h"

class Circle : public Shape{
private: Renderer& renderer;
public:
	Circle(Renderer& renderer);
	virtual void draw() override;
};

#endif /* CIRCLE_H_ */
