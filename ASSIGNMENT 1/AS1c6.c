#include<stdio.h>
int main()
{
	char str[30];
	printf("Enter name of the person\n");
	fgets(str,30,stdin);
	printf("Hello, %s",str);
	return 0;
}
