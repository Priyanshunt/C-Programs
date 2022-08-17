#include<stdio.h>
struct data
{
	int roll;
	char name[100];
	int marks;
};
void detail(struct data d2)
{
	printf("Details of student:\n");
	printf("Roll no.:%d\nName:",d2.roll);
	puts(d2.name);
	printf("Marks%d\n",d2.marks);
}
void main()
{
	int i;
	struct data d1;
	
	printf("Enter details of student:\n");
	printf("Enter roll no.:");
	scanf("%d",&d1.roll);
	printf("Enter name:");
	gets(d1.name);
	gets(d1.name);
	printf("Enter marks:");
	scanf("%d",&d1.marks);
	
	detail(d1);
}