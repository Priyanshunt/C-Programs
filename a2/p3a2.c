#include<stdio.h>
void main()
{
	int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    c=b;
	b+=a;
	a-=c;
    printf("Addition of two numbers:%d,%d",b,a);
}