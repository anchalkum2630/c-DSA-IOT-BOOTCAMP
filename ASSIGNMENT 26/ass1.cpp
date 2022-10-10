#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void SetData(int x,int y)
    {
        a=x;
        b=y;
    }
    void ShowData()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.SetData(5,6);
    c1.ShowData();
    c2.SetData(2,3);
    c2.ShowData();
    c3=c1.add(c2);
    c3.ShowData();
}
