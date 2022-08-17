#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct data
{
	int roll;
	char name[100];
	int marks;
};
void main()
{
	int i;
	struct data dd,*da;//dd dot,da arrow
	da=(struct data *)malloc(sizeof(struct data));
	
	printf("Enter details of 1 student:\n");
	printf("Enter roll no.:");
	scanf("%d",&dd.roll);
	printf("Enter name:");
	gets(dd.name);
	gets(dd.name);
	printf("Enter marks:");
	scanf("%d",&dd.marks);
	
	printf("Enter details of 2 student:\n");
	printf("Enter roll no.:");
	scanf("%d",&da->roll);
	printf("Enter name:");
	gets(da->name);
	gets(da->name);
	printf("Enter marks:");
	scanf("%d",&da->marks);
	
	printf("Details of 1 student:\n");
	printf("Roll no.:%d\nName:",dd.roll);
	puts(dd.name);
	printf("Marks%d\n",dd.marks);

	printf("Details of 2 student:\n");
	printf("Roll no.:%d\nName:",da->roll);
	puts(da->name);
	printf("Marks%d\n",da->marks);

	free(da);
}