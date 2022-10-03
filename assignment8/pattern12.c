#include<stdio.h>
int main()
{
    char ch='A',chh=64;
    int i,j,k,l;
    for(i=4;i>0;i--)
    {
        for(j=i;j<4;j++)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("%c",ch);
            ch++;
        }
        for(l=i;l>1;l--)
        {
            printf("%c",chh+(l-1));
        }
        ch='A';
        printf("\n");
    }
    return 0;
}
