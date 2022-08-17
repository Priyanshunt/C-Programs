#include<stdio.h>
int a,b;
void hcf(int i)
{
	if(i<=a&&i<=b&&i!=0)
	{	
		if(a%i==0&&b%i==0)
		{	
		    printf("HCF of two numbers:%d",i);
		    i=0;
		}
		else			
		    hcf(--i);
	}
}
void main()
{
	int i;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	i=(a>b)?b:a;
	hcf(i);
}