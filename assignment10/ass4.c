#include<stdio.h>
void natural(int);
int main()
{
    int i;
    printf("ENTER THE NUMBER TO PRINT NATURAL NUMBERS\n");
    scanf("%d",&i);
    natural(i);
    return 0;
}
void natural(int n)
{
    int i;
    for(i=0;i<n;i++)
       printf("%d ",i+1);
}
