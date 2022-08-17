#include<stdio.h>
int n,i=2;
void prime(void)
{
	if(i<=n/2)
	{
		if(i!=1)
		{
			if(n%i++==0)
			{
				printf("Composite number");
				i=1;
			}
			else
				prime();
		}
	}
	else
		printf("Prime number");
}
void main()
{
	printf("Enter number:");
	scanf("%d",&n);
	prime();
}
