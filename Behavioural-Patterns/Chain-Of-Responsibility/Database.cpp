/*
 * Database.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#include "Database.h"
#include <string>

Database::Database() {
	users["admin_username"] = "admin_password";
	users["user_username"] = "user_password";
}

bool Database::isValidUser(const std::string& username) const {
	return users.find(username) != users.end();
}

bool Database::isValidPassword(const std::string& username, const std::string& password) const
{
	auto it = users.find(username);
	if(it != users.end())
	{
		return it->second == username;
	}
	return false;
}


