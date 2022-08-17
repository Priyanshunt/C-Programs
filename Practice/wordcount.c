#include <stdio.h>
#include <string.h>
void main()
{   
    int n,i,j,w=0;
    char s[100];
    char c;
    printf("Enter a sentence:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
	{
	if(s[i]==' '||s[i]=='\n')
	w++;
	}
	printf("%d",w+1);
    }