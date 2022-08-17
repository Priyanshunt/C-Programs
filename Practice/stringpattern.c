#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,c=1,j,n;
	char s[100];
	printf("Enter a word:");
	gets(s);
	n=strlen(s);
	while(i!=-1)
	{
		for(j=0;j<=i;j++)
			printf("%c",s[j]);
		if(i<n-1&&c!=0)
			i++;
		else
		{
			i--;
			c=0;
		}
		printf("\n");
	}
}