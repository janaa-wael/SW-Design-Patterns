/*
 * ElementA.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef ELEMENTA_H_
#define ELEMENTA_H_

#include "Visitor.h"
#include "Element.h"

class ElementA : public Element{
public:
	virtual void accept(Visitor& visitor) override;
};

#endif /* ELEMENTA_H_ */
