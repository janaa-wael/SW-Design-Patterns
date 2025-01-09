/*
 * BubbleSort.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include "BubbleSort.h"


void BubbleSort::sort(std::vector<int>& arr)
{
	int n = arr.size();
	for (int i = 0; i < n - 1; ++i)
	{
		bool swapped = false; // To track if any swapping happens
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1]); // Swap elements
				swapped = true;
			}
		}
		// If no two elements were swapped in the inner loop, the array is already sorted
		if (!swapped)
			break;
	}
}
