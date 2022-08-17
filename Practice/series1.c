#include<stdio.h>
void main()
{
	int n,i,j,c=1;
	printf("Enter the number of lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=n-i+1;j<=n+i-1;j+=2)
			printf("%d ",c++);
		printf("\n");
	}
}