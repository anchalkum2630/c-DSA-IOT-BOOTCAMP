#include<stdio.h>
int main()
{
    int a,b,i;
    printf("ENTER TWO NUMBER\n");
    scanf("%d %d",&a,&b);
    printf("ENTER YOUR CHOICE TO APPLY ON NUMBER\n 1. ADDITION\n 2. SUBTRACTION\n 3. MULTIPLICATION\n 4. DIVISION\n 5. EXIT\n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        {
            printf("ADDITION = %d",a+b);
            break;
        }
    case 2:
        {
            printf("SUBTRACTION = %d",a-b);
            break;
        }
    case 3:
        {
            printf("MULTIPLICATION = %d",a*b);
            break;
        }
    case 4:
        {
            printf("DIVISION = %d",a/b);
            break;
        }
    default:
        printf("INVALID CHOICE");
    }
    return 0;
}
