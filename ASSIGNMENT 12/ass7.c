#include<stdio.h>
void square(int);
int main()
{
	int n;
	printf("ENTER NUMBER TO PRINT SQUARE OF NTH NATURAL NUMBERS\n");
	scanf("%d",&n);
	square(n);
	return 0;
}
void square(int n)
{
	if(n>=1)
	{
	    square(n-1);
		printf("SQUARE OF %d = %d\n",n,n*n);    
    }
}
