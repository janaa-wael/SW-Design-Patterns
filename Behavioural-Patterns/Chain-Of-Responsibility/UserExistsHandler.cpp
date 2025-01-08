/*
 * UserExistsHandler.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#include "UserExistsHandler.h"
#include "Database.h"
#include "Handler.h"

UserExistsHandler::UserExistsHandler(Database database) {
	this->database = database;
}

bool UserExistsHandler::handle(const std::string& username, const std::string& password)
{
	if(!database.isValidUser(username))
	{
		return false;
	}
    return UserExistsHandler::handle(username, password); // Call the next handler in the chain
}
