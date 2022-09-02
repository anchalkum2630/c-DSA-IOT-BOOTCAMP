#include<iostream>
using namespace std;
int add(int,int=0,int=0);
int main()
{
    int a,b,c,d,e;
    cout<<"Enter three number";
    cin>>a>>b>>c;
    d=add(a,b);
    e=add(a,b,c);
    cout<<"sum of two number "<<d<<endl<<"sum of three number "<<e;
    return 0;
}
int add(int x,int y, int z)
{
    return x+y+z;
}
