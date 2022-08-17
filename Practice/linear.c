#include<stdio.h>
void main()
{
	int n,n1,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter number to search:");
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		if(a[i]==n1)
		{
			printf("The number is present in array at:%d",i);
			break;
		}
	}
	if(i==n)
		printf("The number is not present in array");
}