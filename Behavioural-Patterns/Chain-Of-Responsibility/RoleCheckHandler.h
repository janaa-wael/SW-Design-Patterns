/*
 * RoleCheckHandler.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef ROLECHECKHANDLER_H_
#define ROLECHECKHANDLER_H_

#include "Handler.h"
#include "Database.h"

class RoleCheckHandler : public Handler {

private: Database database;

public:
	RoleCheckHandler(Database database);
	bool handle(const std::string& username, const std::string& password) override;
	virtual ~RoleCheckHandler() = default;
};

#endif /* ROLECHECKHANDLER_H_ */
