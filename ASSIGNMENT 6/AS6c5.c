#include<stdio.h>
int main()
{
 int i,n,s=0;
 printf("Enter the number to print sum of cubes of the numbers\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    {
    	
        s=s+i*i*i;
    }
    printf("Sum = %d",s);
    return 0;
 }
