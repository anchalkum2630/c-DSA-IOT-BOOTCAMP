#include<stdio.h>
void natural(int);
int main()
{
    int i;
    printf("ENTER THE NUMBER TO PRINT ODD NUMBERS\n");
    scanf("%d",&i);
    natural(i);
    return 0;
}
void natural(int n)
{
    int i,j=1;
    for(i=0;i<n;i++)
    {
        printf("%d ",j);
        j+=2;
    }
}
