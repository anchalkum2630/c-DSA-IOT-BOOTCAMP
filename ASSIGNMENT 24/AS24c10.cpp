#include<iostream>
using namespace std;
int add(int,int);
float add(float,float);
double add(double,double);
int main()
{
	int a,b;
	float l,h;
	double k,m;
	cout<<"Enter the two number(in int) to calculate sum"<<endl;
	cin>>a>>b;
	cout<<"sum = "<<add(a,b)<<endl;
    cout<<"Enter the two number(in real) to calculate sum"<<endl;
	cin>>l>>h;
	cout<<"sum = "<<add(l,h)<<endl;
	cout<<"Enter the two number(in double) to calculate sum"<<endl;
	cin>>k>>m;
	cout<<"sum = "<<add(k,m)<<endl;
	return 0;
}
int add(int x,int y)
{
	return x+y;
}
float add(float x,float y)
{
	return x+y;
}
double add(double x,double y)
{
	return x+y;
}
