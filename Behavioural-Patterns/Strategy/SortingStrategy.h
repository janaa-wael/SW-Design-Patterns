/*
 * SortingStrategy.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef SORTINGSTRATEGY_H_
#define SORTINGSTRATEGY_H_

#include <vector>

class SortingStrategy {
public:
	virtual void sort(std::vector<int>& arr) = 0;
};

#endif /* SORTINGSTRATEGY_H_ */
