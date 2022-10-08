#include<stdio.h>
int main()
{
    int a[10],i,max=0;
    printf("ENTER 10 NUMBER TO FIND GREATEST NUMBER\n");
    for(i=1;i<=10;i++)
    {

        scanf("%d",&a[i]);
    }
    max=a[1];
    for(i=2;i<=10;i++)
    {
        if(a[i]>max)
        {
             max=a[i];
        }
    }
    printf("GREATEST NUMBER = %d",max);
    return 0;
}
