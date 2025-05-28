#include<iostream>
using namespace std;
void displaybedoccupancy(int *pateintID, int *bedID, int size)
{
    cout<<"Hospital bed occupancy:\n";
    for (int i=0;i<size;i++)
    {
        cout<<"Bed ID:"<<*(bedID+i)<<"|Patient ID:"<<*(pateintID+i)<<" "<<endl;
    }
    cout<<endl;
}

int main()
{
    const int size=5;
    int bedID[size]= {201,202,203,204,205};
    int pateintID[size]={101,102,103,104,105};
    int *ptrpatient=pateintID;
    int *ptrbed=bedID;
    displaybedoccupancy(ptrpatient, ptrbed, size);
    *(ptrpatient +0)=108;
    *(ptrpatient +2)=109;
    *(ptrpatient +3)=112;
    *(ptrpatient +4)=114;
    cout<<"After updating pateint in bed 201,203,204,205:\n";
    displaybedoccupancy(ptrpatient, ptrbed, size);
    return 0;
}