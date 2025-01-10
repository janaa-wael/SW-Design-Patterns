/*
 * Copy.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "Copy.h"
#include <iostream>
#include "PageObject.h"

void Copy::Add(PageObject a)
{
	std::cout << "Something is added to the copy" << std::endl;
}

void Copy::Remove()
{
	std::cout << "Something is removed from the copy" << std::endl;
}

void Copy::Delete(PageObject a)
{
	std::cout << "Something is deleted from the copy" << std::endl;
}

void Copy::AddElement(PageObject a)
{
	copyPages.push_back(a);
}
