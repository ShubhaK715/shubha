#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int *rollno=new int[n];
    cout<<"Enter student rollno: \n";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<". ";
        cin>>rollno[i];
    }
    int key;
    cout<<"Enter the rollno to search: ";
    cin>>key;
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(rollno[i]==key)
        {
            cout<<"Student"<<key<<" found at position "<<i+1<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    {
        cout<<"Student"<<key<<" not found in the list."<<endl;
    }
    delete[] rollno;
    return 0;
}