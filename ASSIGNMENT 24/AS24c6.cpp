#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
    int a,b;
    cout<<"Enter two number for swapping"<<endl;
    cin>>a>>b;
    swap(a,b);
}
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping"<<endl<<"A ==>"<<a<<endl<<"B  ==>"<<b;
}
