/*
 * ChocolateDecorator.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef CHOCOLATEDECORATOR_H_
#define CHOCOLATEDECORATOR_H_

#include "IceCreamDecorator.h"

class ChocolateDecorator : public IceCreamDecorator{
public:
	ChocolateDecorator(IceCream* ic);
	virtual std::string getDescription() const override;
	virtual double cost() const override;
};

#endif /* CHOCOLATEDECORATOR_H_ */
