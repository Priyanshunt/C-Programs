#include<stdio.h>
int n,i=1,s=1;
void fact(void)
{
	if(i<=n)
	{
		s=s*i++;
		fact();
	}
	else
		printf("Factorial of number:%d",s);
}
void main()
{
	printf("Enter a number:");
	scanf("%d",&n);
	fact();
}