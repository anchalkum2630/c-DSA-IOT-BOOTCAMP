#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    printf("    *\n");
    for(i=0;i<3;i++)
    {
        for(j=3;j>i;j--)
        {
            printf(" ");
        }
        printf("*");
        for(k=i;k>0;k--)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(m=0;m<5;m++)
    {
        printf("*");
    }
}
