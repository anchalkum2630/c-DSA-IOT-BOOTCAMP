#include<iostream>
using namespace std;
class Number
{
private:
    int a,b;
public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void Display()
    {
        cout<<"NUMBER = "<<a<<" and "<<b<<endl;
    }
    Number operator++()
    {
        Number n;
        n.a=++a;
        n.b=++b;
        return n;
    }
    Number operator++(int)
    {
        Number n;
        n.a=a++;
        n.b=b++;
        return n;
    }
};
int main()
{
    Number n1,n2,n3;
    n1.setData(4,7);
    n1.Display();
    n2=++n1;
    n2.Display();
    n3=n1++;
    n3.Display();
    return 0;
}
