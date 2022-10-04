#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER LENGTH OF SIDES OF TRIANGLE\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b+c&&b<a+c&&c<a+b)
        printf("TRIANGLE IS VALID");
    else
        printf("TRIANGLE IS NOT VALID");
    return 0;
}
