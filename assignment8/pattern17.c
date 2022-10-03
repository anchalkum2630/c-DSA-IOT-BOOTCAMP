#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    for(i=0;i<9;i++)
    {
        printf("*");
    }
    printf("\n");
    for(j=0;j<4;j++)
    {
        for(k=j;k>=0;k--)
        {
            printf(" ");
        }
        printf("*");
        for(l=j;l<=4;l++)
        {
            printf(" ");
        }

        printf("*");
        printf("\n");
    }
    return 0;
}
