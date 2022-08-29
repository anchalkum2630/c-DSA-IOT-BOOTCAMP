#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter the number to count its digits\n");
	scanf("%d",&n);
	while(n>0)
	{
		c++;
		n=n/10;
	}
	printf("The number of the digit = %d",c);
	return 0;
}
