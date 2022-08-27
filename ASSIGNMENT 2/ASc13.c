#include<stdio.h>
int main()
{
 int a,d,s,n;
 printf("Enter a three digit number to move towards right");
 scanf("%d",&a);
 d=a/10;
 s=a%10;
 n=(s*100)+d;
 printf("New number = %d",n);
 return 0;
}
