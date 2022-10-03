#include<stdio.h>
int series(int);
int main()
{
    int i;
    printf("ENTER NUMBER TO SUM SERIES IN THE FORM OF(n!/n)\n");
    scanf("%d",&i);
    printf("\nSUM OF THE SERIES = %d",series(i));
    return 0;
}
int series(int a)
{
    int i,j,m=1,s,sum=0;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            m=m*j;
        }
        s=m/i;
        sum=sum+s;
        m=1;
        s=0;
    }
    return sum;
}
