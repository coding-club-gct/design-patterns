                                

                               STRATERGY DESIGN PATTERN



##Payment Strategy Example
<!-- @import "[TOC]" {cmd="toc" depthFrom=1 depthTo=6 orderedList=false} -->

                             
## Overview

This C++ program demonstrates the concept of payment strategies in a shopping cart. It allows you to choose different payment methods when making a purchase.

## Strategy Design Pattern

The Strategy Design Pattern is a behavioral design pattern that defines a family of algorithms, encapsulates each one, and makes them interchangeable. It allows you to select an algorithm's behavior at runtime. In this program:

- `PaymentStrategy` acts as the strategy interface, defining a common method for payment.

- `CreditCard` and `GooglePay` represent concrete strategies, each implementing the payment method differently.

- `ShoppingCart` is the context that allows you to set and switch between payment strategies dynamically.

## How to Use

1. Compile the code using a C++ compiler.
2. Run the compiled program.

## Example

Here's how you can use the program:

```cpp
int main() {
    ShoppingCart cart;
    CreditCard creditCard;
    GooglePay googlePay;

    cart.setStrategy(&creditCard);
    cart.PayAmount(1000);

    cart.setStrategy(&googlePay);
    cart.PayAmount(2000);
    
    return 0;
}
```

In this example, we create a shopping cart, set payment strategies (credit card and Google Pay), and make payments using the chosen strategy.

Enjoy exploring the Strategy Design Pattern with this simple example!

