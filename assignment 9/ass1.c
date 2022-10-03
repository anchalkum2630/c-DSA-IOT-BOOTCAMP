#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("ENTER THE MONTH NUMBER TO FIND NO. OF DAYS...\n");
    scanf("%d",&n);
    if(n==2)
    {
    printf("NO. OF DAYS 28 OR 29");
    exit(0);
    }
    else
    i=(n%2==0)?1:2;
    switch(i)
    {
    case 1:
        {
        printf("NO. OF DAYS = 30");
        break;
        }
    case 2:
        {
        printf("NO. OF DAYS = 31");
        break;
        }
    default:
        printf("invalid");
    }
    return 0;
}
