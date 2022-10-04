#include<stdio.h>
int main()
{
    int i;
    printf("ENTER A NUMBER TO CHECK IT'S DIGIT\n");
    scanf("%d",&i);
    if(i>100&&i<1000)
        printf("IT IS THREE DIGIT NUMBER");
    else
        printf("IT IS NOT THREE DIGIT NUMBER");
    return 0;
}
