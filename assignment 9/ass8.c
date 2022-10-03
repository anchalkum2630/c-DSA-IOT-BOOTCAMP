#include<stdio.h>
int main()
{
    int i,n;
    printf("ENTER ANY POSITIVE OR NEGATIVE FOR INTERCHANGE\n");
    scanf("%d",&n);
    i=(n>0)?1:2;
    switch(i)
    {
    case 1:
        {
            printf("AFTER CONVERSION = %d",-n);
            break;
        }
    case 2:
        {
            printf("AFTER CONVERSION = %d",-n);
            break;
        }
    default:
        printf("INVALID");
    }
    return 0;
}
