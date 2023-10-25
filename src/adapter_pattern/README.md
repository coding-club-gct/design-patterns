
# Adapter Pattern 

The Adapter Pattern is used in this example to make the new `ModernPrinter` work seamlessly with the existing legacy system that was designed to work with the `OldPrinter`. The `PrinterAdapter` class acts as a bridge between the two interfaces. It encapsulates an instance of the `ModernPrinter` and provides a method (`print()`) that is compatible with the legacy system's expectations.

The `PrinterAdapter` essentially adapts the `ModernPrinter` interface for use within the old system, allowing the system to print using the new printer without any changes to the original classes. This is the essence of the Adapter Pattern—enabling different interfaces to work together without modification.


# Example: Legacy Printer with Modern Printer

This is a C++ code example that illustrates the Adapter Pattern. In this example, we have a legacy `OldPrinter` class with an incompatible interface, and we want to use a new `ModernPrinter` class with a different interface within the same system. The Adapter Pattern is used to adapt the `ModernPrinter` for use in the legacy system.

## Code Structure

1. **`OldPrinter` Class**: Represents the legacy component with an incompatible interface. It has a method `printOld()` for printing with the old printer.

2. **`ModernPrinter` Class**: Represents the new component with a different interface. It has a method `printNew()` for printing with the modern printer.

3. **`PrinterAdapter` Class**: An adapter class that encapsulates an instance of the `ModernPrinter` and provides a method (`print()`) compatible with the legacy system's expectations.

4. **`main` Function**: Demonstrates the use of both the legacy `OldPrinter` and the new `ModernPrinter` through the `PrinterAdapter`.

## Usage

1. Clone this repository to your local machine:

   ```shell
   git clone https://github.com/coding-club-gct/design-patterns/tree/main/src/adapter_pattern.git
   ```

2. Compile the C++ program:

   ```shell
   g++ main.cpp -o printer_example
   ```

3. Run the program:

   ```shell
   ./printer_example
   ```

4. You should see output indicating the printing with both the legacy `OldPrinter` and the new `ModernPrinter` through the `PrinterAdapter`.


## License

This code is provided under the [MIT License](LICENSE). You are free to use and modify it for your own projects.
