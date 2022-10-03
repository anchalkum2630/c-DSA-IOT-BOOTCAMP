#include<stdio.h>
int main()
{
    int i,j,k,l,n,m=1,s;
    for(i=4;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%d",m);
            m++;
        }
        for(k=4;k>i;k--)
        {
            printf(" ");
        }
        for(n=i;n<3;n++)
        {
            printf(" ");
        }
        s=i;
        for(l=i;l>0;l--)
        {
            if(s==4)
            {
                printf("");
            }
            else
            {
                printf("%d",s);
            }
            s--;
        }
        m=1;
        printf("\n");
    }
    return 0;
}
