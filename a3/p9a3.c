#include<stdio.h>
void main()
{
	int n,i,s,l,h;
	float a;
	printf("Enter a number 1:");
	scanf("%d",&n);
	l=n;
	h=n;
	s=n;
	for(i=2;i<=10;i++)
	{
		printf("Enter a number %d:",i);
		scanf("%d",&n);
		s+=n;
		if(l>n)
			l=n;
		if(h<n)
			h=n;
	}
	a=(float)s/10;
	printf("Average of 10 numbers:%f\n",a);
	printf("Minimum of 10 numbers:%d\n",l);
	printf("Maximum of 10 numbers:%d",h);
}