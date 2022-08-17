#include<stdio.h>
void main()
{
	int p,r,t;
	float si;
	printf("Enter amount of principal:");
	scanf("%f",&p);
	printf("Enter rate of interest:");
	scanf("%f",&r);
	printf("Enter time in years:");
	scanf("%f",&t);
	si=p*r*t/100;
	printf("The simple interest is:%f",si);
}