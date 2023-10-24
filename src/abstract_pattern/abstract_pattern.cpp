/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Food{
public:
    virtual void prepareFood()=0;
};

class NonvegFood : public Food{
public:
    void prepareFood() override{
        cout<<"Your Non-Veg food is ready!!"<<endl;
    }
    
};


class VegFood : public Food{
public:
    void prepareFood() override{
        cout<<"Your Veg food is ready!!"<<endl;
    }
    
};



class Beverage{
public:
    virtual void prepareBeverage()=0;
};


class Nonveg : public Beverage{
public:
    void prepareBeverage() override{
        cout<<"Your Non-Veg Beverage is ready!!"<<endl;
    }
    
};


class Veg : public Beverage{
public:
    void prepareBeverage() override{
        cout<<"Your Veg Beverage is ready!!"<<endl;
    }
    
};


class Factory{
public:
   virtual Food* createFood()=0;
   virtual Beverage* createBeverage()=0;
   
};

class VegFactory : public Factory{
public:
  Food* createFood() override{
      return new VegFood();
  }
  
  Beverage* createBeverage() override{
      return new Veg();
  }
};

class NonVegFactory : public Factory{
public:
  Food* createFood() override{
      return new NonvegFood();
  }
  
  Beverage* createBeverage() override{
      return new Nonveg();
  }
};

int main(){
    
    
    VegFactory vegfactory;
    Food* veg_food=vegfactory.createFood();
    Beverage* veg_beverage=vegfactory.createBeverage();
    veg_food->prepareFood();
    veg_beverage->prepareBeverage();
    
    
    
    
    
    NonVegFactory nonvegfactory;
    Food* nonveg_food=nonvegfactory.createFood();
    Beverage* nonveg_beverage=nonvegfactory.createBeverage();
    nonveg_food->prepareFood();
    nonveg_beverage->prepareBeverage();


    delete veg_food;
    delete veg_beverage;
    delete nonveg_food;
    delete nonveg_beverage;
    
    
    
    
    
    return 0;
}





