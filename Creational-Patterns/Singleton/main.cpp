/*
 * main.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include <iostream>
#include "Singleton.h"

Singleton* Singleton::instance = nullptr;
int main()
{
	Singleton& singleton = Singleton::getInstance();
	singleton.someOperation();
}

