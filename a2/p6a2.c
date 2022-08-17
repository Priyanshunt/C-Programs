#include<stdio.h>
void main()
{
	int x;
	printf("Enter number:");
	scanf("%d",&x);
	printf("Used left shift operator:%d\n",x>>1);
	printf("Used left shift operator:%d",x<<1);
}