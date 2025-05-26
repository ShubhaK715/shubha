#include<iostream>
using namespace std;
class vehicle
{
    public:
    void start()
    {
        cout<<"Vehicle has started."<<endl;
    }
};
class car:public vehicle
{
    public:
    void drive()
    {
        cout<<"Car is driving."<<endl;
    }
};
int main()
{
    car mycar;
    mycar.start();
    mycar.drive();
    return 0;
}