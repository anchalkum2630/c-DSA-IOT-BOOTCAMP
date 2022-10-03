#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("ENTER YOUR CHOICE\n");
    printf("1. CHECK WHETHER A GIVEN SET OF THREE NUMBERS ARE LENGTHS OF AN ISOCELES TRIANGLE OR NOT\n");
    printf("2. CHECK WHETHER A GIVEN SET OF THREE NUMBERS ARE LENGTHS OF A RIGHT ANGLED TRIANGLE OR NOT\n");
    printf("3. CHECK WHETHER A GIVEN SET OF THREE NUMBERS ARE LENGTHS OF AN EQUILATERAL TRIANGLE OR NOT\n");
    printf("4. EXIT\n");
    scanf("%d",&d);
    printf("ENTER THE LENGTH OF THREE SIDES\n");
    scanf("%d %d %d",&a,&b,&c);
    switch(d)
    {
    case 1:
        if(a==b||b==c||c==a)
            printf("IT IS AN ISOSCELES TRIANGLE\n");
        else
            printf("IT IS NOT AN ISOSCELES TRIANGLE");
        break;
    case 2:
        if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
            printf("IT IS A RIGHT ANGLED TRIANGLE");
        else
            printf("IT IS NOT A RIGHT ANGLED TRIANGLE");
        break;
    case 3:
        if(a==b&&b==c)
            printf("IT IS AN EQUILATERAL TRIANGLE");
        else
            printf("IT IS NOT AN EQUILATERAL TRIANGLE");
        break;
    case 4:
        break;
    default:
        printf("INVALID");
    }
    return 0;
}
