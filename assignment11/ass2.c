#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b;
    printf("ENTER TWO NUMBER TO CALCULATE H.C.F\n");
    scanf("%d %d",&a,&b);
    printf("H.C.F OF %d AND %d IS %d",a,b,hcf(a,b));
    return 0;
}
int hcf(int a,int b)
{
    int d,i,s;
    d=a<b?a:b;
    if(a==0||b==0)
        return 0;
    for(i=1;i<=d;i++)
    {
        if(a%i==0&&b%i==0)
            s=i;
    }
    return s;
}
