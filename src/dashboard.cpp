#include "dashboard.h"
#include <iostream>

void showDashboard(const User& user) {
    std::cout << "\n--- Dashboard ---\n";
    std::cout << "Welcome, " << user.fullName << "!\n";
    std::cout << "Total successful logins: "
              << user.loginCount << "\n";

    std::cout << "Notification status: "
              << (user.notificationsEnabled
                      ? "enabled"
                      : "disabled")
              << "\n";

    std::cout << "Theme: " << user.theme << "\n";
    std::cout << "Account email: " << user.email << "\n";
}