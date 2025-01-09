/*
 * ConcreteVisitor.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef CONCRETEVISITOR_H_
#define CONCRETEVISITOR_H_

#include "ElementA.h"
#include "ElementB.h"

class ConcreteVisitor : public Visitor{ // @suppress("Class has a virtual method and non-virtual destructor")
public:
	ConcreteVisitor();
	virtual void visit(ElementA& element) override;
	virtual void visit(ElementB& element) override;

};

#endif /* CONCRETEVISITOR_H_ */
