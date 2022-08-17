#include <stdio.h>
#include <string.h>
void main()
{
    int n,i,c=0;
	char s[100];
    printf("Enter a string:");
    gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		    c++;
	}
	printf("Number of vowels:%d",c);
	//Didn't think any explanation was required for this program.
}