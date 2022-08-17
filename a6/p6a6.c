#include<stdio.h>
int n,i;
int * arr(int b[n])
{
	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	return b;
}
void main()
{
	printf("Enter array size:");
    scanf("%d",&n);
	int a[n],*p;
    p=arr(a);
    printf("Array elements:");
    for(i=0;i<n;i++)
		printf("%d ",*(p+i));
}