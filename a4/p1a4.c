#include<stdio.h>
int x,y;
void swap(void)
{
	x=x^y;
	y=x^y;
	x=x^y;
	printf("After Swapping:x=%d,y=%d",x, y);
}
void main()
{
	printf("Enter first number");
	scanf("%d",&x);
	printf("Enter second number");
	scanf("%d",&y);
	swap();
}