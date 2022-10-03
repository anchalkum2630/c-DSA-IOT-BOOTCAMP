#include<stdio.h>
void prime(int,int);
int main()
{
    int i,j;
    printf("ENTER TWO NUMBER TO PRINT PRIME NUMBERS BETWEEN THEM\n");
    scanf("%d %d",&i,&j);
    printf("PRIME NUMBERS = ");
    prime(i,j);
    return 0;
}
void prime(int i,int j)
{
    int a,b,c=0;
    for(a=i;a<=j;a++)
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
