#include<stdio.h>
int main()
{
    int n,d,s=0;
    printf("Enter the number for reversing it\n");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    printf("Number after reversing = %d",s);
    return 0;

}
