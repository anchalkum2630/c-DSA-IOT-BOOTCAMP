#include<iostream>
using namespace std;
class LargestNumber
{
private:
    int a,b,c;
public:
    void SetData(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void Greatest();
};
void LargestNumber::Greatest()
{
        if(a>b)
        {
            if(a>c)
                cout<<"Greatest number = "<<a;
            else
                cout<<"Greatest number = "<<c;
        }
        else
        {
            if(b>c)
                cout<<"Greatest number = "<<b;
            else
                cout<<"Greatest number = "<<c;
        }
}
int main()
{
    LargestNumber l1;
    l1.SetData(6,4,9);
    l1.Greatest();
    return 0;
}

