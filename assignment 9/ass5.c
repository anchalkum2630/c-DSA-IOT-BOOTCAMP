#include<stdio.h>
int main()
{
    int i;
    printf("ENTER A NUMBER \n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        {
            printf("GOOD");
            break;
        }
    case 2:
        {
            printf("BETTER");
            break;
        }
    case 3:
        {
            printf("BEST");
            break;
        }
    default :
        printf("INVALID");
    }
    return 0;
}
