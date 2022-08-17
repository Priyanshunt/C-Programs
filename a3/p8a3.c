#include<stdio.h>
void main()
{
	int n;
	float f;
	printf("Enter number of days:");
	scanf("%d",&n);
	if(n<=5)
		f=0.5*n;
	else if(n<=10)
		f=2.5+(n-5);
	else if(n<=30)
		f=7.5+(n-10)*5;
	else
	{
		f=107.5;
		printf("Your membership is cancelled.\n");
	}
	printf("The fine is:%.2f",f);
}