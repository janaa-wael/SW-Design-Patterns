/*
 * ValidPasswordHandler.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#include "ValidPasswordHandler.h"
#include "Handler.h"

ValidPasswordHandler::ValidPasswordHandler(Database database) {
	this->database = database;
}

bool ValidPasswordHandler::handle(const std::string& username, const std::string& password)
{
	if(!database.isValidPassword(username, password))
	{

	}
	return handleNext(username, password);
}

