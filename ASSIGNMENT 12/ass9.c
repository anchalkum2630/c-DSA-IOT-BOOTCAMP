#include<stdio.h>
void octal(int);
int main()
{
    int n;
    printf("ENTER DECIMAL NUMBER CHANGE INTO OCTAL NUMBER\n");
    scanf("%d",&n);
    printf("OCTAL NUMBER = ");
    octal(n);
    return 0;
}
void octal(int n)
{
    if(n<8)
    {
        printf("%d",n);

    }
    else
    {
        octal(n/8);
        printf("%d",n%8);
    }

}
