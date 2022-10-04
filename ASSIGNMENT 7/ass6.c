#include<stdio.h>
int main()
{
    int i,c=0,j;
    printf("PRIME NUMBERS BETWEEN 1 TO 100 = ");
    for(i=1;i<=100;i++)
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
