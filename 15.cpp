#include<iostream>
using namespace std;
class student{
    public:
    string name,collegename;
    int age,usn;
    student(string n, int b, string c, int a)
    {
        name=n;
        age=b;
        collegename=c;
        usn=a;
        cout<<" Name:"<<name<<"Age:"<<age<<"College:"<<collegename<<"USN:"<<usn<<endl;
    }
};
int main()
{
    student s1("shubha", 10, "CEC COLLEGE",80);
    student s2("john",10,"cec college",81);
    return 0;
}