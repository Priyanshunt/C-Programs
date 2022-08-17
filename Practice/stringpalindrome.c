#include <stdio.h>
#include <string.h>
void main()
{
    int n,c=0,i;
    char s[100];
    printf("Enter a word:");
    gets(s);
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-1-i])
		{
			c++;
			break;
		}
	}
	if(c==0)
		printf("Word is palindrome");
	else
		printf("Word not is palindrome");
}
	
	