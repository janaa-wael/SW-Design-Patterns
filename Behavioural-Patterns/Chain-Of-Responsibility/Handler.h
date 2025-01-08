/*
 * Handler.h
 *
 *  Created on: Jan 8, 2025
 *      Author: hp
 */

#ifndef HANDLER_H_
#define HANDLER_H_

#include <string>

class Handler {
private:
    Handler* next; // Pointer to the next handler
public:
    Handler() = default; // Constructor
    Handler* setNextHandler(Handler* nextHandler); // Declaration only
    bool handleNext(std::string username, std::string password);
    virtual bool handle(const std::string& username, const std::string& password) = 0; // Pure virtual function
    ~Handler() = default; // Virtual destructor
};

#endif /* HANDLER_H_ */
