#include<iostream>
using namespace std;
class Cube
{
private:
    int a,v;
public:
    Cube(int x)
    {
       a=x;
    }
    void area()
    {
        v=a*a*a;
        cout<<"AREA OF CUBE = "<<v<<endl;
    }
};
int main()
{
    Cube c1(4);
    c1.area();
    return 0;
}
