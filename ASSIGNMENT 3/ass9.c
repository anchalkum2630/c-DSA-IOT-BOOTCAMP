#include<stdio.h>
int main()
{
    int i,j,k;
    printf("ENTER THREE TO FIND GREATEST NUMBER\n");
    scanf("%d %d %d",&i,&j,&k);
    if(i>j)
    {
        if(i>k)
            printf("GREATEST NUMBER = %d",i);
        else
            printf("GREATEST NUMBER = %d",k);
    }
    else
    {
        if(j>k)
            printf("GREATEST NUMBER = %d",j);
        else
            printf("GREATEST NUMBER = %d",k);
    }
    return 0;
}
