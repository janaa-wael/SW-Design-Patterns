/*
 * ConcreteVisitor.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */
#include <iostream>
#include "ConcreteVisitor.h"
#include "ElementA.h"
#include "ElementB.h"

ConcreteVisitor::ConcreteVisitor()
{

}


void ConcreteVisitor::visit(ElementA& element)
{
	std::cout << "Visiting Element A" << std::endl;
}

void ConcreteVisitor::visit(ElementB& element)
{
	std::cout << "Visiting Element B" << std::endl;

}
