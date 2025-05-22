#include<iostream>
using namespace std;
class book
{
    public:
    string title;
    string author;
    void display()
    {
        cout<<title<<"-"<<author<<endl;  
    }
};
int main()
{
    book b1;
    b1.author= "vvvv";
    b1.title="C++";
    b1.display();
    return 0;
}