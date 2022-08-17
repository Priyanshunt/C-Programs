#include<stdio.h>
#include<string.h>
void main()
{
	int n,i;
	char s[100];
	printf("Enter string:");
	gets(s);
	n=strlen(s);
	char s1[n],s2[n];
	for(i=0;i<n;i++)
		s1[i]=s[i];//String is basically a character array.
	s1[n]='\0';//To use char array as string you should have null character at end of string.
	strcpy(s2,s);//String function adds null character after completion so we don't see that problem here.
	printf("Copied string\nUsing string function:%s\nWithout using string function:%s",s2,s1);
}