#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter two number for swapping\n");
 scanf("%d %d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("now\n a=%d  b=%d",a,b);
 return 0;
}
