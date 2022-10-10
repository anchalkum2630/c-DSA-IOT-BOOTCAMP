#include<iostream>
using namespace std;
class Bank
{
private:
   int pr,rt,yr;
   float si;
public:
    Bank()
    {
        pr=0;
        rt=8;
        yr=0;
        si=0;
    }
    void setData(int x,int y,int z)
    {
        pr=x;
        rt=y;
        yr=z;
    }
    void simpleinterest()
    {
        si=(pr*rt*yr)/100;
    }
    void Display()
    {
        cout<<"PRINCIPAL = "<<pr<<"  RATE OF INTEREST = "<<rt<<"YEAR = "<<yr<<endl<<"  SIMPLE INTEREST = "<<si<<endl;
    }
};
int main()
{
    Bank b1,b2,b3;
    b1.setData(3000,5,10);
    b2.setData(7000,2,5);
    b3.setData(9000,3,15);
    b1.simpleinterest();
    b2.simpleinterest();
    b3.simpleinterest();
    b1.Display();
    b2.Display();
    b3.Display();

}
