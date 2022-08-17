#include<stdio.h>
void main()
{
	int n,d,i,j,x;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		x=i;
		for(j=i+1;j<n;j++)
		{
			if(a[x]>a[j])
				x=j;
		}
		d=a[x];
		a[x]=a[i];
		a[i]=d;
	}
	printf("Sorted array:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}