#ifndef DATABASE_H
#define DATABASE_H

#include <map>
#include <string>

class Database {
private:
    std::map<std::string, std::string> users; // Private map to store users and passwords

public:
    Database(); // Constructor
    bool isValidUser(const std::string& username) const; // Checks if user exists
    bool isValidPassword(const std::string& username, const std::string& password) const; // Validates password
    ~Database() = default;
};

#endif // DATABASE_H
