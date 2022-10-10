#include<iostream>
using namespace std;
class Date
{
private:
    int d,m,y;
public:
    Date(int x,int b,int a)
    {
       d=x;
       m=b;
       y=a;
    }
    void showDate()
    {
        cout<<d<<"/"<<m<<"/"<<y;
    }
};
int main()
{
    Date d1(4,5,22);
    d1.showDate();
    return 0;
}
