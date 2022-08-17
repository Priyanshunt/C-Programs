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
		if(i==1)
			for(j=1,c-=1;j<=2*n-1;j++)
			if(j<=n)
			printf("%c",++c);
			else
			printf("%c",--c);
		else
		    for(j=1;j<=2*n-1;j++)
			if(j<=n-i+1)
			printf("%c",c++);
			else if(j>=n+i-1)
			printf("%c",--c);
			else
			printf(" ");
		printf("\n");
	}
}
