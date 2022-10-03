#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    char m='A',s=64;
    for(i=7;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%c",m);
            m++;
        }
        for(k=7;k>i;k--)
        {
            printf(" ");
        }
        for(n=i;n<6;n++)
        {
            printf(" ");
        }

        for(l=i;l>0;l--)
        {
            if(l==7)
            {
                printf("");
            }
            else
            {
            printf("%c",s+l);
            }
            s=64;
        }
        m='A';
        printf("\n");
    }
    return 0;
}
