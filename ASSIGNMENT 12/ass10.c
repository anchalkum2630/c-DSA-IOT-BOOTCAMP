#include<stdio.h>
void reverse(int);
int main()
{
    int n;
    printf("ENTER A NUMBER TO PRINT IN REVERSE ORDER\n");
    scanf("%d",&n);
    printf("REVERSE ORDER = ");
    reverse(n);
    return 0;
}
void reverse(int n)
{
    if(n<=0)
    {
        printf("");
    }
    else
    {
        printf("%d",n%10);
        reverse(n/10);
    }

}
