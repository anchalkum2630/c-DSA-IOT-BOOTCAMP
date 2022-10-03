#include<stdio.h>
int prime(int);
int main()
{
    int i,s;
    printf("ENTER A NUMBER TO CHECK PRIMR OR NOT\n");
    scanf("%d",&i);
    s=prime(i);
    if(s==1)
        printf("IT IS PRIME");
    else
        printf("NOT PRIME");
    return 0;
}
int prime(int i)
{
    int a;
    for(a=2;a<i;a++)
    {
        if(i%a==0)
            return 0;
    }
    return 1;
}
