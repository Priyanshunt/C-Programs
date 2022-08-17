#include<stdio.h>
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
	printf("Integer is:%d and its address is:%u\n",i,ip);
	printf("Floating point is:%f and its address is:%p\n",f,fp);
	printf("Character is:%c and its address is:%x",c,cp);
}