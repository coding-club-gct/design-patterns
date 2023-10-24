#include <iostream>

using namespace std;

class SchoolBus{
public:
   static SchoolBus& getinstance(){
       static SchoolBus schoolbus;
       return schoolbus;
   }
   void getSchoolBus(){
       cout<<"Your Bus is Ready!!"<<endl;
   }
private:
SchoolBus(){
    
}
   SchoolBus(const SchoolBus&)=delete;
   SchoolBus& operator=(const SchoolBus&)=delete;
   
    
    
};



int main()
{
    SchoolBus& schoolbus=SchoolBus::getinstance();
    schoolbus.getSchoolBus();

    return 0;
}