
# Abstract Factory Pattern Example: Food and Beverage Orders

This C++ code example demonstrates the Abstract Factory pattern for creating food and beverage orders in two categories: "Veg" and "Non-Veg." The example includes abstract product classes, concrete product classes, abstract factory interfaces, and concrete factory classes.

## Abstract Factory Pattern

The Abstract Factory pattern is a creational design pattern that provides an interface for creating families of related or dependent objects without specifying their concrete classes. In this example, we use the Abstract Factory pattern to create food and beverage orders for "Veg" and "Non-Veg" categories without knowing the specific food items.

## Code Structure

The code is organized as follows:

- `Food` and `Beverage` are abstract product classes with pure virtual methods.
- `NonVegFood`, `VegFood`, `NonVeg`, and `Veg` are concrete product classes that implement the abstract product classes.
- `Factory` is an abstract factory interface with pure virtual methods for creating food and beverage objects.
- `VegFactory` and `NonVegFactory` are concrete factory classes that implement the abstract factory interface and provide methods to create food and beverage objects.

## How to Use

1. Clone this repository to your local machine.

2. Compile the code using a C++ compiler. For example:

   ```shell
   g++ main.cpp -o food_and_beverage
   ```

3. Run the executable:

   ```shell
   ./food_and_beverage
   ```

4. The program will create "Veg" and "Non-Veg" food and beverage orders and display the messages indicating that the items are ready.

## Output

The program's output will look like this:

```
Your Veg food is ready!
Your Veg Beverage is ready!
Your Non-Veg food is ready!
Your Non-Veg Beverage is ready!
```

## Memory Management

The code also demonstrates proper memory management by deallocating dynamically created objects to avoid memory leaks.

## License

This code is provided under the MIT License. You are free to use and modify it for your purposes.

## Acknowledgements

- The code in this example is for educational purposes and was inspired by the Abstract design pattern.