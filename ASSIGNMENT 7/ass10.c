#include<stdio.h>
#include<math.h>
int main()
{
    int i,d,su,num1;
    printf("ARMSTRONG NUMBER under 1000 = ");
    for(i=1;i<=1000;i++)
    {
    num1=i;
    su=0;
    while(num1>0)
    {
        d=num1%10;
        su=su+(d*d*d);
        num1=num1/10;
    }
    if(i==su)
       printf("%d ",su);
  }
    return 0;
}
