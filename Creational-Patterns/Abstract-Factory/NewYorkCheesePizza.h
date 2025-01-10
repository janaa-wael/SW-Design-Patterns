/*
 * NewYorkCheesePizza.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef NEWYORKCHEESEPIZZA_H_
#define NEWYORKCHEESEPIZZA_H_

#include "Pizza.h"

class NewYorkCheesePizza : public Pizza{
public:
	void bake() override;
	void cut() override;
	void box() override;
};

#endif /* NEWYORKCHEESEPIZZA_H_ */
