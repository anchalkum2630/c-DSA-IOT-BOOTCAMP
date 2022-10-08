#include<iostream>
using namespace std;
class Circle
{
private:
    int r,ar;
public:
    void SetData(int x)
    {
       r=x;
    }
    void GetData()
    {
        ar=3.14*r*r;
        cout<<"AREA OF CIRCLE = "<<ar;
    }
};
int main()
{
    Circle c1;
    c1.SetData(10);
    c1.GetData();
    return 0;
}
