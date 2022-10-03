#include<stdio.h>
float combination(int,int);
int main()
{
    int n,r;
    float com;
    printf("TO FIND NUMBER OF COMBINATION ENTER 'N' ITEMS AND 'R'SELECTED AT A TIME\n");
    scanf("%d %d",&n,&r);
    com=combination(n,r);
    printf("NUMBER OF COMBINATION = %f",com);
    return 0;
}
float combination(int i,int j)
{
    int a=1,b=1,c,k,l;
        for(k=0;k<i;k++)
            a=a*(k+1);
        c=i-j;
        for(l=0;l<c;l++)
            b=b*(l+1);
        return a/b;
}
