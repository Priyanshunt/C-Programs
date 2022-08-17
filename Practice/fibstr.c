#include<stdio.h>
#include<string.h>
void main()
{
	int n,i;
	char a[100]="a",b[100]="b",c[100];
	printf("Enter number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%s ",a);
		strcpy(c,a);
		strcpy(a,b);
		strcat(b,c);
    }
}