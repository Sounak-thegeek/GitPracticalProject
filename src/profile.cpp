#include "profile.h"
#include <iostream>
#include <limits>
#include <string>

void showProfile(const User& user) {
    std::cout << "\n--- Profile ---\n";
    std::cout << "Name: " << user.fullName << "\n";
    std::cout << "Username: " << user.username << "\n";
    std::cout << "Email: " << user.email << "\n";
    std::cout << "Bio: " << user.bio << "\n";
}

void updateProfile(User& user) {
    std::cin.ignore(
        std::numeric_limits<std::streamsize>::max(), '\n');

    std::string value;

    std::cout << "New full name (leave empty to keep current): ";
    std::getline(std::cin, value);

    if (!value.empty()) {
        user.fullName = value;
    }

    std::cout << "New email (leave empty to keep current): ";
    std::getline(std::cin, value);

    if (!value.empty()) {
        user.email = value;
    }

    std::cout << "New bio (leave empty to keep current): ";
    std::getline(std::cin, value);

    if (!value.empty()) {
        user.bio = value;
    }

    std::cout << "Profile saved successfully.\n";
}