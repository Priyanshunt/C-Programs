#include<stdio.h>
void main()
{
	int n,d,s=0,i;
	for(i=1;i<=500;i++)
	{
		n=i;
		while(n>0)
		{
			d=n%10;
			s=s+d*d*d;
			n=n/10;
		}
		if(i==s)
			printf("Armstrong number:%d\n",i);
		s=0;
	}	
}