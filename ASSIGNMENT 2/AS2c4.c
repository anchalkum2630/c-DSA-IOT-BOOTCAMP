#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two number a and b for swapping\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swapping \n a=%d   b=%d",a,b);
	return 0;
}
