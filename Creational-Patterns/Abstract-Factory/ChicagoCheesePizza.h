/*
 * ChicagoCheesePizza.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef CHICAGOCHEESEPIZZA_H_
#define CHICAGOCHEESEPIZZA_H_

#include "Pizza.h"

class ChicagoCheesePizza : public Pizza{
public:
	void bake() override;
	void cut() override;
	void box() override;
};

#endif /* CHICAGOCHEESEPIZZA_H_ */
