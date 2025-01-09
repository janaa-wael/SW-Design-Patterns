/*
 * Visitor.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef VISITOR_H_
#define VISITOR_H_

class ElementA;
class ElementB;

class Visitor {
public:
	virtual void visit(ElementA& element) = 0;
	virtual void visit(ElementB& element) = 0;
};

#endif /* VISITOR_H_ */
