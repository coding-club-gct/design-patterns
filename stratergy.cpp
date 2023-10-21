#include <iostream>
class PaymentStratergy{
    public:
    virtual void pay(int amt)=0;
};
class CreditCard : public PaymentStratergy{
    public:
    void pay(int amt) override{
        std::cout<<"\nAmount Paid through Credit card is "<< amt;
    }
};
class GooglePay : public PaymentStratergy{
    public:
    void pay(int amt) override{
        std::cout<<"\nAmount Paid through GooglePay is "<< amt;
    }
};
class ShoppingCart{
    private:
    PaymentStratergy* paymentStratergy;
    public:
    void setStatergy(PaymentStratergy* stratergy){
        paymentStratergy=stratergy;
    }
    void PayAmount(int amt){
        paymentStratergy->pay(amt);

    }
};
int main(){
    ShoppingCart base;
    PaymentStratergy* sub1 = new CreditCard();
    PaymentStratergy* sub2 = new GooglePay();
    base.setStatergy(sub1);
    base.PayAmount(1000);
    base.setStatergy(sub2);
    base.PayAmount(2000);
    return 0;
}