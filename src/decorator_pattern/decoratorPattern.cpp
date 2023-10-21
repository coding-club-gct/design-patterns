#include <iostream>
using namespace std;

class Coffee {
public:
    virtual int getCost() const = 0;
};

class Espresso : public Coffee {
public:
    int getCost() const override {
        return 20;
    }
};

class HouseBlend : public Coffee {
public:
    int getCost() const override {
        return 25;
    }
};

class Milk : public Coffee {
protected:
    Coffee* coffee;

public:
    Milk(Coffee* coffee) : coffee(coffee) {}

    int getCost() const override {
        return coffee->getCost() + 15;
    }
};

class Sugar : public Coffee {
protected:
    Coffee* coffee;

public:
    Sugar(Coffee* coffee) : coffee(coffee) {}

    int getCost() const override {
        return coffee->getCost() + 10;
    }
};

int main() {
    Coffee* houseblend_milk_sugar = new Sugar(new Milk(new HouseBlend));
    cout << houseblend_milk_sugar->getCost() << endl;
    delete houseblend_milk_sugar; // Don't forget to clean up the dynamically allocated object
    return 0;
}
