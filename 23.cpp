#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    int speed;
    car (string b, int s)
    {
        brand=b;
        speed=s;
        cout<<"Parameterized constructor called,"<<endl;
    }
    car(const car &c)
    {
        brand=c.brand;
        speed=c.speed;
        cout<<"Copy constructor called."<<endl;

    }
    void drive()
    {
        cout<<"Driving"<<brand<<"at"<<speed<<"km/h."<<endl;
    }
};
int main()
{
    car car2("honda", 180);
    car2.drive();
    car car3=car2;
    car3.drive();
    return 0;
}