#include<stdio.h>
void main()
{
	float basic,da,ta,gross;
	printf("Enter basic salary:");
	scanf("%f",&basic);
	da=basic*0.10;
	ta=basic*0.12;
	gross=basic+da+ta;
	printf("The gross salary is:%f",gross);
}