#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float d,x,y;
	printf("For finding roots of a*x*x+b*x+c type of quadratic equation\n");
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	d=b*b-4*a*c;
	if (d>0)
	{
		printf("Roots are real and distinct\n");
		x=(-b+sqrt(d))/(2*a);
		y=(-b-sqrt(d))/(2*a);
		printf("Two roots are:%f,%f",x,y);
	}
	else if (d==0)
	{
		printf("Roots are real and equal\n");
		x=(-b)/2*a;
		printf("One root is:%f",x);
	}
	else
	{
		printf("Roots are imaginary");
	}
}