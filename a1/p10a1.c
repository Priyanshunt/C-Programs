#include<stdio.h>
#include<math.h>
void main()
{
	int p,r,t;
	float x,ci;
	printf("Enter amount of principal:");
	scanf("%d",&p);
	printf("Enter rate of interest:");
	scanf("%d",&r);
	printf("Enter time in years:");
	scanf("%d",&t);
	ci=p*pow(1+0.01*r,t);
	printf("The compound interest is:%f",ci);
}