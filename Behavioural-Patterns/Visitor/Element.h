/*
 * Element.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

#include "Visitor.h"

class Element {
public:
	virtual void accept(Visitor& visitor) =0;
};

#endif /* ELEMENT_H_ */
