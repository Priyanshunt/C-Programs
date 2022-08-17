#include<stdio.h>
void main()
{
    int a;
    printf("Enter an number:");
    scanf("%d",&a);
    printf("Pre-increment is used and value of number has been increased immidiately:%d\n",++a);
	printf("Post-increment is used and value of number has not changed:%d",a++);
	printf(" but has changed here:%d",a);
}