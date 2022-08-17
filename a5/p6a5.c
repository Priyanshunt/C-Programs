#include<stdio.h>
void main()
{
	int n,s=0,i;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("Sum of array elements:%d and average:%f",s,(float)s/n);
}