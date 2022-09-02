#include<iostream>
#include<math.h>
using namespace std;
inline void power(int,int);
int main()
{
    int a,b;
    cout<<"Enter the number and the power raised by";
    cin>>a>>b;
    power(a,b);
    return 0;
}
void power(int x,int y)
{
    int c;
    c=pow(x,y);
    cout<<endl<<"number is"<<c;
}
