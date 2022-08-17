#include<stdio.h>
void main()
{
	int n,t,i,n1,l;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter number to be inserted:");
	scanf("%d",&n1);
	printf("Enter array location index:");
	scanf("%d",&l);
	for(i=n;i>l;i--)
		a[i]=a[i-1];
	a[l]=n1;
	printf("New array:");
	for(i=0;i<=n;i++)
		printf("%d ",a[i]);
}