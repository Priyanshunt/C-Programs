#include<stdio.h>
void main()
{
	int n,d,i,j,l,h,n1,mid;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				d=a[j];
				a[j]=a[j+1];
				a[j+1]=d;
			}
		}
	}
	printf("Enter number to be searched:");
	scanf("%d",&n1);
	printf("Sorted array:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	l=0;
	h=n-1;
	while(l<=h)
    {
     	mid=(l+h)/2;
     	if(a[mid]<n1)
         	l=mid+1;
     	else if(a[mid]>n1)
         	h=mid-1;
     	else
		{
            printf("The number is present at index:%d",mid);
			break;
		}
	}
}