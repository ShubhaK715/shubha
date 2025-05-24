#include<iostream>
using namespace std;
class atm{
    private:
    int pin=123;
    double balance=5000;
    bool verifypin(int enteredpin)
    {
        return enteredpin==pin;
    }
    public:
    void withdrawcash(int enteredpin, double amount)
    {
        if(verifypin(enteredpin))
        {
            if(amount<=balance)
            {
                balance-=amount;
                cout<<"Withdrawal successful. Remaining balance:"<<balance<<endl;
            }
            else{
                cout<<"Insufficient balance."<<endl;
            }
        }
        else{
            cout<<"Invalid PIN!"<<endl;
        }
    }
    void checkbalance(int enteredpin)
    {
        if(verifypin(enteredpin))
        {
            cout<<"Your balance is:"<<balance<<endl;
        }
        else{
            cout<<"Invalid PIN!"<<endl;
        }
    }
};
int main()
{
    atm myatm1;
    myatm1.withdrawcash(123,1000);
    myatm1.checkbalance(123);
    myatm1.withdrawcash(1112,4500);
    return 0;
}