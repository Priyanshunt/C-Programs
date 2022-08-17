#include<stdio.h>
void main()
{
	int n,t,i;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	printf("Reverse array:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}