#include<stdio.h>
void fibonacci(int);
int main()
{
    int i;
    printf("ENTER NUMBER OF TERMS TO PRINT FIBONACCI SERIES\n");
    scanf("%d",&i);
    fibonacci(i);
    return 0;
}
void fibonacci(int i)
{
    int a=0,b=1,j,s;
    printf("FIBONACCI SERIES = %d %d ",a,b);
    for(j=2;j<i;j++)
    {
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
    }
}
