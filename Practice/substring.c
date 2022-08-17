#include <stdio.h>
#include <string.h>
void main()
{
    int i,a,b,j=0;
    char s[100],c,sub[100];
    printf("Enter a sentence:");
    gets(s);
	printf("Enter position of first letter:");
	scanf("%d",&a);
	printf("Enter position of last letter:");
	scanf("%d",&b);
    for(i=a-1;i<b;i++)
	{	
	    sub[j]=s[i];
		j++;
	}
	printf("Extracted letters by defined positions:");
	for(i=0;i<strlen(sub);i++)
	printf("%c",sub[i]);
}