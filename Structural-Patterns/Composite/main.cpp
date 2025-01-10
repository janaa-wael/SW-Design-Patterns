/*
 * main.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */


#include "Page.h"
#include "PageObject.h"
#include "Copy.h"
#include <iostream>

int main()
{
	Page a;
	Page b;
	Copy allcopy;
	allcopy.AddElement(a);
	allcopy.AddElement(b);

	allcopy.Add(a);
	allcopy.Add(b);

	allcopy.Remove();
	b.Remove();
}
