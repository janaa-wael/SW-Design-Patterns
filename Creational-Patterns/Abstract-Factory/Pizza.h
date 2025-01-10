/*
 * Pizza.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef PIZZA_H_
#define PIZZA_H_

class Pizza {
public:
	virtual void bake() = 0;
	virtual void cut() = 0;
	virtual void box() = 0;
};

#endif /* PIZZA_H_ */
