#include<iostream>
using namespace std;
class Numbers
{
private:
    int x,y,z;
public:
    void setData(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void Display()
    {
        cout<<"NUMBERS = "<<x<<" "<<y<<" "<<z<<endl;
    }
    Numbers operator-()
    {
        Numbers n;
        n.x=-x;
        n.y=-y;
        n.z=-z;
        return n;
    }
};
int main()
{
    Numbers n1,n2;
    n1.setData(5,6,8);
    n2=-n1;
    n1.Display();
    n2.Display();
    return 0;
}
