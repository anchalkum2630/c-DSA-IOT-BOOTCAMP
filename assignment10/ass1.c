#include<stdio.h>
int area(int);
int main()
{
    int n;
    printf("ENTER THE LENGTH OF RADIUS TO CALCULATE AREA OF CIRCLE\n");
    scanf("%d",&n);
    printf("AREA OF CIRCLE = %d",area(n));
}
int area(int i)
{
    return 3.14*i*i;
}
