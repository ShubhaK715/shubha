#include<iostream>
using namespace std;
class deom{
    public:
    void show();
};
void deom::show(){
    cout<<"Hello from demo class"<<endl;
}
int main(){
    deom d;
    d.show();
    return 0;
}