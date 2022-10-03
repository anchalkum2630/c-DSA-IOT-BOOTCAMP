#include<stdio.h>
void prime(int);
int main()
{
    int i;
    printf("ENTER A NUMBER TO FIND PRIME FACTORS\n");
    scanf("%d",&i);
    prime(i);
    return 0;
}
void prime(int j)
{
    int n;
    for(n=2;j!=1;n++)
    {
        while(j%n==0)
        {
            j=j/n;
            printf("%d  ",n);
        }
    }
}
