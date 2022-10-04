#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,c=0,j;
    printf("ENTER A NUMBER TO FIND NEXT PRIME NUMBER\n");
    scanf("%d",&a);
    printf("NEXT PRIME NUMBER = ");
    i=a+1;
    while(i>a)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
          {
              printf("%d ",i);
              exit(0);
          }
        c=0;
        i++;
    }
    return 0;
}
