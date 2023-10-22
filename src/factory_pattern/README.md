

# FACTORY METHOD DESIGN


# C++ Factory Method Design Pattern Example

This is a C++ example of the Factory Method design pattern. The Factory Method is a creational design pattern that provides an interface for creating objects but allows subclasses to alter the type of objects that will be created.

## Overview

In this example, we demonstrate the Factory Method design pattern using a scenario involving different fruit types: Apple, Banana, and Orange. The Factory Method allows the dynamic creation of fruit objects based on user input (the name of the fruit).

## Prerequisites

Before running the code, ensure you have a C++ development environment set up on your system.

## How to Run

To compile and run the program, follow these steps:

1. Open a terminal.
2. Navigate to the directory containing the C++ source code files.
3. Compile the code using a C++ compiler (e.g., g++):
   ```bash
   g++ -o main main.cpp
   ```
4. Run the executable:
   ```bash
   ./main
   ```

## Usage

When the program is run, it demonstrates the Factory Method pattern by creating fruit objects based on user input. You can input the name of the fruit (e.g., "apple," "banana," or "orange"), and the program will create the corresponding fruit object and display a message about producing juice.

## Code Structure

The code is organized into the following sections:

- `Fruit`: This is an abstract base class (interface) for different types of fruits, with a pure virtual function `produceJuice()`.

- Concrete classes (`Banana`, `Apple`, `Orange`): These classes implement the `Fruit` interface and provide specific implementations of the `produceJuice()` method.

- `FruitFactory`: This class is responsible for creating fruit objects. It has a `getFruit` method that takes the name of the fruit and returns a pointer to the appropriate fruit object.

- `main`: The main function demonstrates the Factory Method pattern by using the `FruitFactory` to create fruit objects based on user input.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

- The code in this example is for educational purposes and was inspired by the Factory Method design pattern.
