#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,h1,h2,i,j,min,c=0;
    printf("ENTER TWO NUMBER TO CHECK IT IS CO-PRIME OR NOT\n");
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
            c++;
    }
    if(c==1)
        printf("THEY ARE CO-PRIME NUMBER");
    else
        printf("THEY ARE NOT CO-PRIME NUMBER");
    return 0;

}
