#include<stdio.h>
void main()
{
	int n,d,i,j,x;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter numbers:\n");
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
	printf("Sorted numbers:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}