#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw()=0;
};
class circle:public shape
{
    public:
    void draw() override
    {
        cout<<"Drawing circle"<<endl;
    }
};
int main()
{
    circle c;
    c.draw();
    return 0;
}