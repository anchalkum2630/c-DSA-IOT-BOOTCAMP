#include<stdio.h>
void binary(int);
int main()
{
    int n;
    printf("ENTER DECIMAL NUMBER CHANGE INTO BINARY NUMBER\n");
    scanf("%d",&n);
    printf("BINARY NUMBER = ");
    binary(n);
    return 0;
}
void binary(int n)
{
    int d;
    if(n==1)
        printf("1");
    else
    {

        binary(n/2);
        d=n%2;
        printf("%d",d);
    }
}
