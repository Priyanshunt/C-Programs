#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c;
	printf("Enter number:");
	scanf("%f",&a);
	printf("Enter value of n:");
	scanf("%f",&b);
	c=pow(a,1/b);
	printf("The nth root of number is:%f",c);
}