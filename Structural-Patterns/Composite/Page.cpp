/*
 * Page.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "Page.h"
#include <iostream>

void Page::Add(PageObject a)
{
	std::cout << "Something is added to page" << std::endl;
}

void Page::Remove()
{
	std::cout << "Something is removed from the page" << std::endl;
}

void Page::Delete(PageObject a)
{
	std::cout << "Something is deleted from the page" << std::endl;
}
