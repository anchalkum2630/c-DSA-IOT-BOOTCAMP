#include<stdio.h>
int main()
{
    int n,i=1,c=0;
    printf("Enter the number to check whether it is prime number or not\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        c++;
        i++;
    }
    if(c==2)
        printf("%d is prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
