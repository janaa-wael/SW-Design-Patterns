/*
 * main.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */
#include <iostream>
#include "ElementA.h"
#include "ElementB.h"
#include "Visitor.h"
#include "ConcreteVisitor.h"

int main()
{
	ElementA element1;
	ElementB element2;

	Visitor* visitor = new ConcreteVisitor();

	visitor->visit(element1);
	visitor->visit(element2);
}



