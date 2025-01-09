/*
 * Singleton.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <iostream>

class Singleton {
private: static Singleton* instance;
		 Singleton();
		 ~Singleton();

public:
		 static Singleton& getInstance();
		 void someOperation();

		 // Delete the copy constructor and assignment operator
		 Singleton(const Singleton&) = delete;
		 Singleton& operator=(const Singleton&) = delete;
};

#endif /* SINGLETON_H_ */
