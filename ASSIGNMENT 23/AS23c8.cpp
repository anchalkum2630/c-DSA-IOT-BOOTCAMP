#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter two number "<<endl;
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"After swapping "<<endl<<"a= "<<a<<" b= "<<b;
return 0;
}
