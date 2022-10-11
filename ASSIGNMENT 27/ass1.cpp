#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    void SetData(int x,int y)
    {
        real=x;
        img=y;
    }
    void Display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
     Complex operator*(Complex c)
    {
        Complex temp;
        temp.real=real*c.real;
        temp.img=img*c.img;
        return temp;
    }
    void operator==(Complex c)
    {
        if(real==c.real&&img==c.img)
           cout<<"THEY ARE EQUAL";
        else
           cout<<"THEY ARE NOT EQUAL";
    }
};
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.SetData(4,5);
    c2.SetData(2,5);
    c3=c1+c2;
    c3.Display();
    c4=c1-c2;
    c4.Display();
    c5=c1*c2;
    c5.Display();
    c1==c2;
    return 0;
}
