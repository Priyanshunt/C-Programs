#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	float a,b,c,s,d,r;
	printf("Enter first three terms of AP or GP:");
	scanf("%f%f%f",&a,&b,&c);
	printf("Enter number of terms:");
	scanf("%d",&n);
	if(2*b==a+c)
	{
		d=b-a;
		s=(n/2)*(2*a+(n-1)*d);
		printf("The sum of AP is:%f",s);
	}
	else if(b*b==a*c)
	{
		r=b/a;
		s=a*((pow(r,n)-1)/(r-1));
		printf("The sum of GP is:%f",s);
	}
	else
	{
		printf("The input series is neither in AP nor in GP");
	}
}