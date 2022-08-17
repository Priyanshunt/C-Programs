#include<stdio.h>
int findprime(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",findprime(n));
	return 0;
}
int findprime(int n)
{
	int i,c=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c=1;
			return c;
		}
	}
	if(c==0)
		return c;
}