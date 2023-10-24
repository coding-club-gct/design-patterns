
### OBSERVER PATTERN



```markdown
# Group Messaging with Observer Pattern

This project demonstrates a simple group messaging system where students can receive messages within a group using the Observer Pattern. The code is written in C++.

## Table of Contents

- [Introduction](#introduction)
- [How It Works](#how-it-works)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project showcases a basic implementation of the Observer Pattern in C++. The Observer Pattern is a behavioral design pattern where an object, called the subject, maintains a list of its dependents, called observers, and notifies them of state changes, typically by calling one of their methods. In this context, a "Group" acts as the subject, and "Students" act as observers.

## How It Works

- The `Group` class represents a group of students. It maintains a list of students who have registered to receive messages.
- The `Students` class represents individual students. Each student has an `update` method, which gets called when the group sends a message.

## Getting Started

1. Clone the project repository to your local machine:

   ```bash
   git clone 'https://github.com/coding-club-gct/design-patterns'
   cd group-messaging
   ```

2. Compile the code using a C++ compiler:

   ```bash
   g++ main.cpp -o group_messaging
   ```

3. Run the compiled executable:

   ```bash
   ./group_messaging
   ```

## Usage

- The program creates a `Group` named `common` and three `Students` named Alice, Bob, and Charlie.
- Each student is added to the group using the `addStudent` method.
- The `sendMessage` method of the group is used to send a message to all students in the group.
- Students are notified of received messages using their `update` method.

## Contributing

Contributions to this project are welcome. Feel free to open issues or pull requests if you have any improvements or suggestions.

## License

This project is licensed under the MIT License.You are free to use and modify it for your purposes.


## Acknowledgements

- The code in this example is for educational purposes and was inspired by the Observer design pattern.
