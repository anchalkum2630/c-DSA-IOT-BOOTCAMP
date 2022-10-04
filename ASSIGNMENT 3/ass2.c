#include<stdio.h>
int main()
{
    int i;
    printf("ENTER A NUMBER TO CHECK IT IS DIVISIBLE BY 5 OR NOT\n");
    scanf("%d",&i);
    if(i%5==0)
        printf("IT IS DIVISIBLE");
    else
        printf("IT IS NOT DIVISIBLE");
    return 0;
}
