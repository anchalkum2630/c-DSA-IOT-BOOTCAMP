#include<iostream>
using namespace std;
class ReverseNumber
{
private:
    int num,rev=0;
public:
    void SetData(int x)
    {
        num=x;
    }
    void Reverse();
    void Display()
    {
        cout<<"REVERSE NUMBER = "<<rev;
    }
};
void ReverseNumber::Reverse()
{
    int d;
   while(num>0)
   {
    d=num%10;
    rev=rev*10+d;
    num=num/10;
   }
}
int main()
{
    ReverseNumber r1;
    r1.SetData(432);
    r1.Reverse();
    r1.Display();
    return 0;
}
