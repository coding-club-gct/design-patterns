
# Bridge Pattern Example: Shape and Colour

This C++ code example demonstrates the Bridge Pattern, a structural design pattern. The Bridge Pattern separates an object's abstraction from its implementation, allowing them to vary independently.


## Understanding the Bridge Pattern

The Bridge Pattern is used in this example to separate the abstraction of shapes from the implementation of colors. This separation allows new shapes and colors to be added independently without affecting each other. The Bridge Pattern promotes flexibility and modifiability in software design.

## Code Structure

The code is organized into several classes:

1. **`Colour` Hierarchy**:
   - `Colour` is an abstract base class that defines a pure virtual function `paint()`. This represents the "Implementor" in the Bridge Pattern.
   - `BlueColour` and `RedColour` are concrete classes that inherit from `Colour` and provide specific implementations for the `paint()` method.

2. **`Shape` Hierarchy**:
   - `Shape` is an abstract base class that contains a reference to a `Colour` object. This represents the "Abstraction" in the Bridge Pattern.
   - It also declares a pure virtual function `draw()`.

3. **Concrete Shapes**:
   - `Circle` and `Square` are concrete classes that inherit from `Shape`. They contain references to `Colour` objects.
   - They implement the `draw()` method, which decouples the shape's drawing from its coloring.

## Usage

1. Clone this repository to your local machine or download the code.
    
    ```shell
   git clone https://github.com/coding-club-gct/design-patterns/tree/main/src/bridge_pattern.git
   ```

2. Compile the C++ program using a C++ compiler of your choice.

    ```shell
   g++ main.cpp -o bridge_pattern
   ```

3. Run the compiled program.

     ```shell
   ./bridge_pattern
   ```


4. The program will display the output in the console, showing the drawing of circles and squares with different colors.



## License

This code is provided under the [MIT License](LICENSE). You are free to use and modify it for your own projects.

---

Feel free to replace "https://github.com/your-username/bridge-pattern-example.git" with the actual URL of your repository if you decide to host the code on a version control platform like GitHub.