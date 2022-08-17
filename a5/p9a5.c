#include<stdio.h>
void main()
{
	int n,t,i,m,j,y=0;
	printf("Enter first array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter first array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter second array size:");
	scanf("%d",&m);
	int b[m],c[n+m],d[n+m],x=m;
	printf("Enter second array elements:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		c[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				t=1;
				break;
			}
			else
				t=0;
		}
		if(t==0)
			c[x++]=a[i];
		else
			d[y++]=a[i];
	}
	printf("Union of two arrays:");
	for(i=0;i<x;i++)
		printf("%d ",c[i]);
	printf("\nIntersection of two arrays:");
	for(i=0;i<y;i++)
		printf("%d ",d[i]);
}