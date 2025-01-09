/*
 * main.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */
#include "SortContext.h"
#include "SortingStrategy.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include <iostream>

int main()
{
	std::vector<int> data1 = { 1, 5, 9, 2, 4, 7};
	std::vector<int> data2 = { 21, 45, 59, 22, 14, 7};

	SortContext context;
	BubbleSort bubbleSort;
	QuickSort quickSort;

	context.setStrategy(&bubbleSort);
	context.executeStrategy(data1);

	std::cout << "Bubble Sorting: " << std::endl;
	for(int i = 0 ; i < data1.size(); i++)
	{
		std::cout << "Element " << i << " : " << data1[i] << std::endl;
	}

	context.setStrategy(&quickSort);
	context.executeStrategy(data2);
	std::cout << "Quick Sorting: " << std::endl;
	for(int i = 0 ; i < data2.size(); i++)
	{
		std::cout << "Element " << i << " : " << data2[i] << std::endl;
	}

}


