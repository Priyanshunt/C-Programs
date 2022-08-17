#include<stdio.h>
void main()
{
	int n,i,j,t;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		if(a[i]<a[i-1])
		{
			t=a[i];
			for(j=i;j>0;j--)
				a[j]=a[j-1];
			a[0]=t;
		}
	}
	printf("Sorted numbers:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}