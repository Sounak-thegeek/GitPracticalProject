#include "settings.h"
#include <iostream>
#include <string>

void updateSettings(User& user) {
    int choice = 0;

    std::cout << "\n--- Settings ---\n";
    std::cout << "1. Toggle notifications\n";
    std::cout << "2. Change theme\n";
    std::cout << "3. Return\n";
    std::cout << "Choice: ";
    std::cin >> choice;

    if (choice == 1) {
        user.notificationsEnabled =
            !user.notificationsEnabled;

        std::cout << "Notifications are now "
                  << (user.notificationsEnabled
                          ? "enabled"
                          : "disabled")
                  << ".\n";
    }
    else if (choice == 2) {
        std::string theme;

        std::cout << "Enter theme (light/dark): ";
        std::cin >> theme;

        if (theme == "light" || theme == "dark") {
            user.theme = theme;
            std::cout << "Theme changed to "
                      << user.theme << ".\n";
        }
        else {
            std::cout << "Unsupported theme. "
                      << "Choose light or dark.\n";
        }
    }
    else if (choice == 3) {
        std::cout << "Returning to dashboard.\n";
    }
    else {
        std::cout << "Invalid settings choice.\n";
    }
}