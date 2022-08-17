#include<stdio.h>
void main()
{
	int t,n,i,l,h;
	printf("Enter amount of numbers to be entered:");
	scanf("%d",&t);
	printf("Enter a number 1:");
	scanf("%d",&n);
	l=n;
	h=n;
	for(i=2;i<=t;i++)
	{
		printf("Enter a number %d:",i);
		scanf("%d",&n);
		if(l>n)
			l=n;
		if(h<n)
			h=n;
	}
	printf("Range of set of entered %d numbers lies between:[%d,%d]",t,l,h);
}