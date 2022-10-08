#include<iostream>
using namespace std;
class complex
{
private:
    int real,img;
public:
    void SetData(int x,int y)
    {
        real=x;
        img=y;
    }
    void GetData()
    {
        cout<<real<<" + "<<img<<"i";
    }
};
int main()
{
    complex c1,c2;
    c1.SetData(5,7);
    c1.GetData();
    return 0;
}

