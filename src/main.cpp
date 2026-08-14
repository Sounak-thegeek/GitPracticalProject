#include "user.h"
#include "login.h"
#include "profile.h"
#include "dashboard.h"
#include "settings.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<User> users = {
        {
            "alice",
            "alice123",
            "Alice Johnson",
            "alice@example.com",
            "C++ developer interested in systems programming.",
            0,
            true,
            "light"
        },
        {
            "bob",
            "bob456",
            "Bob Smith",
            "bob@example.com",
            "Software engineer building reliable command-line tools.",
            0,
            false,
            "dark"
        }
    };

    User* currentUser = nullptr;

    if (!login(users, currentUser)) {
        return 1;
    }

    printUserSummary(*currentUser);

    bool running = true;

    while (running) {
        int choice = 0;

        std::cout << "\n=== User Management Console ===\n";
        std::cout << "1. View profile\n";
        std::cout << "2. Edit profile\n";
        std::cout << "3. Dashboard\n";
        std::cout << "4. Settings\n";
        std::cout << "5. Logout\n";
        std::cout << "Choice: ";

        std::cin >> choice;

        switch (choice) {
            case 1:
                showProfile(*currentUser);
                break;

            case 2:
                updateProfile(*currentUser);
                break;

            case 3:
                showDashboard(*currentUser);
                break;

            case 4:
                updateSettings(*currentUser);
                break;

            case 5:
                running = false;
                std::cout << "Logged out successfully.\n";
                break;

            default:
                std::cout << "Invalid menu choice.\n";
        }
    }

    return 0;
}