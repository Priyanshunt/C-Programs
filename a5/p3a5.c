#include<stdio.h>
void main()
{
	int n,i,n1,c=0,j;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter number to be deleted:");
	scanf("%d",&n1);
	for(i=0;i<n-c;i++)
	{
		if(a[i]==n1)
		{
			delete:
			for(j=i;j<n-c;j++)
				a[j]=a[j+1];
			c++;
		}
		if(a[i]==n1)
			goto delete;
	}
	printf("New array:");
	for(i=0;i<n-c;i++)
		printf("%d ",a[i]);
}