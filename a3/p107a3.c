#include<stdio.h>
void main()
{
	int a,b,c,i,h;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	if(a>=b)
		c=a;
	else
		c=b;
	for(i=1;i<=c;i++)
	{
		if(a%i==0&&b%i==0)
			h=i;
	}
	printf("HCF of two numbers is:%d\n",h);
}