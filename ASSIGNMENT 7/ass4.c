#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,min,i,h;
    printf("ENTER TWO NUMBER TO CALCULATE H.C.F\n");
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        {
            h=i;
        }
    }
    printf("H.C.F = %d",h);
    return 0;
}
