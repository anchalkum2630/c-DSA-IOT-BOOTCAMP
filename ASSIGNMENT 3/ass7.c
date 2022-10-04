#include<stdio.h>
int main()
{
    int i,j,k,d;
    printf("ENTER COEFFICIENT OF QUADRATIC EQUATION\n");
    scanf("%d %d %d",&i,&j,&k);
    d=j*j-(4*i*k);
    if(d>0)
        printf("EQUATION IS REAL AND DISTINCT");
    else if(d==0)
        printf("EQUATION IS REAL AND EQUAL");
    else
        printf("EQUATION HAVE IMAGINARY ROOTS");
    return 0;
}
