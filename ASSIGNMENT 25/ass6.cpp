#include<iostream>
using namespace std;
class Square
{
private:
    int num,squ;
public:
    void SetData(int x)
    {
        num=x;
    }
    void GetData()
    {
        squ=num*num;
        cout<<"SQUARE OF "<<num<<" = "<<squ;
    }
};
int main()
{
    Square s1;
    s1.SetData(6);
    s1.GetData();
    return 0;
}
