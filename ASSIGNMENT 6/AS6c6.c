#include<stdio.h>
int main()
{
	int n,i,s=1;
	printf("Enter the number to calculate factorial\n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		s=s*i;
	}
	printf("factorial = %d",s);
	return 0;
}
