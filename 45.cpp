#include<iostream>
using namespace std;
class animal{
    public:
    animal()
    {
        cout<<"Animal Constructor called!"<<endl;
    }
    ~animal()
    {
        cout<<"Animal Destructor called!"<<endl;
    }
};
class dog:public animal
{
    public:
    dog()
    {
        cout<<"Dog Constructor called!"<<endl;
    }
    ~dog()
    {
        cout<<"Dog Destructor called!"<<endl;
    }
};
int main()
{
    dog d;
    return 0;
}