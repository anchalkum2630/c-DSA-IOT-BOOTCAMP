#include<stdio.h>
int main()
{
    int a,b,i,c=0,j;
    printf("ENTER TWO NUMBER TO PRINT PRIME NUMBERS BETWEEN THEM\n");
    scanf("%d %d",&a,&b);
    printf("PRIME NUMBERS = ");
    for(i=a;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
          printf("%d ",i);
        c=0;
    }
    return 0;
}
