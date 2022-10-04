#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,s,a=0,b=1;
    printf("ENTER A NUMBER TO CHECK IT IS A FIBONACCI NUMBER OR NOT\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s=a+b;
        if(s==n||n==0||n==1)
        {
            printf("%d IS FIBONACCI NUMBER",n);
            exit(0);
        }
        a=b;
        b=s;
    }
    if(n!=b)
        printf("%d IS NOT FIBONACCI NUMBER",n);
    return 0;
}
