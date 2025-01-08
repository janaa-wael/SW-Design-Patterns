/*
 * UserExistsHandler.h
 *
 *  Created on: Jan 8, 2025
 *      Author: Jana Wael
 */

#ifndef USEREXISTSHANDLER_H_
#define USEREXISTSHANDLER_H_

#include "Handler.h"
#include "Database.h"
#include <string>

class UserExistsHandler : public Handler{
private: Database database;
public:
UserExistsHandler(Database database);
bool handle(const std::string& username, const std::string& password) override;
virtual ~UserExistsHandler() = default;
};

#endif /* USEREXISTSHANDLER_H_ */
