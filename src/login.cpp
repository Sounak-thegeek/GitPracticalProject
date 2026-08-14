#include "login.h"
#include <iostream>
#include <string>

bool login(std::vector<User>& users, User*& currentUser) {
    const int maxAttempts = 3;

    for (int attempt = 1; attempt <= maxAttempts; ++attempt) {
        std::string username;
        std::string password;

        std::cout << "Username: ";
        std::cin >> username;

        std::cout << "Password: ";
        std::cin >> password;

        User* user = findUser(users, username);

        if (user != nullptr && user->password == password) {
            ++user->loginCount;
            currentUser = user;

            std::cout << "Login successful.\n";
            return true;
        }

        std::cout << "Invalid credentials. Attempts remaining: "
                  << maxAttempts - attempt << "\n";
    }

    std::cout << "Login failed after "
              << maxAttempts << " attempts.\n";

    return false;
}