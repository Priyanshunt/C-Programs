#include<stdio.h>
void main()
{
	int n,s=0,i,x,j,d,m,max=0,c=0;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("Mean:%f\n",(float)s/n);
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
	if(n%2==0)
		printf("Median:%f\n",(float)(a[n/2]+a[n/2-1])/2);
	else
		printf("Median:%f\n",a[(n-1)/2]);
	for(i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
			c++;
		if(a[i]!=a[i+1]||i==(n-2))
		{
			if(max<c)
			{
				m=a[i];
				max=c;
			}
			c=0;
		}
	}
	printf("Mode:%d\n",m);
}