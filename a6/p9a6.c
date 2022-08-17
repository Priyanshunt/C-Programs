#include<stdio.h>
#include<string.h>
void main()
{
	int i=1,c=1,j,n;
	char s[100];
	printf("Enter string:");
	gets(s);
	n=strlen(s);
	while(i!=-1)
	{
		for(j=0;j<=i;j++)
			printf("%c",s[j]);
		if(i<n-1&&c!=0)//helps in printing increasing series.
			i+=2;
		else//helps to printing decreasing series and c will avoid the execution of if condition again.
		{
			i-=2;
			c=0;
		}
		printf("\n");
	}
}