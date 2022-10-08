#include<iostream>
using namespace std;
class Area
{
private:
    int a,l,b,r,ar;
public:
    void Square(int x)
    {
        a=x;
        ar=a*a;
    }
    void Rectangle(int x,int y)
    {
        l=x;
        b=y;
        ar=l*b;
    }
    void Circle(int x)
    {
        r=x;
        ar=3.14*r*r;
    }
    void Display()
    {
        cout<<"AREA = "<<ar<<endl;
    }
};
int main()
{
    Area a1,a2,a3;
    a1.Square(4);
    a1.Display();
    a2.Rectangle(5,6);
    a2.Display();
    a3.Circle(10);
    a3.Display();
    return 0;
}
