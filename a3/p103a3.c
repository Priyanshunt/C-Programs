#include<stdio.h>
void main()
{
	int n,i,x,s=1;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter value of x:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
		s*=n;
	printf("The value of n raised to x:%d",s);
}