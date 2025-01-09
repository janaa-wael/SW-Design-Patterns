/*
 * QuickSort.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef QUICKSORT_H_
#define QUICKSORT_H_

#include <vector>
#include "SortingStrategy.h"

class QuickSort : public SortingStrategy{
public:
	void sort(std::vector<int>& arr) override;
};

#endif /* QUICKSORT_H_ */
