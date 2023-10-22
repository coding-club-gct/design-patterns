/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


class Fruit{
    public:
    virtual void produceJuice()=0;
};

class Apple:public Fruit{
public:
    void produceJuice() override{
        cout<<"Apple Juice is Ready"<<endl;
    }
};

class Banana:public Fruit{
public:
    void produceJuice() override{
        cout<<"Banana Juice is Ready"<<endl;
    }
};

class Watermelon:public Fruit{
public:
    void produceJuice() override{
        cout<<"Watermelon Juice is Ready"<<endl;
    }
};

class FruitFactory{
public:
    Fruit* getFruit(const std:: string& name){
        if(name=="Apple"){
            return new Apple();
        }
        else if(name=="Banana"){
            return new Banana();
        }
        else if(name=="Watermelon"){
            return new Watermelon();
        }
        throw std::runtime_error("No matching object could be created");
    }
};

int main()
{
   FruitFactory fruitfactory;
   Fruit* apple=fruitfactory.getFruit("Apple");
   apple->produceJuice();
   Fruit* banana=fruitfactory.getFruit("Banana");
   banana->produceJuice();
   Fruit* watermelon=fruitfactory.getFruit("Watermelon");
   watermelon->produceJuice();
   
   
   

    return 0;
}
