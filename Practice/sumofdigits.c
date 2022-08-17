#include<stdio.h>
int sum(int n)
{
	int d;
	if(n==0)
		return 0;
	else
	{
		d=n%10;
		return d+sum(n/10);
	}
}
int main()
{
	int n,s;
	printf("Enter number:");
	scanf("%d",&n);
	s=sum(n);
	printf("Sum of digits:%d",s);
}