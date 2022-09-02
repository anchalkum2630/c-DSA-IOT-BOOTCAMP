#include<iostream>
using namespace std;
void Prime(int);
int main()
{
int a;
cout<<"Enter a number to check whether the number is prime or not";
cin>>a;
Prime(a);
return 0;
}
void Prime(int x)
{
  int i,d,c=0;
  for(i=1;i<=x;i++)
  {
   d=x%i;
   if(d==0)
   {
        c++;
   }
  }
  if(c==2)
    cout<<x<<"is a prime number";
  else
    cout<<x<<"is not a prime number";
  }

