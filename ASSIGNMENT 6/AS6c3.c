#include<stdio.h>
int main()
{
 int i,n,s=0;
 printf("Enter the number to print sum of odd number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    {
    	
        s=s+2*i-1;
    }
    printf("Sum = %d",s);
    return 0;
 }
