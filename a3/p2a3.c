#include<stdio.h>
void main()
{
	int c,a,b,g;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	if((a>b)&&(a>c))
		g=a;
	else if(b>c)
		g=b;
	else
		g=c;
	printf("Greatest of three numbers:%d",g);
}