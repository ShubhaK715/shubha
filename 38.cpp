#include<iostream>
using namespace std;
class rain
{
    public:
    void start()
    {
        cout<<"today the rain may arrive."<<endl;
    }
};
class today:public rain
{
    public:
    void raining()
    {
        cout<<"its raining"<<endl;
    }
};
int main()
{
    today r;
    r.start();
    r.raining();
    return 0;
}