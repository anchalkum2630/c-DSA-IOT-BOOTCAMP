#include<iostream>
using namespace std;
class Bill
{
private:
    int id;
    float bill,amt;
    string name;
public:
    void get()
    {
        cout<<"ENTER CUSTOMER NAME : "<<endl;
        cin>>name;
        cout<<"ENTER CUSTOMER ID : "<<endl;
        cin>>id;
        cout<<"ENTER BILL COUNT : "<<endl;
        cin>>bill;
    }
    float calculatebill();
    void Display()
    {
        cout<<"AMOUNT OF ELECTRICITY BILL : "<<calculatebill();
    }

};
float Bill::calculatebill()
    {
        if(bill<=100)
            return bill*1.20;
        else
        {
            if(bill>=200)
                return 120+(bill-100)*2;
            else
                return 320+(bill-200)*3;
        }
    }
int main()
{
    Bill b1;
    b1.get();
    b1.Display();
    return 0;
}
