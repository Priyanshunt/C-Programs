#include<stdio.h>
void main()
{
	int n,s=0,i,max,min;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==1)
			max=min=a[i];
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	printf("Largest and smallest of array elements:%d & %d",max,min);
}