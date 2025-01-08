/*
 * Handler.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#include "Handler.h"

Handler* Handler::setNextHandler(Handler* nextHandler) // Declaration only
{
	next = nextHandler;
	return next;
}

bool Handler::handleNext(std::string username, std::string password)
{
	if(next == NULL)
	{
		return true;
	}
	return next->handle(username, password);
}
