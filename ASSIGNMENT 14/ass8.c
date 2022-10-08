#include<stdio.h>
int main()
{
    int a[10],i,j,n;
    printf("ENTER 10 NUMBER TO FIND SECOND SMALLEST NUMBER\n");
    for(i=1;i<=10;i++)
    {

        scanf("%d",&a[i]);
    }
    for(i=1;i<=10;i++)
    {
        for(j=i+1;j<=10;j++)
        if(a[i]>a[j])
        {
             n=a[i];
             a[i]=a[j];
             a[j]=n;
        }

    }
        printf("SECOND SMALLEST NUMBER = %d ",a[2]);
    return 0;
}
