#include<iostream>
using namespace std;
void displatinventory(int *inventory, int size)
{
    cout<<"Warehouse Inventory Items:";
    for (int i=0;i<size;i++)
    {
        cout<<*(inventory+i)<<" ";
    }
    cout<<endl;
}
int main()
{
    int inventory[5]= {50,30,20,40,10};
    int *ptr=inventory;
    displatinventory(ptr,5);
    *(ptr+2)=25;
    cout<<"Update inventory:";
    for(int i=0;i<5; i++)
    {
        cout<<inventory[i]<<" ";
    }
    cout<<endl;
    return 0;
}