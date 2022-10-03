#include<stdio.h>
void pascal(int);
int main()
{
    int i;
    printf("ENTER NO. OF ROWS\n");
    scanf("%d",&i);
    pascal(i);
    return 0;
}
void pascal(int i)
{
    int j,k,l,c;
    for(j=1;j<=i;j++)
    {
        c=1;
        for(k=1;k<(i-j+1);k++)
            printf(" ");
        for(l=1;l<=j;l++)
        {
            printf("%d ",c);
            c=c*(j-l)/l;
        }
        printf("\n");
    }
}
