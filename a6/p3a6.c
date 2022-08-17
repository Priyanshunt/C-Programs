#include<stdio.h>
#include<limits.h>
void main()
{
	int i,*ip;
	float f,*fp;
	char c,*cp;
	printf("Enter a integer:");
	scanf("%d",&i);
	ip=&i;
	printf("Enter a floating point:");
	scanf("%f",&f);
	fp=&f;
	printf("Enter a character:");
	scanf(" %c",&c);
	cp=&c;
	printf("Size of integer pointer:%u\n",sizeof(*ip));
	printf("Size of floating pointer:%u\n",sizeof(*fp));
	printf("Size of character pointer:%u",sizeof(*cp));
}