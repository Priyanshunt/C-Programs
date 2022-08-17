#include<stdio.h>
#include<math.h>
void main()
{
	int n,d,s=0,s1=0,i=0;
	printf("Enter decimal number:");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%2;
		s=s*10+d;
		n=n/2;
		i++
	}
	while(i>0)
	{
		d=s%10;
		s1=s1*10+d;
		s=s/10;
		i--;
	}
	printf("The binary number is:%d",s1);
}