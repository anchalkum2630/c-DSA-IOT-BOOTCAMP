#include<iostream>
using namespace std;
class Box
{
private:
    int l,b,h,v;
public:
    Box()
    {
        l=0;
        b=0;
        h=0;
    }
    void setData( int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    void Displayvolume()
    {
        v=l*b*h;
        cout<<"VOLUME = "<<v<<endl;
    }
};
int main()
{
    Box b1,b2,b3;
    b1.setData(7,5,8);
    b1.Displayvolume();
    b2.setData(9,2,8);
    b2.Displayvolume();
    b3.Displayvolume();
    return 0;
}
