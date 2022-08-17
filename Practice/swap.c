#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter first number");
	scanf("%d",&x);
	printf("Enter second number");
	scanf("%d",&y);
	printf("%d\n",x^y);
	printf("%d\n",(x^y)^y);
	printf("%d",(x^y)^((x^y)^y));
}