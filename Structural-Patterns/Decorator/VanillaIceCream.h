/*
 * VanillaIceCream.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef VANILLAICECREAM_H_
#define VANILLAICECREAM_H_

#include <string>
#include "IceCream.h"

// Concrete Component - the basic ice cream class
class VanillaIceCream : public IceCream{
public:
	virtual std::string getDescription() const override;
	virtual double cost() const override;
};

#endif /* VANILLAICECREAM_H_ */
