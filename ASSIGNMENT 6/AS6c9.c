#include<stdio.h>
int main()
{
	int n,c,d,i;
	printf("Enter two number to find LCM\n");
	scanf("%d %d",&n,&c);
	printf("LCM = ");
	d=n*c;
	for(i=1;i<=d;i++)
	{
	if(i%n==0&&i%c==0)
	{
	printf("%d",i);
	break;
    } 
    }
    return 0;
}
