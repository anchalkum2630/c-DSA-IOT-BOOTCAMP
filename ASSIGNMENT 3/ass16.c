#include<stdio.h>
int main()
{
    char c;
    printf("ENTER ANY CHARACTER\n");
    scanf("%c",&c);
    if(c>='a'&&c<='z')
        printf("IT IS IN LOWERCASE");
    else if(c>='A'&&c<='Z')
        printf("IT IS UPPERCASE");
    else if(c>='0'&&c<='9')
        printf("IT IS A DIGIT");
    else
        printf("IT IS A SPECIAL CHARACTER");
    return 0;

}
