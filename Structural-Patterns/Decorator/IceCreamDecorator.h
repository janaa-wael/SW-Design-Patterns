/*
 * IceCreamDecorator.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef ICECREAMDECORATOR_H_
#define ICECREAMDECORATOR_H_

#include "IceCream.h"

class IceCreamDecorator : public IceCream{
protected: IceCream* iceCream;
public:
	IceCreamDecorator(IceCream* ic);
	virtual std::string getDescription() const override;
	virtual double cost() const override;
};

#endif /* ICECREAMDECORATOR_H_ */
