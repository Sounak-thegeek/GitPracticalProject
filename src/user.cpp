#include "user.h"
#include <iostream>

User* findUser(std::vector<User>& users, const std::string& username) {
    for (User& user : users) {
        if (user.username == username) {
            return &user;
        }
    }

    return nullptr;
}

void printUserSummary(const User& user) {
    std::cout << "Logged in as: " << user.fullName
              << " (" << user.username << ")\n";

    std::cout << "Email: " << user.email << "\n";
}