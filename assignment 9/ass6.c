#include<stdio.h>
int main()
{
    int i,n;
    printf("ENTER THE NUMBER OF YEAR\n");
    scanf("%d",&n);
    i=(n%4==0)?1:2;
    switch(i)
    {
    case 1:
        {
            printf("THIS IS A LEAP YEAR");
            break;
        }
    case 2:
        {
            printf("THIS IS NOT A LEAP YEAR");
            break;
        }
    default:
        printf("INVALID");
    }
    return 0;
}
