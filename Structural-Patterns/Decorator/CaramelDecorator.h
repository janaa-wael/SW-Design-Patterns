/*
 * CaramelDecorator.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef CARAMELDECORATOR_H_
#define CARAMELDECORATOR_H_

#include "IceCreamDecorator.h"

class CaramelDecorator : public IceCreamDecorator{
public:
		CaramelDecorator(IceCream* ic);
		virtual std::string getDescription() const override;
		virtual double cost() const override;
};

#endif /* CARAMELDECORATOR_H_ */
