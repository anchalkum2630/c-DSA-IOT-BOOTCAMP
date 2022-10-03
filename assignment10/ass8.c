#include<stdio.h>
float arrangement(int,int);
int main()
{
    int n,r;
    printf("TO FIND ARRANGEMENT ENTER 'N' ITEMS AND 'R'SELECTED TIMES\n");
    scanf("%d %d",&n,&r);
    printf("NO OF ARRANGEMENT = %f",arrangement(n,r));
    return 0;
}
float arrangement(int i,int j)
{
    int a=1,b=1,c=1,k,l,m;
    float d;
    for(k=0;k<i;k++)
        a=a*(k+1);
    for(l=0;l<i-j;l++)
        b=b*(l+1);
    for(m=0;m<j;m++)
        c=c*(m+1);
    d=a/(b*c);
    return d;
}
