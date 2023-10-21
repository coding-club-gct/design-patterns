
###  DECORATOR PATTERN


# Coffee Shop 

This C++ project demonstrates the Decorator Pattern in the context of a coffee shop. The Decorator Pattern allows you to dynamically add additional behaviors or features to objects without altering their structure.

In this example, we create various coffee types and apply decorator classes to add condiments (like milk and sugar) to the coffee, modifying its cost.

## Table of Contents

- [Overview](#overview)
- [Classes](#classes)
- [Usage](#usage)
- [Getting Started](#getting-started)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Overview

The project simulates a coffee shop with different types of coffee and the ability to add condiments to modify the coffee's cost. The Decorator Pattern is employed to create a flexible and extensible coffee customization system.

## Classes

- **Coffee** (Interface): Defines the common interface for all concrete coffee classes and decorators. It includes the `getCost()` method.

- **Espresso** (Concrete Coffee): Represents a specific coffee type, implementing the `getCost()` method to provide its base cost.

- **HouseBlend** (Concrete Coffee): Another specific coffee type, also implementing the `getCost()` method for its base cost.

- **Milk** (Decorator): A decorator class that adds the cost of milk to the wrapped coffee object.

- **Sugar** (Decorator): A decorator class that adds the cost of sugar to the wrapped coffee object.

## Usage

To use the Decorator Pattern in this project:

1. Define the coffee types (e.g., Espresso, HouseBlend) by implementing the `getCost()` method for each.

2. Create decorator classes (e.g., Milk, Sugar) that implement the `getCost()` method and accept a wrapped coffee object. They add their cost to the wrapped coffee.

3. In the `main` function, create coffee objects and chain decorators to customize them. The final cost reflects the base cost of the coffee plus the costs of all added decorators.

## Getting Started

To get started with the project, follow these steps:

1. Clone the repository to your local machine.

2. Compile the code using a C++ compiler (e.g., g++).

3. Run the compiled executable to see the Decorator Pattern in action.

## Example

Here's an example of how to create a customized coffee:

```cpp
Coffee* houseblend_milk_sugar = new Sugar(new Milk(new HouseBlend));
cout << "Cost: $" << houseblend_milk_sugar->getCost() << endl;
delete houseblend_milk_sugar; // Clean up dynamically allocated memory
```

In this example, a `HouseBlend` coffee is decorated with `Milk` and `Sugar`, and the final cost is calculated.

## Contributing

Contributions are welcome! If you'd like to enhance or extend this project, please open an issue or create a pull request with your changes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

