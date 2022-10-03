#include<stdio.h>
int fact(int);
int main()
{
    int i;
    printf("ENTER THE NUMBER TO CALCULATE FACTORIAL\n");
    scanf("%d",&i);
    printf("FACTORIAL OF NUMBER IS %d",fact(i));
    return 0;
}
int fact(int n)
{
    int s=1,i;
    for(i=0;i<n;i++)
        s=s*(i+1);
    return s;
}
