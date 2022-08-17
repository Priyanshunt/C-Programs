#include<stdio.h>
void main()
{
	int c,a,b;
	printf("Enter 1 for addition\n");
	printf("Enter 2 for subtraction\n");
	printf("Enter 3 for multiplication\n");
	printf("Enter 4 for quotient of division\n");
	printf("Enter 5 for remainder of division\n");
	printf("Enter your choice:");
	scanf("%d",&c);
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	switch(c)
	{
		case 1:
		printf("Addition of numbers:%d",a+b);
		break;
		case 2:
		printf("Subtraction of numbers:%d",a-b);
		break;
		case 3:
		printf("Multipication of numbers:%d",a*b);
		break;
		case 4:
		printf("Quotient of division of numbers:%f",(float)a/b);
		break;
		case 5:
		printf("Remainder of division of numbers:%d",a%b);
		break;
		default:
		printf("Wrong choice");
	}
}