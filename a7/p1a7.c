#include<stdio.h>
void main()
{
	int i,roll[5],marks[5];
	char name[100][5];
	for(i=0;i<5;i++)
	{
		printf("Enter details of %d student:\n",i+1);
		printf("Enter roll no.:");
		scanf("%d",&roll[i]);
		printf("Enter name:");
		gets(name[i]);
		gets(name[i]);
		printf("Enter marks:");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Details of %d student:\n",i+1);
		printf("Roll no.:%d\nName:",roll[i]);
		puts(name[i]);
		printf("Marks:%d\n",marks[i]);
	}
}