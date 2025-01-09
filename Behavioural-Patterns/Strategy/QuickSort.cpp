/*
 * QuickSort.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include "QuickSort.h"
#include <vector>
#include <algorithm>
#include <iostream>

int partition(std::vector<int>& arr, int low, int high)
{
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1; // Index of smaller element

    for (int j = low; j < high; ++j)
    {
        if (arr[j] < pivot)
        {
            ++i;
            std::swap(arr[i], arr[j]); // Swap elements
        }
    }
    std::swap(arr[i + 1], arr[high]); // Place the pivot in its correct position
    return i + 1; // Return pivot index
}

void quickSort(std::vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1); // Sort left part
        quickSort(arr, pivotIndex + 1, high); // Sort right part
    }
}

void QuickSort::sort(std::vector<int>& arr)
{
	quickSort(arr,0,arr.size() - 1);
}
