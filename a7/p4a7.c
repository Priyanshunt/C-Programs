#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
struct data
{
	long roll;
	char name[100];
	struct date d;
};
void main()
{
	int n,i;
	printf("Enter array size:");
	scanf("%d",&n);
	struct data dt[n];
	for(i=0;i<n;i++)
	{
		printf("Enter details of %d student:\n",i+1);
		printf("Enter roll no.:");
		scanf("%ld",&dt[i].roll);
		printf("Enter name:");
		gets(dt[i].name);
		gets(dt[i].name);
		printf("Enter date of birth in DD MM YYYY format:");
		scanf("%d%d%d",&dt[i].d.day,&dt[i].d.month,&dt[i].d.year);
	}
	for(i=0;i<n;i++)
	{
		printf("Details of %d student:\n",i+1);
		printf("Roll no.:%ld\nName:",dt[i].roll);
		puts(dt[i].name);
		printf("Date of birth:%d-%d-%d\n",dt[i].d.day,dt[i].d.month,dt[i].d.year);
	}
}