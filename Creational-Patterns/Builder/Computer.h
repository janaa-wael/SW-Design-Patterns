/*
 * Computer.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef COMPUTER_H_
#define COMPUTER_H_
#include <string>

class Computer {
private:	std::string cpu_;
			std::string memory_;
			std::string storage_;
public:
	void setCPU(const std::string& cpu);
	void setMemory(const std::string& memory);
	void setStorage(const std::string& storage);
	void display();
};

#endif /* COMPUTER_H_ */
