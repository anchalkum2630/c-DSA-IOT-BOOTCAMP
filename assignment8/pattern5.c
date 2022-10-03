#include<stdio.h>
int main()
{
    int i,j,k,l;
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
    return 0;
}
