/*
 * SortContext.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef SORTCONTEXT_H_
#define SORTCONTEXT_H_

#include "SortingStrategy.h"
#include <vector>

class SortContext {
private: SortingStrategy* strategy;
public:
	void setStrategy(SortingStrategy* strategy);
	void executeStrategy(std::vector<int>& arr);
};

#endif /* SORTCONTEXT_H_ */
