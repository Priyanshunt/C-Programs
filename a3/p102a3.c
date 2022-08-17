#include<stdio.h>
void main()
{
	int n,i,j=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			j=1;
			break;
		}
	}
	if(j==0)
		printf("Prime number");
	else
	    printf("Composite number");
		
}
