/*
 * ElementA.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include "ElementA.h"
#include "Visitor.h"


void ElementA::accept(Visitor& visitor)
{
	visitor.visit(*this);
}

