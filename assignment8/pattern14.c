#include<stdio.h>
int main()
{
    int i,j,k;
    printf("*");
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("*");
        for(j=i;j>0;j--)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(k=0;k<5;k++)
    {
        printf("*");
    }
    return 0;
}
