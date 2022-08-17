#include<stdio.h>
void main()
{
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	if((65<=c)&&(90>=c))
		printf("Capital letter");
	else if((97<=c)&&(122>=c))
		printf("Small letter");
	else if((48<=c)&&(57>=c))
		printf("Number");
	else
		printf("Special character");
}