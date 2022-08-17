#include<stdio.h>
#include<string.h>
struct data
{
	int roll;
	char name[100];
	int marks;
};
void main()
{
	int i;
	struct data dt[3];
	printf("Enter details of 1 student:\n");
	printf("Enter roll no.:");
	scanf("%d",&dt[0].roll);
	printf("Enter name:");
	gets(dt[0].name);
	gets(dt[0].name);
	printf("Enter marks:");
	scanf("%d",&dt[0].marks);
	dt[1]=dt[0];//Copied at once
	dt[2].roll=dt[0].roll;
	strcpy(dt[2].name,dt[0].name);
	dt[2].marks=dt[0].marks;//Copied one by one
	for(i=0;i<3;i++)
	{
		printf("Details of %d student:\n",i+1);
		printf("Roll no.:%d\nName:",dt[i].roll);
		puts(dt[i].name);
		printf("Marks%d\n",dt[i].marks);
	}
}