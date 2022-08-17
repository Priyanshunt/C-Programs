#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,s,c=0,n1,n;
	printf("Enter number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=0;
		for(j=1;j<=n-i;j++)
			printf(" ");
		n1=(int)(pow(11,c)+0.1);
		while(n1>0)
		{
			printf("%d ",n1%10);
			n1=n1/10;
		}
		c++;
		printf("\n");
	}
}