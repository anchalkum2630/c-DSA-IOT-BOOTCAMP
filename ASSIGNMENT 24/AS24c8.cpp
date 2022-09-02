#include<iostream>
#include<math.h>
using namespace std;
void area(int);
void area(int,int);
void area(int,int,int);
int main()
{
	int r,l,b,a,d,c;
	cout<<"Enter the radius of the circle to calculate area "<<endl;
	cin>>r;
	area(r);
	cout<<"Enter the length and breadth of a rectangle to calculate area"<<endl;
	cin>>l>>b;
	area(l,b);
	cout<<"Enter the length of the triangle to find area"<<endl;
	cin>>a>>d>>c;
	area(a,d,c);
	return 0;
	
}
void area(int x)
{
    cout<<"Area of the radius = "<<3.14*x*x<<endl; 	
}
void area(int x,int y)
{
	cout<<"Area of the rectangle = "<<x*y<<endl;
}
void area(int x,int y, int z)
{
	float s;
	s=(x+y+z)/2;
	cout<<"Area of the triangle = "<<sqrt(s*(s-x)*(s-y)*(s-z))<<endl;
}
