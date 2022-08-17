#include<stdio.h>
void main()
{
    char a,b;
    printf("Enter a character for 1st way:");
	a=getchar();
    printf("Enter a character for 2nd way:");
	scanf(" %c",&b);
    printf("The character are:%c,",a);
    putchar(b);
}