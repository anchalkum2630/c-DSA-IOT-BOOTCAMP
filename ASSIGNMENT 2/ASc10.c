#include<stdio.h>
int main()
{
 int a,d,n;
 printf("Enter a number");
 scanf("%d",&a);
 d=a%10;
 n=a-d;
 printf("New number = %d",n);
 return 0;
}
