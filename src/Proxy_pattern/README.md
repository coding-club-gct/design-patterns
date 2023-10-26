
### Proxy Pattern 

The Proxy Pattern simplifies the interaction with a complex system by providing a surrogate or placeholder for another object. In this example, the `ProxyInternet` class acts as a proxy to control access to the real internet. It checks if a website is restricted before allowing access.

The Proxy Pattern is useful in scenarios where access control, lazy initialization, or additional functionality is required without directly interacting with the real object.

## Example: Internet Access Control

This C++ code example demonstrates the Proxy Pattern. The code simulates an internet access control system where a proxy is used to manage and restrict access to certain websites. The Proxy Pattern provides a surrogate or placeholder for another object to control access to it.

## Code Description

The code consists of three main classes:

- `Internet` (Abstract Subject): This class defines an abstract interface for internet access.
- `RealInternet` (Real Subject): The `RealInternet` class represents the actual implementation of internet access.
- `ProxyInternet` (Proxy): The `ProxyInternet` class acts as a proxy for controlling access to the real internet. It restricts access to specific websites by maintaining a list of restricted sites.

## Usage

To compile and run the code:

1. Clone this repository to your local machine:

   ```shell
   git clone https://github.com/coding-club-gct/design-patterns/tree/main/src/proxy_pattern.git
   ```

2. Compile the C++ program:

   ```shell
   g++ main.cpp -o internet_proxy_example
   ```

3. Run the program:

   ```shell
   ./internet_proxy_example
   ```

4. The program will output whether access to websites is allowed or restricted based on the example.


## License

This code is provided under the MIT License, which allows you to modify and use it for your own projects.

