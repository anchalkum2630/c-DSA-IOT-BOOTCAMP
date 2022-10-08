#include<stdio.h>
void odd(int);
int main()
{
	int n;
	printf("ENTER NUMBER TO PRINT ODD NUMBERS\n");
	scanf("%d",&n);
	printf("ODD NUMBERS = ");
	odd(n);
	return 0;
}
void odd(int n)
{
	if(n>=1)
	{
		odd(n-1);
		printf("%d ",2*n-1);
    }
}
