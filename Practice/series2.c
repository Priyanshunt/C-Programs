#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter the number of lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{	
			if(i==j||(i+j==n+1)||(n/2+1==j)||(n/2+1==i)||j==1||i==1||j==n||i==n)
			printf("* ");
		    else
		    printf("  ");
		}
		printf("\n");
	}
}