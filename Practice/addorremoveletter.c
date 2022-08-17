#include <stdio.h>
#include <string.h>
void main()
{
    int n,i;
    char c,d;
	char s[100];
    printf("Enter a sentence:");
    gets(s);
	printf("Enter a letter to be removed from sentence:");
    scanf("%c",&c);
	printf("Enter a letter to be added from sentence:");
    scanf(" %c",&d);
	n=strlen(s);
	printf("New sentence with removed letter:");
	for(i=0;i<n;i++)
	{
		if(s[i]==c)
		{
			printf("%c",d);
		}
		else
		    printf("%c",s[i]);
	}
}