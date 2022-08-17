#include<stdio.h>   
int n,a=0,b=1,c,i=1;
void fib(void)
{
	if(i++<=n)
    {	
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		fib();
    }
}
void main()
{
	printf("Enter number of terms:");
	scanf("%d",&n);
	printf("The fibonacci series is:\n");
	fib();
}