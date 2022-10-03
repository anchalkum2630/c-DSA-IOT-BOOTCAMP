#include<stdio.h>
int main()
{
    int n,i;
    printf("ENTER A EVEN NUMBER TO FIND UPPER NEAREST ODD NUMBER\n");
    scanf("%d",&n);
    i=(n%2==0)?1:2;
    switch(i)
    {
    case 1:
        {
            printf("CHANGED TO UPPER NEAREST ODD NUMBER = %d",n+1);
            break;
        }
    case 2:
        {
            printf("NO CHANGE = %d",n);
            break;
        }
    }
    return 0;
}
