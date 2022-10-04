#include<stdio.h>
int main()
{
    int c,s,p;
    float pi;
    if(c>s)
    {
        p=c-s;
        pi=(p*100)/c;
        printf("LOSS PERCENT = %f",pi);
    }
    else
    {
        p=s-c;
        pi=(p*100)/c;
        printf("GAIN PERCENT = %f",pi);
    }
    return 0;
}
