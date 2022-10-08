#include<stdio.h>
int main()
{
    int a[10],i,min=0;
    printf("ENTER 10 NUMBER TO FIND SMALLEST NUMBER\n");
    for(i=1;i<=10;i++)
    {

        scanf("%d",&a[i]);
    }
    min=a[1];
    for(i=2;i<=10;i++)
    {
        if(a[i]<min)
        {
             min=a[i];
        }
    }
    printf("SMALLEST NUMBER = %d",min);
    return 0;
}
