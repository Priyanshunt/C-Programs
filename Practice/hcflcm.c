#include<stdio.h>
void main()
{
	int a,b,c,i,h;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
			h=i;
	}
	printf("HCF of two numbers is:%d\n",h);
	for(i=1;i<=a*b;i++)
	{
		if(i%a==0&&i%b==0)
		{
			printf("LCM of two numbers is:%d",i);
			break;
		}
	}
}