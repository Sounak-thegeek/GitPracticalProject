#include "user.h"
#include "login.h"
#include "profile.h"
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

    User* currentUser = nullptr;
    case 1:
    showProfile(*currentUser);
    break;
    case 2:
    updateProfile(*currentUser);
    break;
    if (!login(users, currentUser)) {
        return 1;
    }

    printUserSummary(*currentUser);

    return 0;
}