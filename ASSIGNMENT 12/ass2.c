#include<stdio.h>
void natural(int);
int main()
{
	int n;
	printf("ENTER NUMBER TO PRINT NATURAL NUMBERS\n");
	scanf("%d",&n);
	printf("NATURAL NUMBERS = ");
	natural(n);
	return 0;
}
void natural(int n)
{
	if(n>=1)
	{
		printf("%d ",n);
	    natural(n-1);
	}
}
