/*
 * main.cpp
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#include <iostream>
#include "Database.h"
#include "AuthService.h"
#include "ValidPasswordHandler.h"
#include "RoleCheckHandler.h"
#include "UserExistsHandler.h"

using namespace std;

int main()
{
    Database database;
    Handler* handler = new UserExistsHandler(database);
    handler->setNextHandler(new ValidPasswordHandler(database))
           ->setNextHandler(new RoleCheckHandler(database));

    // Create the AuthService with the handler chain
    AuthService service(handler);
    std::string name = "user_username";
    std::string password = "user_password";
    // Perform login operation
    service.logIn(name, password);

    // Cleanup
    delete handler;  // Make sure to clean up allocated memory
    return 0;

}


