#include<stdio.h>
int main()
{
    int i;
    printf("ENTER YEAR NUMBER TO CHECK IT IS LEAP YEAR OR NOT\n");
    scanf("%d",&i);
    if(i%4==0)
       printf("%d IS LEAP YEAR",i);
    else
        printf("%d IS NOT LEAP YEAR",i);
    return 0;
}
