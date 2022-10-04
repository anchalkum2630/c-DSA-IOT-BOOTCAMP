#include<stdio.h>
int main()
{
    int i,num,num1,d,s=0,su,c=0;
    printf("ENTER A NUMBER TO CHECK ARMSTRONG OR NOT\n");
    scanf("%d",&i);
    num=i;
    while(num>0)
    {
        c++;
        num=num/10;
    }
    num1=i;
    while(num1>0)
    {
        d=num1%10;
        su=pow(d,c);
        s=s+su;
        num1=num1/10;
    }
    if(s==i)
        printf("%d IS ARMSTRONG NUMBER",i);
    else
        printf("%d IS NOT ARMSTRONG NUMBER",i);
    return 0;
}
