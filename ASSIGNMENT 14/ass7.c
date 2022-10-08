#include<stdio.h>
int main()
{
    int a[10],i,j,n;
    printf("ENTER 10 NUMBER TO FIND SECOND LARGEST NUMBER\n");
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
        printf("SECOND LARGEST NUMBER = %d ",a[9]);
    return 0;
}
