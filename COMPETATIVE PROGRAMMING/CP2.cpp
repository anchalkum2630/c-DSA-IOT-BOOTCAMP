//log(a/b)=log a-log b
//a=logb
//b=e^a
//y=a/b
//log(y)=log(a/b)
//log(y)=log(a)-log(b)
//y=e^(log a-log b)
//XOR=^
//0(n)=only one loop use in one loop,,,,,abs=mode like
#include<stdio.h>
#include<math.h>
int divide(int dividend,int divisor)
{
    if(dividend==0)
        return 0;
    if(divisor==0)
    {
        printf("invalid");
        return 0;
    }
    int sign=(dividend<0) ^ (divisor<0);
    dividend=abs(dividend);
    divisor=abs(divisor);
    if(divisor==1)
    {
        return ((sign==0)?dividend:-dividend);
    }
    int ans = exp(log(dividend)-log(divisor))+0.0000000001;
    return ((sign==0)?ans:-ans);

}
int main()
{
   int num[5],ans[5],size=5,count=0,mul=1,i;
   printf("Enter 5 number\n");
   for(i=0;i<size;i++)
   {
       scanf("%d",&num[i]);
   }
   for(i=0;i<size;i++)
   {
       if(num[i]==0)
        count++;
       else
        mul=mul*num[i];
   }
   for(i=0;i<size;i++)
   {
       if(count>1)
        ans[i]=0;
       else if(count==1)
       {
           if(num[i]!=0)
            ans[i]=0;
           else
            ans[i]=mul;
       }
       else
        ans[i]=divide(mul,num[i]);
   }
   printf("Product of number except itself\n[ ");
   for(i=0;i<size;i++)
   {
       printf("%d ",ans[i]);
   }
     printf(" ]");
    return 0;
}
