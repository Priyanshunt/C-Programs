#include<stdio.h>
void main()
{
	int n,i,m;
	printf("Enter first array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter first array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter second array size:");
	scanf("%d",&m);
	int b[m],c[n+m];
	printf("Enter second array elements:");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n+m;i++)
	{
		if(i<n)
			c[i]=a[i];
		else
			c[i]=b[i-n];
	}
	printf("Merged array:");
	for(i=0;i<n+m;i++)
		printf("%d ",c[i]);
}
