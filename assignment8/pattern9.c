#include<stdio.h>
int main()
{
    int i,j,k,l,s=1,m;
    for(i=4;i>0;i--)
    {
        for(j=i;j<4;j++)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
           printf("%d",s);
           s++;
        }
        m=i-1;
        for(l=i;l>1;l--)
        {
            printf("%d",m--);
        }

        s=1;
        printf("\n");
    }
    return 0;
}
