/*
 * IceCream.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef ICECREAM_H_
#define ICECREAM_H_

#include <string>
#include <iostream>

// Component interface that defines the basic ice cream operations
class IceCream {
public:
	virtual std::string getDescription() const = 0;
	virtual double cost() const = 0;
};

#endif /* ICECREAM_H_ */
