#include<stdio.h>
void main()
{
	int n,i,j;
	char c;
	printf("Enter the number of lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c='A';
		for(j=1;j<=i;j++)
		{	
			printf("%d%c ",j,c);
			c+=1;
		}
		printf("\n");
	}
}