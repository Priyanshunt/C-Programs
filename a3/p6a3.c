#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%5==0&&n%8==0)
		printf("The number is divisible both by 8 and 5");
	else if(n%5==0)
		printf("The number is divisible by 5");
	else if(n%8==0)
		printf("The number is divisible by 8");	
	else
		printf("The number is divisible neither by 8 nor 5");
}