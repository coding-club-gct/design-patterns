/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class OldPrinter{
public:
    void print(){
        cout<<"Old printer"<<endl;
    }
};

class NewPrinter{
public:
    void print(){
        cout<<"New printer"<<endl;
    }
};

class Printer{
private:
    NewPrinter newprinter;
public:
   void usePrinter(){
       newprinter.print();
   }

    
    
};


int main()
{
    OldPrinter oldprinter;
    oldprinter.print();
    
    Printer newPrinter;
    newPrinter.usePrinter();
    

    return 0;
}
