#include<stdio.h>
#include<math.h>
void main()
{
	int c,n,i=0,d,s=0,s1=0;
	printf("Enter 1 for binary to decimal\n");
	printf("Enter 2 for decimal to binary\n");
	printf("Enter your choice:");
	scanf("%d",&c);
	if(c==1)
	{
		printf("Enter binary number:");
		scanf("%d",&n);
		while(n>0)
		{
			d=n%10;
			s=s+d*pow(2,i);
			n=n/10;
			i++;
		}
		printf("The decimal number is:%d",s);
	}
	if(c==2)
	{
		printf("Enter decimal number:");
		scanf("%d",&n);
		while(n>0)
		{
			d=n%2;
			s=s*10+d;
			n=n/2;
			i++;
		}
		while(i>0)
		{
			d=s%10;
			s1=s1*10+d;
			s=s/10;
		}
		printf("The binary number is:%d",s1);
	}
}