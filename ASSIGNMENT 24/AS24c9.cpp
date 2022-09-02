#include<iostream>
using namespace std;
void max(int,int);
void max(float,float);
int main()
{
	int a,b;
	float l,h;
	cout<<"Enter two number to find the greater number";
	cin>>a>>b;
	max(a,b);
	cout<<"Enter two number to find the greater number";
	cin>>l>>h;
	max(l,h);
	return 0;
}
void max(int x,int y)
{
	if(x>y)
	cout<<x<<" is greater";
	else
	cout<<y<<" is greater";
}
void max(float x,float y)
{
	if(x>y)
	cout<<x<<" is greater";
	else
	cout<<y<<" is greater";
}
