#include<iostream>
using namespace std;
class product{
    private:
    int quantity;
    float priceperitem;
    public:
    void setproduct(int q, float price)
    {
        if(q>0 && price>0)
        {
            quantity=q;
            priceperitem=price;
        }
        else{
            cout<<"Invalid quantity or price!"<<endl;
        }
    }
    float gettotalprice()
    {
        return quantity*priceperitem-250;
    }
    int getquantity()
    {
        return quantity;
    }
    float getunitprice()
    {
        return priceperitem;
    }
};
int main()
{
    product item1;
    item1.setproduct(3, 499.99);
    cout<<"Items Bought:"<<item1.getquantity()<<endl;
    cout<<"Price Per Item:"<<item1.getunitprice()<<endl;
    cout<<"Total Cost:"<<item1.gettotalprice()<<endl;
    return 0;
}