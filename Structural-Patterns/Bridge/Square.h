/*
 * Square.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Renderer.h"
#include "Shape.h"

class Square : public Shape{
private: Renderer& renderer;
public:
	Square(Renderer& renderer);
	virtual void draw() override;
};

#endif /* SQUARE_H_ */
