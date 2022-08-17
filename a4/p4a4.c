#include<stdio.h>
void prime(int n)
{
	static int i=2;
	if(i<=n/2)
	{
		if(n%i++!=0)
			prime(n);
	}
	else
		printf("%d ",n);
	i=2;
}
void main()
{
	int n,i;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Prime number are:");
	for(i=2;i<=n;i++)
		prime(i);
}
