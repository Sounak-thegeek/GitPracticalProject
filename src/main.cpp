#include "user.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<User> users = {
        {"alice",
         "alice123",
         "Alice Johnson",
         "alice@example.com",
         "C++ developer interested in systems programming.",
         0,
         true,
         "light"},

        {"bob",
         "bob456",
         "Bob Smith",
         "bob@example.com",
         "Software engineer building reliable command-line tools.",
         0,
         false,
         "dark"}
    };

    std::cout << "=== User Management Console ===\n";
    std::cout << "Available accounts: "
              << users.size() << "\n";

    for (const User& user : users) {
        printUserSummary(user);
        std::cout << '\n';
    }

    return 0;
}