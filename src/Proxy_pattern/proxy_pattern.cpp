/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;


class Internet{
public:
    virtual void access(const string& site )=0;
};

class RealInternet: public Internet{
public:
    void access(const string& site) override{
        cout<<"Accessing the Website using Real internet!!"<<endl;
    }
};
class ProxyInternet :public Internet{
private:
   RealInternet* realInternet;
   vector<string>RestrictedSites;    
public:
   ProxyInternet(){
   realInternet=new RealInternet();
   RestrictedSites = { "restricted-site-1.com", "restricted-site-2.com" };
    }
    
    void access(const string& site)override{
        if(isAllowed(site)){
            realInternet->access(site);
        }
        else{
            cout<<"Site is restricted!!"<<endl;
        }
    }
    
    bool isAllowed(const string& site){
        for(const string& i:RestrictedSites){
            if(i==site){
                return false;
            }
        }
        return true;
    }

   

    
};

int main()
{
    Internet* internet= new ProxyInternet();
    internet->access("example.com");
    internet->access("restricted-site-1.com");
    internet->access("example2.com");
    internet->access("restricted-site-3.com");

    delete internet;

    return 0;
}
