/*
 * BubbleSort.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_

#include <vector>
#include "SortingStrategy.h"

class BubbleSort : public SortingStrategy{
public:
	void sort(std::vector<int>& arr) override;
};

#endif /* BUBBLESORT_H_ */
