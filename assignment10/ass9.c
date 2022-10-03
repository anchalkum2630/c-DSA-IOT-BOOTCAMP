#include<stdio.h>
int num(int,int);
int main()
{
    int i,n,r;
    printf("ENTER A NUMBER\n");
    scanf("%d",&i);
    printf("ENTER A DIGIT TO FIND IN NUMBER\n");
    scanf("%d",&n);
    r=num(i,n);
    if(r==1)
        printf("YES, %d IS PRESENT IN %d",n,i);
    else
        printf("NOT PRESENT");
    return 0;
}
int num(int i,int n)
{
    int d;
    while(i>0)
    {
        d=i%10;
        if(d==n)
            return 1;
        i=i/10;
    }
    return 0;
}
