#include<stdio.h>
int main()
{
    int i;
    printf("ENTER A NUMBER TO CHECK IT IS EVEN OR ODD\n");
    scanf("%d",&i);
    if(i%2==0)
        printf("IT IS EVEN");
    else
        printf("IT IS ODD");
    return 0;
}
