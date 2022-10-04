#include<stdio.h>
int main()
{
    int i;
    printf("ENTER A NUMBER TO CHECK IT IS DIVISIBLE BY 3 AND 2\n");
    scanf("%d",&i);
    if(i%3==0&&i%2==0)
        printf("%d IS DIVISIBLE BY BOTH",i);
    else
        printf("%d IS NOT DIVISIBLE BY BOTH",i);
    return 0;
}
