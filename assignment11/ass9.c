#include<stdio.h>
int square(int);
int main()
{
    int i;
    printf("ENTER A NUMBER TO FIND SQUARE\n");
    scanf("%d",&i);
    printf("SQUARE OF %d = %d",i,square(i));
    return 0;
}
int square(int i)
{
    return i*i;
}

