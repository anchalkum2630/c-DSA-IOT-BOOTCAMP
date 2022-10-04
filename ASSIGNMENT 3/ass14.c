#include<stdio.h>
int main()
{
    int i;
    printf("ENTER A NUMBER TO CHECK IT IS DIVISIBLE BY 3 AND 2\n");
    scanf("%d",&i);
    if(i%7==0&&i%3==0)
        printf("DIVISIBLE BY BOTH");
    else if(i%7==0)
        printf("%d IS DIVISIBLE BY 7",i);
    else if(i%3==0)
        printf("%d IS DIVISIBLE BY 3",i);
    else
        printf("NOT DIVISIBLE BY 7 AND 3");
    return 0;
}
