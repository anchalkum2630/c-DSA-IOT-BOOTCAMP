#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    void setData(int x,int y)
    {
        real=x;
        img=y;
    }
    void Display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex c,Complex d)
{
    Complex temp;
    temp.real=d.real+c.real;
    temp.img=d.img+c.img;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setData(5,6);
    c2.setData(4,2);
    c3=c1+c2;
    c3.Display();
}
