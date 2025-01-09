/*
 * SortContext.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include "SortContext.h"
#include "SortingStrategy.h"

void SortContext::setStrategy(SortingStrategy* strategy)
{
	this->strategy = strategy;
}

void SortContext::executeStrategy(std::vector<int>& arr)
{
	strategy->sort(arr);
}
