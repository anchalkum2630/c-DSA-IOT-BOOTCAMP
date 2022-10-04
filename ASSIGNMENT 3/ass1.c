#include<stdio.h>
int main()
{
    int i;
    printf("ENTER A NUMBER TO CHECK IT IS POSITIVE OR NOT\n");
    scanf("%d",&i);
    if(i>0)
        printf("IT IS POSITIVE");
    else
        printf("IT IS NEGATIVE");
    return 0;
}
