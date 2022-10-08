#include<stdio.h>
void even(int);
int main()
{
	int n;
	printf("ENTER NUMBER TO PRINT REVERSE EVEN NUMBERS\n");
	scanf("%d",&n);
	printf("EVEN NUMBERS = ");
	even(n);
	return 0;
}
void even(int n)
{
	if(n>=1)
	{
	
		printf("%d ",2*n);
	    even(n-1);
    }
}
