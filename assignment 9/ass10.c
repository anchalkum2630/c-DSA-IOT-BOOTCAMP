#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2,img;
    printf("ENTER THE CONSTANT TERMS OF QUADRATIC EQUATION");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    switch(d>0)
    {
    case 1:
        {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("TWO DISTINCT AND REAL ROOS : %f AND %f",r1,r2);
            break;
        }
    case 0:
        {
            switch(d<0)
            {
            case 1:
                {
                    r1=r2=-b/(2*a);
                    img=sqrt(-d)/(2*a);
                    printf("TWO DISTINCT COMPLEX ROOTS: %f + i%f AND %f + i%f",r1,img,r2,img);
                    break;
                }
            case 0:
                {
                    r1=r2=-b/(2*a);
                    printf("TWO EQUAL AND REAL ROOTS: %f AND %f",r1,r2);
                    break;
                }
            }
        }
    }
    return 0;
}
