#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("ENTER FIVE SUBJECTS MARKS OF A STUDENT");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
        printf("STUDENT PASSED THE EXAMINATI0N");
    else
        printf("STUDENT FAILED IN THE EXAMINATION");
    return 0;
}
