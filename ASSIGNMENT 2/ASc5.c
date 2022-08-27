#include<stdio.h>
int main()
{
 int a,b,c=0;
 printf("enter three digit number\n");
 scanf("%d",&a);
 while(a>0)
 {
     b=a%10;
     c=c+b;
     a=a/10;
 }
 printf("Sum of the digit of the number = %d",c);
 return 0;
}
