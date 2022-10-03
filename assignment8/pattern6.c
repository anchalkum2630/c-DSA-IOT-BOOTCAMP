#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(j=i;j>0;j--)
        {
            printf(" ");
        }
        for(k=i;k<5;k++)
        {
            printf("*");
        }
        for(l=i;l<4;l++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
