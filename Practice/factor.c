#include<stdio.h>
int n,i;
void pf(void)
{
	n=n/i;
	if(n%i==0)
		pf();
}
void main()
{
	printf("Enter number:");
	scanf("%d",&n);
	for(i=2;n!=1;i++)
	{
		if(n%i==0)
		{
			pf();
			printf("%d ",i);
		}
	}
}