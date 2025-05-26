#include<iostream>
using namespace std;
class person{
    protected:
    string name, disease, patientcondition;
    int age, billamount;
    public:
    void setperson(string b, int a, string c, int d, string e)
    {
        name=b, age=a, disease=c, billamount=d, patientcondition=e;
    }
};
class doctor:public person
{
    public:
    void patientdetails()
    {
        cout<<"Patient name: "<<name<<endl;
        cout<<"Patient age:"<<age<<endl;
        cout<<"Disease:"<<disease<<endl;
        cout<<"BillAmount:$"<<billamount<<endl;
        cout<<"Reviewing Patient Condition:"<<patientcondition<<endl;

    }
};
int main()
{
    doctor sp ;
    sp.setperson("Jhon", 45, "Pneumonia", 3200.5, "Pneumonia");
    sp.patientdetails();
    return 0;
}