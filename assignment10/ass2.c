#include<stdio.h>
int SI(int,int,int);
int main()
{
    int p,r,t;
    printf("ENTER THE PRINCIPLE AND RATE AND TIME TO CALCULATE SIMPLE INTEREST\n");
    scanf("%d %d %d",&p,&r,&t);
    printf("SIMPLE INTEREST = %d",SI(p,r,t));
}
int SI(int i,int j,int k)
{
    return (i*j*k);
}
