/*
 * ChicagoPepperoniPizza.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef CHICAGOPEPPERONIPIZZA_H_
#define CHICAGOPEPPERONIPIZZA_H_

#include "Pizza.h"

class ChicagoPepperoniPizza : public Pizza{
public:
	void bake() override;
	void cut() override;
	void box() override;
};

#endif /* CHICAGOPEPPERONIPIZZA_H_ */
