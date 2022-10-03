#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf("*");
        }
        for(k=i;k>0;k--)
        {
            printf(" ");
        }
        for(m=i;m>0;m--)
        {
            printf(" ");
        }
        for(l=i;l<5;l++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
