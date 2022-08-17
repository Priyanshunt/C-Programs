#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(0<n)
		printf("Positive\n");
	else if(0>n)
		printf("Negative\n");
	else
		printf("Zero\n");
	if(n%2==0)
		printf("Even");
	else
		printf("Odd");
}