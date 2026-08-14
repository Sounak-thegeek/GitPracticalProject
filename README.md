# Git Practical Project

A C++ User Management Console Application developed as part of a practical Git exercise.

## Project Status

Repository initialization completed.

## Planned Features

- User authentication
- Profile management
- Dashboard
- Application settings

## Purpose

The application demonstrates a modular C++ user-management workflow while
providing a practical repository for learning Git branching, merging,
history preservation, stash operations, conflict resolution, and recovery.

## Prerequisites

The project requires:

- Git
- Visual Studio Code or another C++ editor
- MinGW-w64 or another C++17-compatible compiler
- A GitHub account for remote repository hosting

## Build Instructions

Open PowerShell in the project directory and run:

```text
g++ -std=c++17 src/*.cpp -Iinclude -Wall -Wextra -pedantic -o app.exe
```

## Running the Application

After compilation, run:

```text
.\app.exe
```

## Demo Accounts

The application includes two demonstration accounts:

| Username | Password |
|----------|----------|
| alice | alice123 |
| bob | bob456 |

These credentials are intended only for local demonstration.

## Application Features

### Login

Authenticates a user using a username and password and permits three attempts.

### Profile

Displays and modifies the user's name, email address, and biography.

### Dashboard

Displays account activity, notification status, theme, and account information.

### Settings

Allows the user to enable or disable notifications and select a light or dark
theme.

## Repository Structure

```text
include/    Header files
src/        C++ implementations
docs/       Project documentation
```

