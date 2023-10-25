#include <iostream>
#include <string>
using namespace std;

class VegMenu {
public:
    string getVegMenu() {
        return "Veg Menu: Aloo Gobi, Paneer Tikka, Dal Makhani, Roti, Rice";
    }
};

class NonVegMenu {
public:
    string getNonVegMenu() {
        return "Non-Veg Menu: Chicken Curry, Tandoori Chicken, Biryani";
    }
};

class VegNonBothMenu {
public:
    string getVegNonBothMenu() {
        return "Veg/Non-Both Menu: Veg Biryani, Butter Chicken, Mixed Grill";
    }
};


class HotelKeeper {
private:
    VegMenu vegMenu;
    NonVegMenu nonVegMenu;
    VegNonBothMenu vegNonBothMenu;

public:
    string getVegMenu() {
        return vegMenu.getVegMenu();
    }

    string getNonVegMenu() {
        return nonVegMenu.getNonVegMenu();
    }

    string getVegNonBothMenu() {
        return vegNonBothMenu.getVegNonBothMenu();
    }
};

int main() {
    HotelKeeper keeper;

    cout << "Client: I want the Veg menu." << endl;
    cout << "Hotel Keeper: Here is the " << keeper.getVegMenu() << endl;

    cout << "Client: I want the Non-Veg menu." << endl;
    cout << "Hotel Keeper: Here is the " << keeper.getNonVegMenu() <<endl;

    cout << "Client: I want the Veg/Non-Both menu." << endl;
    cout << "Hotel Keeper: Here is the " << keeper.getVegNonBothMenu() << endl;

    return 0;
}
