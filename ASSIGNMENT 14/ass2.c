#include<stdio.h>
int main()
{
    int a[10],i;
    float av,s=0;
    printf("ENTER 10 NUMBERS TO GET AVERAGE\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    av=s/10;
    printf("AVERAGE = %f",av);
    return 0;
}
