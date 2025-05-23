#include<iostream>
using namespace std;
class car{
    string model;
    int years;
    public:
    car(){
        model="unknown";
        years=0;
    }
    car(string m)
    {
        model=m;
        years=0;
    }
    car(string m, int y)
    {
        model=m;
        years=y;
    }
    void display(){
        cout<<"Model:"<<model<<",Year:"<<years<<endl;
    }
};
int main(){
    car c1;
    car c2("Toyoto");
    car c3("honda", 2020);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}