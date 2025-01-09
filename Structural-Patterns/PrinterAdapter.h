/*
 * PrinterAdapter.h
 *
 *  Created on: Jan 9, 2025
 *      Author: hp
 */

#ifndef PRINTERADAPTER_H_
#define PRINTERADAPTER_H_

#include "LegacyPrinter.h"

class PrinterAdapter {
private: LegacyPrinter Printer;
public:
	void sendCommand(const std::string& command);
};

#endif /* PRINTERADAPTER_H_ */
