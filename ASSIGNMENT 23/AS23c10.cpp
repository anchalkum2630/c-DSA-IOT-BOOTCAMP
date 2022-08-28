#include<iostream>
using namespace std;
int main()
{
int i,a[10],s=0;
for(i=0;i<10;i++)
{
    cin>>a[i];
    s=s+a[i];
}
cout<<"Sum of the array is "<<s;
return 0;
}
