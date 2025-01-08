/*
 * AuthService.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */
#include <iostream>
#include "AuthService.h"

AuthService::AuthService(Handler* handler) : handler(handler) {}

bool AuthService::logIn(std::string& email, std::string& password)
{
	if(handler->handle(email, password))
	{
		std::cout << "Authorization was successfull.\n";

		return true;
	}
	std::cout << "Authorization was not successfull.\n";

	return false;
}



