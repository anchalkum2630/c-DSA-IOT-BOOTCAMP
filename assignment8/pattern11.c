#include<stdio.h>
int main()
{
    char ch='A',chh=64;
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(j=i;j<4;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%c",ch);
            ch++;
        }
        for(l=i;l>0;l--)
        {
            printf("%c",chh+l);
        }
        ch='A';
        printf("\n");
    }
    return 0;
}
