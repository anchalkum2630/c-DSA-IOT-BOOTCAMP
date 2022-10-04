#include<stdio.h>
int main()
{
    int i,a=0,b=1,j,s;
    printf("ENTER THE TERM NUMBER TO PRINT FIBONACCI NUMBER\n");
    scanf("%d",&i);
    printf("FIBONACCI NUMBER = %d %d ",a,b);
    for(j=2;j<i;j++)
    {
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
    }
    return 0;
}
