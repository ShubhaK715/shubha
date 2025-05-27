#include<iostream>
#include<string>
using namespace std;
class FIR{
    public:
    string complainantname;
    FIR(string name):complainantname(name){}
    virtual void registerCase()=0;
    virtual~FIR(){}
};
class TheftCase : public FIR {
public:
TheftCase(string name):FIR(name){}
    void registerCase() override {
        cout << "Theft FIR registered for " <<complainantname << "." << endl;
        cout << "Action: Investigation started for stolen property." << endl << endl;
    }
};
class AccidentCase : public FIR {
public:
AccidentCase(string name):FIR(name){}
    void registerCase() override {
        cout << "Accident FIR registered for " <<complainantname << "." << endl;
        cout << "Action: Ambulance dispatched and accident site team notified." << endl << endl;
    }
};
class MissingPersonCase : public FIR {
public:
MissingPersonCase(string name):FIR(name){}
    void registerCase() override {
        cout << "Missing person FIR registered for " <<complainantname << "." << endl;
        cout << "Action: Local patrol units alterted and investigation initiated." << endl;
    }
};
int main()
{
    FIR*case1=new TheftCase("Ravi");
    FIR*case2=new AccidentCase("Sita");
    FIR*case3=new MissingPersonCase("Karna");
    cout<<"===FIR Registration==="<<endl;
    case1->registerCase();
    cout<<endl;
    case2->registerCase();
    cout<<endl;
    case3->registerCase();
    delete case1;
    delete case2;
    delete case3;
    return 0;
}
