#include<iostream>
using namespace std;
class invoice{
    public:
    void generateinvoice(int productID)
    {
        cout<<" Generating invoice for product ID:"<<productID<<endl;
        cout<<"Default quantity: 1| no discount applied."<<endl;
    }
    void generateinvoice(int productID, int quantity)
    {
        cout<<" Generating invoice for product ID:"<<productID<<endl;
        cout<<"Quantity:"<<quantity<<"| no discount applied."<<endl;
    }
    void generateinvoice(int productID, int quantity, float discount)
    {
        cout<<" Generating invoice for product ID:"<<productID<<endl;
        cout<<"Quantity:"<<quantity<<"|discount:"<<discount<<endl;
    }
};
int main()
{
    invoice inv;
    inv.generateinvoice(101);
    inv.generateinvoice(102,3);
    inv.generateinvoice(103, 5, 10.5);
    return 0;
}