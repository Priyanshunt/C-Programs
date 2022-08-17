#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n/i==i)
			printf("Square root of number:%d",i);
	}
}