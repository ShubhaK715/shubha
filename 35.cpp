#include<iostream>
using namespace std;
class payment
{
    public:
    virtual~payment(){}
    virtual void pay()=0;
};
class creditcardpayment:public payment{
    public:
    void pay() override{
        cout<<"Processing creditcard payment..."<<endl;
    }
};
class paypalpayment:public payment{
    public:
    void pay() override{
        cout<<"Processing paypal payment..."<<endl;
    }
};
int main()
{
    payment*paymentmethod=nullptr; 
    int choice;
    cout<<"Choose a payment method:\n";
    cout<<"1.Credit card\n";
    cout<<"2.PayPal\n";
    cout<<"Enter your choice(1 or 2):";
    cin>>choice;
    switch(choice)
    {
    case 1:
        paymentmethod=new creditcardpayment();
        break;
    case 2:
        paymentmethod=new paypalpayment();
        break;
    default:
    cout<<"Invalid choice. Exiting..."<<endl;
    return 1;
    }
    paymentmethod->pay();
    delete paymentmethod;
    return 0;
}

