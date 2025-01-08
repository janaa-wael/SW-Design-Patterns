/*
 * RoleCheckHandler.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */
#include <iostream>
#include "RoleCheckHandler.h"

RoleCheckHandler::RoleCheckHandler(Database database) {
	this->database = database;

}

bool RoleCheckHandler::handle(const std::string& username, const std::string& password)
{
	if(username == "admin_username")
	{

	}
	std::cout << "Loading default page\n";
	return handleNext(username,password);
}

