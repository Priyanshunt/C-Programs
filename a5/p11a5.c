#include<stdio.h>
void main()
{
	int r1,c1,r2,c2,i,j,m,k;
	printf("Enter number of rows and columns for first matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter number of rows and columns for second matrix:");
	scanf("%d%d",&r2,&c2);
	int a[r1][c1],b[r2][c2];
	printf("Enter elements for first martix:\n");
	for(i=0;i<r1;i++)
	{
		printf("Row no.%d:",i+1);
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter elements for second martix:\n");
	for(i=0;i<r2;i++)
	{
		printf("Row no.%d:",i+1);
		for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);
	}
	if(r1==r2&&c1==c2)
	{
		printf("New matrix after addition:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				printf("%d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	else
		printf("Addition is not possible\n");
	
	if(c1==r2)
	{
		printf("New matrix after multiplication:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				m=0;
				for(k=0;k<r2&&k<c1;k++)
					m+=a[i][k]*b[k][j];
				printf("%d ",m);
			}
			printf("\n");
		}	
	}
	else
		printf("Multiplication is not possible\n");
	printf("Transpose of first matrix:\n");
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r1;j++)
			printf("%d ",a[j][i]);
		printf("\n");
	}
	printf("Transpose of second matrix:\n");
	for(i=0;i<c2;i++)
	{
		for(j=0;j<r2;j++)
			printf("%d ",b[j][i]);
		printf("\n");
	}
}