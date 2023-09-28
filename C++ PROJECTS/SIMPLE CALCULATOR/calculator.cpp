#include<iostream>
using namespace std;
float num1,num2,res;
char operation;
int operate()
{
	cout<<"Choose operation from ('+','-','x','/') : ";
    cin>>operation;
    if(operation=='+')
    {
    	return 0;
	}
	else if(operation=='-')
    {
    	return 0;
	}
	else if(operation=='x')
    {
    	return 0;
	}
	else if(operation=='/')
    {
    	return 0;
	}
	else
	{
	    cout<<"Enter valid operation"<<endl;
    	operate();
    }
}
int number()
{
	num1=0,num2=0;
	cout<<endl<<"Enter first number : ";
    cin>>num1;
	operate();
    cout<<"Enter second number : ";
    cin>>num2;
    return 0;
}
int process()
{
	switch(operation)
	{
		case '+':res=num1+num2;
		         break;
		case '-':res=num1-num2;
		         break;
		case 'x':res=num1*num2;
		         break;
		case '/':res=num1/num2;
		         break;
	}
	return 0;
}
int result()
{
	cout<<endl<<"  "<<num1<<" "<<operation<<" "<<num2<<"  =  "<<res;
	return 0;
}
int main()
{
	int n=0;
	cout<<endl<<endl<<"--------------- SIMPLE CALCULATOR ---------------"<<endl<<endl;
	do
	{
	  	number();
	  	process();
	  	result();
	  	cout<<endl<<endl<<"Want to end the calculation (press = 0)"<<endl<<"Want to calculate again (press = 1)"<<endl<<"Enter Choice = ";
		cin>>n;
	}while(n==1);
	cout<<"               END OF CALCULATION  ";
	return 0;
}
