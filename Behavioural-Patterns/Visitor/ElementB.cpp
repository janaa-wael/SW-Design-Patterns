/*
 * ElementB.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include "ElementB.h"
#include "Visitor.h"

void ElementB::accept(Visitor& visitor)
{
	visitor.visit(*this);
}

