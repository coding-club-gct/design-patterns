#include <iostream>

using namespace std;

class Chef{
public:
    void PreparePasta(){
        cout<<"Paste ready!!"<<endl;
        
    }
    void PreparePizza(){
        cout<<"Pizza ready!!"<<endl;
    }
    
};

class Command{
public:
    virtual void execute_command()=0;
};


class PizzaCommand : public Command{
    
private:

   Chef& chef;
   
   
public:

   PizzaCommand(Chef& chef) : chef(chef){}
   
   void execute_command()override{
       chef.PreparePizza();
       
   }
    
};

class PastaCommand : public Command{
    
private:

   Chef& chef;
   
   
public:

   PastaCommand(Chef& chef) : chef(chef){}
   
   void execute_command()override{
       chef.PreparePasta();
       
   }
    
};


int main()
{
    
    Chef chef;
    Command* pastacommand=new PastaCommand(chef);
    Command* pizzacommand=new PizzaCommand(chef);
    
    pastacommand->execute_command();
    pizzacommand->execute_command();

    return 0;
}
