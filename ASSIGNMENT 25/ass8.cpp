#include<iostream>
using namespace std;
class Rectangle
{
private:
    int l,b,ar;
public:
    void SetData(int x,int y)
    {
        l=x;
        b=y;
    }
    void GetData()
    {
        ar=l*b;
        cout<<"AREA OF RECTANGLE = "<<ar;
    }
};
int main()
{
    Rectangle r1;
    r1.SetData(8,9);
    r1.GetData();
    return 0;
}
