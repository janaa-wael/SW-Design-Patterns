/*
 * NewYorkPepperoniPizza.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef NEWYORKPEPPERONIPIZZA_H_
#define NEWYORKPEPPERONIPIZZA_H_

#include "Pizza.h"

class NewYorkPepperoniPizza : public Pizza{
public:
	void bake() override;
	void cut() override;
	void box() override;
};

#endif /* NEWYORKPEPPERONIPIZZA_H_ */
