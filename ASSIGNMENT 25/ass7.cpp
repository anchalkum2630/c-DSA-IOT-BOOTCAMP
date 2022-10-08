#include<iostream>
using namespace std;
class Greatest
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
    void Largest();
};
void Greatest::Largest()
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
    Greatest g1;
    g1.SetData(60,84,19);
    g1.Largest();
    return 0;
}

