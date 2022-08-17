#include<stdio.h>
void main()
{
	int n,n1,i;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter number to be searched:");
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		if(a[i]==n1)
		{
			printf("The number is present in array at index:%d",i);
			break;
		}
	}
	if(i==n)
		printf("The number is not present in array");
}