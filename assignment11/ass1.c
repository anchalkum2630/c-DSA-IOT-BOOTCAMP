#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b;
    printf("ENTER TWO NUMBER TO CALCULATE L.C.M\n");
    scanf("%d %d",&a,&b);
    printf("L.C.M OF %d AND %d = %d",a,b,lcm(a,b));
    return 0;
}
int lcm(int i,int j)
{
    int a;
    a=i>j?i:j;
    while(1)
    {
      if(a%i==0&&a%j==0)
         return a;
      a++;
    }
}
