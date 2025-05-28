#include<iostream>
#include<string>
using namespace std;
class vehicle
{
    private:
    string name, model;
    int year;
    public:
    vehicle(string m, int y,string n)
    {
        model=m;
        year=y;
        name=n;
    }
    void show()
    {
        cout<<"Model:"<<model
            <<",Year:"<<year
            <<"Owner:"<<name<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter number of vehicals rented:";
    cin>>n;
    vehicle **fleet= new vehicle*[n];
    for(int i=0; i<n; i++)
    {
        string model, name;
        int year;
        cout<<"\n Enter details of vehical"<<(i+1)<<":\n";
        cout<<"model:";
        cin.ignore();
        getline(cin,model);
        cout<<"Year:";
        cin>>year;
        cin.ignore();
        cout<<"Owner:";
        getline(cin, name);
        fleet[i]=new vehicle(model, year, name);
    }
    cout<<"\n======= Rented Vehicles List =========\n";
    for(int i=0;i<n;i++)
    {
        fleet[i]->show();
    }
    for(int i=0;i<n;i++)
    {
        delete fleet[i];
    }
    delete[]fleet;
    return 0;
}