#include<stdio.h>
int n;
void p(int r,char c)
{
	int i;
	for(i=1;i<=n/r;i++)
		printf("%c",c);
	n=n-(n/r)*r;
}
void main()
{
	printf("Enter number:");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n>=1000)
			p(1000,'M');
		if(n>=500)
			p(500,'D');
		if(n>=100)
			p(100,'C');
		if(n>=50)
			p(50,'L');
		if(n>=10)
			p(10,'X');
		if(n>=5)
			p(5,'V');
		if(n>=1)
			p(1,'I');
	}
}