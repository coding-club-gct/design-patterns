## COMMAND PATTERN

# Restaurant Order System using Command Pattern

## Introduction

The Command Pattern is a behavioral design pattern that separates an object that issues commands (the invoker) from an object that performs the command (the receiver). It allows you to:

- Encapsulate a request as an object.
- Parameterize clients with queues, requests, and operations.
- Support undoable operations.
- Support logging changes so they can be reapplied in case of a system crash.
- Allow a system to be configured with various operations while remaining independent of their concrete classes.

In this example, we implement a simplified restaurant order system where you can create and execute commands to prepare pasta and pizza orders. This pattern decouples the sender of a request (the client) from the object that performs the action (the receiver), and it provides a flexible way to handle various tasks and support undoable operations.

## Features

### Chef Class

The `Chef` class represents the chef in the restaurant. The chef can prepare pasta and pizza orders.

### Command Interface

The `Command` class defines a pure virtual method `execute_command()` that concrete command classes must implement. This interface serves as a contract for all command classes.

### Concrete Commands

1. **PastaCommand**: This concrete command class encapsulates the preparation of a pasta order. It implements the `Command` interface and has a reference to the `Chef` object. The `execute_command()` method invokes the `PreparePasta()` method of the chef.

2. **PizzaCommand**: This concrete command class encapsulates the preparation of a pizza order. It follows the same structure as `PastaCommand` but calls the `PreparePizza()` method of the chef.

### Main Function

In the `main` function:

1. We create an instance of the `Chef` class, representing the chef in the restaurant.

2. We create two command objects, `pastacommand` and `pizzacommand`, using the Command Pattern. Each command is associated with the chef and a specific order (pasta or pizza).

3. We execute these commands, simulating the chef preparing the dishes.

## How to Use

1. Clone this repository to your local machine:

   ```shell
   git clone https://github.com/coding-club-gct/design-patterns/tree/main/src/command_pattern.git
   ```

2. Compile the C++ program:

   ```shell
   g++ main.cpp -o command_pattern
   ```

3. Run the program:

   ```shell
   ./command_pattern
   ```

4. You should see the output indicating that the pasta and pizza orders have been prepared by the chef.



In this example, the commands (`PastaCommand` and `PizzaCommand`) encapsulate requests to prepare specific food items, and the chef (the receiver) carries out these commands.

## License

This code is provided under the [MIT License](LICENSE). Feel free to use and modify it for your own projects.

