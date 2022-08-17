#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	printf("Enter first string:");
	scanf("%[^\n]%*c",s1);//Helps to take multi character as it will only terminate when enter is pressed.
	//You can also use gets() function
	printf("Enter second string:");
	scanf(" %[^\n]%*c",s2);//One space is added will not take last enter pressed into consideration by %c.
	//You can write two gets() instead.
	if(strcmp(s1,s2)==0)//strcmp() gives 0 when two strings are equal
		printf("Strings are equal");
	else
		printf("Strings are not equal");
	strcat(s1,s2);//strcat() will attach s2 to s1
	printf("\nConcatenated string:%s",s1);
}