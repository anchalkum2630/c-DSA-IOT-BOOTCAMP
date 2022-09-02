#include<iostream>
using namespace std;
void check(int b[10]);
int main()
{
	int a[10],i;
	cout<<"Enter the 10 number to check whether it is in fabonacci series or not"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"n"<<i+1<<" = ";
		cin>>a[i];
		cout<<endl;
	}
	check(a);
	return 0;
}
void check(int b[])
{
	int a,h,t,j;
	a=b[0];
	h=b[1];
	for(j=0;j<8;j++)
	{
		t=a+h;
		if(t!=b[j+2])
		{
		cout<<"This is not fabonacci series";
		exit(0);
	    }
		a=h;
		h=t;		
	}
	cout<<"This is a fabonacci series";
}
