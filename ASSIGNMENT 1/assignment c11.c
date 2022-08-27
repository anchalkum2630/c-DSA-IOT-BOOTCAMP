#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter HH:MM");
  scanf("%d %d",&a,&b);
  printf("%d:%d is converted to\"%d Hour and %d Minute",a,b,a,b);
  return 0;
}
