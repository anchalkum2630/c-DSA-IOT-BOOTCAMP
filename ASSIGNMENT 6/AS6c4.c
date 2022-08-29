#include<stdio.h>
int main()
{
 int i,n,s=0;
 printf("Enter the number to print sum of squares of the numbers");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    {
    	
        s=s+i*i;
    }
    printf("\nSum = %d",s);
    return 0;
 }
