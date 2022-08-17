#include<stdio.h>
void main()
{
	int n,i,j,k,t;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter index after which array must rotate:");
	scanf("%d",&k);
	for(i=k;i>=0;i--)
	{
		t=a[0];
		for(j=0;j<n-1;j++)
			a[j]=a[j+1];
		a[j]=t;
	}
	printf("New array:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}