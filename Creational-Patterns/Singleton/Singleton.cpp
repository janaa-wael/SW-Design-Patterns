/*
 * Singleton.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */
#include <iostream>
#include "Singleton.h"

Singleton::Singleton()
{
	std::cout << "Singleton instance is created" << std::endl;
}
Singleton::~Singleton()
{
	std::cout << "Singleton instance is destroyed" << std::endl;
}

Singleton& Singleton::getInstance()
{
	if(!instance)
	{
		instance = new Singleton();
	}
	return *instance;
}

void Singleton::someOperation()
{
	std::cout << "Singleton is performing some operation." << std::endl;
}
