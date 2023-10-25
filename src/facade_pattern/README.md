
# Facade Pattern 

The Facade Pattern simplifies the interaction with a complex system (the hotel with various restaurants) by providing a unified and user-friendly interface. In this example, the `HotelKeeper` class acts as the facade, abstracting the complexities of accessing menus from different restaurants.

Clients can interact with the `HotelKeeper` without needing to understand the details of each restaurant's menu retrieval process. The facade pattern makes it easier for clients to access various services without dealing with the intricacies of each service individually.

# Example: Hotel Menus

This is a C++ code example that illustrates the Facade Pattern. In this example, we simulate a hotel with various restaurants, each offering different menus (e.g., Veg, Non-Veg, Veg/Non-Both). The Facade Pattern is used to simplify the interaction with these menus by introducing a "hotel keeper" facade. The hotel keeper provides a unified and user-friendly interface for accessing menus from different restaurants.

## Code Structure

1. **Menu Classes**: There are three menu classes representing different types of restaurants—`VegMenu`, `NonVegMenu`, and `VegNonBothMenu`. Each class provides a method to retrieve the menu items specific to its type.

2. **HotelKeeper (Facade) Class**: The `HotelKeeper` class encapsulates instances of menu classes and provides simplified methods for accessing menus. It acts as a facade, abstracting the complexity of dealing with various menus.

3. **`main` Function**: In the `main` function, a client interacts with the `HotelKeeper` (facade) to request menus for different types of restaurants. The client doesn't need to be aware of how menus are obtained; they simply request menus from the hotel keeper.

## Usage

1. Clone this repository to your local machine:

    ```shell
   git clone https://github.com/coding-club-gct/design-patterns/tree/main/src/facade_pattern.git
   ```

2. Compile the C++ program:

   ```shell
   g++ main.cpp -o hotel_menu_example
   ```

3. Run the program:

   ```shell
   ./hotel_menu_example
   ```

4. You should see output indicating that the client requests menus from the hotel keeper, which provides menus from different restaurants through a simplified interface.



## License

This code is provided under the [MIT License](LICENSE). You are free to use and modify it for your own projects.

---

Make sure to replace `"https://github.com/your-username/facade-pattern-hotel-menu.git"` with the actual URL of your repository if you decide to host the code on a version control platform like GitHub.