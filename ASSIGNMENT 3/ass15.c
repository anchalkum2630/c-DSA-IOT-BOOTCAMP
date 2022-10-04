#include<stdio.h>
int main()
{
    int i;
    printf("ENTER A NUMBER TO CHECK IT IS POSITIVE,NEGATIVE OR ZERO\n");
    scanf("%d",&i);
    if(i>0)
        printf("IT IS POSITIVE");
    else if(i==0)
        printf("IT IS ZERO");
    else
        printf("IT IS NEGATIVE");
    return 0;
}
