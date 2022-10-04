#include<stdio.h>
int main()
{
    int i,a=0,b=1,j,s;
    printf("ENTER THE TERM NUMBER TO PRINT FIBONACCI NUMBER\n");
    scanf("%d",&i);
    for(j=2;j<i;j++)
    {
        s=a+b;
        a=b;
        b=s;
    }
    printf("%d TERM OF THE FIBONACCI NUMBER = %d",i,b);
    return 0;
}
