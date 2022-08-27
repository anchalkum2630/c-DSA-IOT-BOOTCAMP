#include<stdio.h>
int main()
{
 int a,d;
 printf("Enter a number to see without unit digit\n");
 scanf("%d",&a);
 d=a/10;
 printf("Number without last digit = %d",d);
 return 0;
}
