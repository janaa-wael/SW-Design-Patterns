/*
 * ValidPasswordHandler.h
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#ifndef VALIDPASSWORDHANDLER_H_
#define VALIDPASSWORDHANDLER_H_

#include "Database.h"
#include "Handler.h"

class ValidPasswordHandler : public Handler{
private: Database database;

public:
ValidPasswordHandler(Database database);
bool handle(const std::string& username, const std::string& password) override;
virtual ~ValidPasswordHandler() = default;
};

#endif /* VALIDPASSWORDHANDLER_H_ */
