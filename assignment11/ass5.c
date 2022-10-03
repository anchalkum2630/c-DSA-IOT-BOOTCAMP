#include<stdio.h>
void prime(int);
int main()
{
    int i;
    printf("ENTER A NUMBER TO PRINT PRIME NUMBERS\n");
    scanf("%d",&i);
    printf("PRIME NUMBERS = ");
    prime(i);
    return 0;
}
void prime(int i)
{
    int a,b,c=0;
    for(a=1;a<=i;a++)
    {
        for(b=1;b<=a;b++)
        {
            if(a%b==0)
                c++;
        }
        if(c==2)
            printf("%d ",a);
        c=0;
    }
}
