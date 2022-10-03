#include<stdio.h>
int num(int);
int main()
{
    int n;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    printf("IF THE NUMBER IS EVEN THEN IT WILL SHOW 1 OTHERWISE 0\n");
    printf("---->>> %d",num(n));
    return 0;
}
int num(int i)
{
    return (i%2==0)?1:0;
}
