#include<stdio.h>
int main()
{
    int a[50],b[50],i,n;
    printf("ENTER NO. OF TERMS\n");
    scanf("%d",&n);
    printf("ENTER THE NUMBERS\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
       {
            b[i]=a[i];
       }
    printf("COPIED ARRAY = ");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}
