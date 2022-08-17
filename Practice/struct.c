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
	int i;
	struct data dt[3];
	for(i=0;i<3;i++)
	{
		printf("Enter roll no.");
		scanf("%ld",&dt[i].roll);
		printf("Enter name:");
		gets(dt[i].name);
		gets(dt[i].name);
		printf("Enter date of birth in DD MM YYYY format:");
		scanf("%d%d%d",&dt[i].d.day,&dt[i].d.month,&dt[i].d.year);
	}
	for(i=0;i<3;i++)
	{
		printf("Roll no.:%ld\nName:",dt[i].roll);
		puts(dt[i].name);
		printf("Date of birth:%d-%d-%d\n",dt[i].d.day,dt[i].d.month,dt[i].d.year);
	}
}