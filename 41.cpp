#include<iostream>
using namespace std;
class shape
{
    public:
    void setcolor(string c)
    {
        cout<<"Sitting color...."<<endl;
    }
};
class circle:public shape
{
    public:
    void drawcircle()
    {
        cout<<"Drawing circle..."<<endl;
    }
};
class rectangle:public shape
{
    public:
    void drawrectangle()
    {
        cout<<"Drawing rectangle..."<<endl;
    }
};
int main()
{
    circle c;
    rectangle r;
    c.setcolor("pink");
    c.drawcircle();
    r.setcolor("blue");
    r.drawrectangle();
    return 0;
}