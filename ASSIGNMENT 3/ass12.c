#include<stdio.h>
int main()
{
    char c;
    printf("ENTER A ALPHABET TO CHECK IT IS IN  LOWERCASE OR UPPERCASE\n");
    scanf("%c",&c);
    if(c>='a'&&c<='z')
        printf("IT IS IN LOWERCASE");
    else if(c>='A'&&c<='Z')
        printf("IT IS UPPERCASE");
    else
        printf("INVALID");
    return 0;

}
