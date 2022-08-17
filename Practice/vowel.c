#include <stdio.h>
#include <string.h>
void main()
{
    int n,i;
	char s[100];
    printf("Enter a sentence:");
    gets(s);
	n=strlen(s);
	printf("New sentence with removed vowels:");
	for(i=0;i<n;i++)
	{
		if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
		    printf("%c",s[i]);
	}
}