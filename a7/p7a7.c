#include<stdio.h>
struct data
{
	int roll;
	char name[100];
	int marks;
};
void main()
{
	int i;
	struct data dt[2],t;
	for(i=0;i<2;i++)
	{
		printf("Enter details of %d student:\n",i+1);
		printf("Enter roll no.:");
		scanf("%d",&dt[i].roll);
		printf("Enter name:");
		gets(dt[i].name);
		gets(dt[i].name);
		printf("Enter marks:");
		scanf("%d",&dt[i].marks);
	}
	printf("Before swapping");
	for(i=0;i<2;i++)
	{
		printf("Details of %d student:\n",i+1);
		printf("Roll no.:%d\nName:",dt[i].roll);
		puts(dt[i].name);
		printf("Marks%d\n",dt[i].marks);
	}
	t=dt[0];
	dt[0]=dt[1];
	dt[1]=t;
	printf("After swapping");
	for(i=0;i<2;i++)
	{
		printf("Details of %d student:\n",i+1);
		printf("Roll no.:%d\nName:",dt[i].roll);
		puts(dt[i].name);
		printf("Marks%d\n",dt[i].marks);
	}
}