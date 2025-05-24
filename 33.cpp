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
        float effectiveprice=priceperitem;
        if(priceperitem>2000)
        {
            effectiveprice-=500;
        }
        return quantity*effectiveprice;
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
    product item2;
    product item3;
    item1.setproduct(1, 2500);
    item2.setproduct(2, 2500);
    item3.setproduct(4, 250);
    cout<<"Items Bought:"<<item1.getquantity()<<endl;
    cout<<"Price Per Item:"<<item1.getunitprice()<<endl;
    cout<<"Total Cost:"<<item1.gettotalprice()<<endl;
    cout<<"Items Bought:"<<item2.getquantity()<<endl;
    cout<<"Price Per Item:"<<item2.getunitprice()<<endl;
    cout<<"Total Cost:"<<item2.gettotalprice()<<endl;
    cout<<"Items Bought:"<<item3.getquantity()<<endl;
    cout<<"Price Per Item:"<<item3.getunitprice()<<endl;
    cout<<"Total Cost:"<<item3.gettotalprice()<<endl;
    return 0;
}