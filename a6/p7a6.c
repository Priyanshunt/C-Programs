#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void main()
{
	int *ptr,n,i;
	printf("Enter array size:");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",(ptr+i));
	for(i=0;i<n;i++)
		printf("%d ",*(ptr+i));
	free(ptr);
}