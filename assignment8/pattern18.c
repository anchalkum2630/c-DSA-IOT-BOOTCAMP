#include<stdio.h>
int main()
{
    int i,j,k,l,a,b,c,d;
    for(i=0;i<5;i++)
    {
        for(j=i;j<4;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("*");
        }
        for(l=i;l>0;l--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    for(a=0;a<5;a++)
    {
        for(b=a;b>0;b--)
        {
            printf(" ");
        }
        for(c=a;c<5;c++)
        {
            printf("*");
        }
        for(d=a;d<4;d++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
