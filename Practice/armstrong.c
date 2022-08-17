#include<stdio.h>
void main()
{
	int n,d,s=0,t;
	printf("Enter a number:");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		d=n%10;
		s=s*10+d*d*d;
		n=n/10;
	}
	if(t==s)
		printf("Armstrong number");
	else
		printf("Not armstrong number");
}