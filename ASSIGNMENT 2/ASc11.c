#include<stdio.h>
int main()
{
 int a,d,n;
 printf("Enter a number and a digit\n");
 scanf("%d %d",&a,&d);
 n=(a*10)+d;
 printf("Number = %d   digit = %d  \n Then the resulting number is %d",a,d,n);
 return 0;
}
