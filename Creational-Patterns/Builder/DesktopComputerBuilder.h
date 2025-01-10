/*
 * DesktopComputerBuilder.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef DESKTOPCOMPUTERBUILDER_H_
#define DESKTOPCOMPUTERBUILDER_H_

#include "ComputerBuilder.h"

class DesktopComputerBuilder : public ComputerBuilder{
private: Computer computer_;
public:
	virtual void buildCPU(const std::string& cpu) override;
	virtual void buildMemory(const std::string& memory) override;
	virtual void buildStorage(const std::string& storage) override;
	virtual Computer getResult() override;
};

#endif /* DESKTOPCOMPUTERBUILDER_H_ */
