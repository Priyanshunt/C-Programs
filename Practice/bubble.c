#include<stdio.h>
void main()
{
	int n,d,i,j;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				d=a[j];
				a[j]=a[j+1];
				a[j+1]=d;
			}
		}
	}
	printf("Sorted numbers:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}