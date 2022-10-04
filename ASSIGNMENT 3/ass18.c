#include<stdio.h>
int main()
{
    int i;
    printf("ENTER MONTH NUMBER TO CHECK NO. OF DAYS\n");
    scanf("%d",&i);
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
        printf("NO. OF DAYS = 31");
    else if(i==2)
        printf("NO. OF DAYS = 28 OR 29");
    else if(i==4||i==6||i==9||i==11)
        printf("NO. OF DAYS = 30");
    else
        printf("INVALID MONTH");
    return 0;
}
