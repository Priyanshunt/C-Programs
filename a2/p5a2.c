#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("The swap of numbers:%d,%d\n",a,b);
}