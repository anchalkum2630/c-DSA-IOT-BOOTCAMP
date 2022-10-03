#include<stdio.h>
#include<stdlib.h>
int nextprime(int);
int main()
{
    int i,s;
    printf("ENTER A NUMBER TO FIND NEXT PRIME NUMBER\n");
    scanf("%d",&i);
    s=nextprime(i);
    printf("NEXT PRIME NUMBER = %d",s);
    return 0;
}
int nextprime(int i)
{
    int a,j,n,c=0;
    n=i+1;
    for(j=n;j>i;j++)
    {
      for(a=1;a<j;a++)
      {
          if(j%a==0)
            {
                c++;
            }
      }
      if(c==1)
        break;
      c=0;
    }
    return j;
}
