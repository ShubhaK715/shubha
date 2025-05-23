#include<iostream>
using namespace std;
class student{
public:
    string name;
    int age;
    student(string n, int a)
    {
        name=n;
        age=a;
    }
    student(const student &s)
    {
        name=s.name;
        age=s.age;
    }
    void display()
    {
        cout<<"Name:"<<name<<"Age:"<<age<<endl;
    }
};
int main()
{
    student s1("John", 20);
    student s2=s1;
    s2.display();
    student s3("ram",26);
    student s4=s3;
    s4.display();
    return 0;
}