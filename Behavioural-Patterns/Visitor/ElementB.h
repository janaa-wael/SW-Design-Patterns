/*
 * ElementB.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef ELEMENTB_H_
#define ELEMENTB_H_

#include "Visitor.h"
#include "Element.h"

class ElementB : public Element{
public:
	virtual void accept(Visitor& visitor) override;
};

#endif /* ELEMENTB_H_ */
