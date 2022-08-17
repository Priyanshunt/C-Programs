#include<stdio.h>
int a,b;
void lcm(int i)
{
	if(i<=a*b&&i!=0)
	{
		if(i%a==0&&i%b==0)
		{
			printf("LCM of two numbers is:%d",i);
			i=-1;
		}
		lcm(++i);
	}
}
void main()
{
	int i;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	i=(a>b)?a:b;
	lcm(i);
}