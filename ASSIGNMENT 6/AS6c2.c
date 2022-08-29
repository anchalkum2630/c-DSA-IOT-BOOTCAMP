#include<stdio.h>
int main()
{
 int i,n,s=0;
 printf("Enter the number to print sum of even numbers");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    {
    	
        s=s+2*i;
} 
printf("\nsum = %d",s);
    return 0;
 }
