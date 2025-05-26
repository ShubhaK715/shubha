#include<iostream>
using namespace std;
class user
{
    public:
    string name,email;
    void login()
    {
        cout<<name<<"has loged in through this email id"<<email<<endl;
    }
};
class coustmer:public user
{
    public:
    void browseproduct()
    {
        cout<<name<<"is browsing product"<<endl;
    }
};
int main()
{
    coustmer c;
    c.name="vvvv";
    c.email="vvvv123@gmail.com";
    c.login();
    c.browseproduct();
    return 0;
}