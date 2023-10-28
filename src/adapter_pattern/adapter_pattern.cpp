#include <iostream>

using namespace std;

// The existing OldPrinter class
class OldPrinter {
public:
    void printOld() {
        cout << "Old printer" << endl;
    }
};

// The existing NewPrinter class
class NewPrinter {
public:
    void printNew() {
        cout << "New printer" << endl;
    }
};

// The Printer class with NewPrinter functionality
class Printer {
private:
    NewPrinter newPrinter;

public:
    void usePrinter() {
        newPrinter.printNew();
    }
};

// The Adapter for OldPrinter, making it work with the Printer
class OldPrinterAdapter {
private:
    OldPrinter oldPrinter;

public:
    void usePrinter() {
        oldPrinter.printOld();
    }
};

int main() {
    OldPrinterAdapter oldPrinterAdapter;
    oldPrinterAdapter.usePrinter(); // This adapter allows OldPrinter to be used through Printer

    Printer newPrinter;
    newPrinter.usePrinter(); // This uses the NewPrinter directly

    return 0;
}
