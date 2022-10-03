#include<stdio.h>
int main()
{
    int i;
    printf("ENTER THE NUMBER OF DAYS OF A WEEK\n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        {
            printf("WELCOME USER,MAY THIS MONDAY, YOU ENJOY MUCH & SOME MAGICAL THINGS HAPPEN!!!\n  A VERY SWEET GOOD MORNING :)");
            break;
        }
    case 2:
        {
            printf("WELCOME USER,MAY THIS TUESDAY, YOU ENJOY MUCH & SOME MAGICAL THINGS HAPPEN!!!\n  A VERY SWEET GOOD MORNING :)");
            break;
        }
    case 3:
        {
            printf("WELCOME USER,MAY THIS WEDNESDAY, YOU ENJOY MUCH & SOME MAGICAL THINGS HAPPEN!!!\n  A VERY SWEET GOOD MORNING :)");
            break;
        }
    case 4:
        {
            printf("WELCOME USER,MAY THIS THRUSDAY, YOU ENJOY MUCH & SOME MAGICAL THINGS HAPPEN!!!\n  A VERY SWEET GOOD MORNING :)");
            break;
        }
    case 5:
        {
            printf("WELCOME USER,MAY THIS FRIDAY, YOU ENJOY MUCH & SOME MAGICAL THINGS HAPPEN!!!\n  A VERY SWEET GOOD MORNING :)");
            break;
        }
    case 6:
        {
            printf("WELCOME USER,MAY THIS SATURDAY, YOU ENJOY MUCH & SOME MAGICAL THINGS HAPPEN!!!\n  A VERY SWEET GOOD MORNING :)");
            break;
        }
    case 7:
        {
            printf("WELCOME USER,MAY THIS SUNDAY, YOU ENJOY MUCH & SOME MAGICAL THINGS HAPPEN!!!\n  A VERY SWEET GOOD MORNING :)");
            break;
        }
    default:
              printf("INVALID");

    }
    printf("\n");
    return 0;
}
