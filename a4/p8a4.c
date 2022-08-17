#include<stdio.h>
int a,b,n,d,s=0;
void sum(int n)
{
	if(n!=0)
	{	
		d=n%10;
		n=n/10;
		s=s+d;
		sum(n);
	}
	else
	    printf("Sum of digits of number:%d",s);
}
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	sum(n);
}