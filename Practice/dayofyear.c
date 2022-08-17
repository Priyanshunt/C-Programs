#include<stdio.h>
void main()
{
	int y,n;
	printf("Enter a year:");
	scanf("%d",&y);
	if(y%4==0)
	n=y/4*5-2;
	else
	n=y/4*5+y%4-1;
	switch(n%7)
	{
		case 0:
		printf("The day is Monday");
		break;
		case 1:
		printf("The day is Tuesday");
		break;
		case 2:
		printf("The day is Wednesday");
		break;
		case 3:
		printf("The day is Thursday");
		break;
		case 4:
		printf("The day is Friday");
		break;
		case 5:
		printf("The day is Saturday");
		break;
		case 6:
		printf("The day is Sunday");
		break;
		default:
		printf("Invalid input");
	}
}
