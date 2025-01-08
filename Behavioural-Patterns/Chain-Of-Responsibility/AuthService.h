/*
 * AuthService.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef AUTHSERVICE_H_
#define AUTHSERVICE_H_

#include "Handler.h"

class AuthService {
private: Handler* handler;
public:
	AuthService(Handler* handler);
	bool logIn(std::string& email, std::string& password);
	virtual ~AuthService() = default;
};

#endif /* AUTHSERVICE_H_ */
