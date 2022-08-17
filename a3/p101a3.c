#include<stdio.h>
void main()
{
	int n,i,s=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=s*i;
	printf("Factorial of number:%d",s);
}