#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

struct User {
    std::string username;
    std::string password;
    std::string fullName;
    std::string email;
    std::string bio;
    unsigned int loginCount;
    bool notificationsEnabled;
    std::string theme;
};

User* findUser(std::vector<User>& users, const std::string& username);
void printUserSummary(const User& user);

#endif