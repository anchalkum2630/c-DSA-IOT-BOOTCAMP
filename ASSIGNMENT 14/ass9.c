#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("ENTER NO. OF TERMS\n");
    scanf("%d",&n);
    printf("ENTER THE NUMBERS\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("REVERSE ORDER = ");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}
