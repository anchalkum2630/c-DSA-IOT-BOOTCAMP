#include<iostream>
using namespace std;
void great(int);
int main()
{
    int a;
    cout<<"Enter the number";
    cin>>a;
    great(a);
    return 0;
}
void great(int x)
{
    int d,l=0;
   while(x>0)
   {
       d=x%10;
       if(l<d)
        l=d;
       x=x/10;
   }
   cout<<endl<<"The greatest digit in the number is "<<l;
}
