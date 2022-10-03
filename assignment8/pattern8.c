#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=0;i<4;i++)
    {
        for(j=i;j<3;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%d",k+1);
        }
        for(l=i;l>0;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}
