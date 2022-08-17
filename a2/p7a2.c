#include<stdio.h>
void main()
{
	int x,y,z;
	printf("Enter first number:");
	scanf("%d",&x);
	printf("Enter second number:");
	scanf("%d",&y);
	z=(x>y)?x:y;
	printf("Greatest of two numbers is:%d",z);
}