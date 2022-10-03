#include<stdio.h>
int main()
{
       int i,j,k,l,n;
       printf("    *\n");
    for(i=0;i<3;i++)
    {
        for(j=i;j<=2;j++)
        {
            printf(" ");
        }
        printf("*");
        for(k=i;k>0;k--)
        {
            printf(" ");
        }
        for(n=i;n>=0;n--)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(l=0;l<9;l++)
    {
        printf("*");
    }
}
