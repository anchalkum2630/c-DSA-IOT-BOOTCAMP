#include<stdio.h>
int main()
{
    int i,j;
    printf("ENTER TWO NUMBER TO CHECK WHICH IS GREATER \n");
    scanf("%d %d",&i,&j);
    if(i>j)
        printf("%d IS GREATER",i);
    else
         printf("%d IS GREATER",j);
    return 0;
}
