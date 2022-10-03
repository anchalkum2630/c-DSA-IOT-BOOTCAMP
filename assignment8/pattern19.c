#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o,p,q,a,b,c,d;
    for(i=3;i>0;i--)
    {
        for(j=i;j>1;j--)
        {
            printf(" ");
        }
        for(k=i;k<=6;k++)
        {
            printf("*");
        }
        for(l=i;l<=3;l++)
        {
            printf("*");
        }
        for(m=i;m>0;m--)
        {
                printf(" ");
        }
        for(n=i;n>1;n--)
        {
            printf(" ");
        }
        for(o=i;o<=6;o++)
        {
            printf("*");
        }
        for(p=i;p<=3;p++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("******MySirG*******\n");
    for(a=9;a>0;a--)
    {
        for(b=a;b<=9;b++)
            {
                printf(" ");
            }
        for(c=a;c>0;c--)
            {
                printf("*");
            }
        for(d=a;d>1;d--)
            {
                printf("*");
            }
        printf("\n");
    }
    return 0;
}
