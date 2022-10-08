#include<stdio.h>
int  main()
{
    int a[10],i,e=0,o=0;
    printf("ENTER 10 NUMBER TO GET SUM OF EVEN AND ODD NUMBER\n");
    for(i=1;i<=10;i++)
    {
         scanf("%d",&a[i]);
         if(a[i]%2==0)
            e=e+a[i];
         else
            o=o+a[i];
    }
    printf("SUM OF EVEN NUMBER = %d\nSUM OF ODD NUMBER = %d",e,o);
   return 0;
}
