#include<stdio.h>
void main()
{
	int n,i,n1,c=0,j,k;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-c;i++)
	{
		for(j=i+1;j<n-c;j++)
		{
			if(a[i]==a[j])
			{
				delete:
				for(k=j;k<n-c;k++)
					a[k]=a[k+1];
				c++;
			}
			if(a[i]==a[j])
				goto delete;
		}
	}
	printf("New array:");
	for(i=0;i<n-c;i++)
		printf("%d ",a[i]);
}