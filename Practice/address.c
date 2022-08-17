#include <stdio.h>
#include <string.h>
void main()
{
    int i;
    char s[5];
    printf("Enter word of length 5:");
	for(i=0;i<5;i++)
		scanf("%c",&s[i]);
	printf("Addresses of each character of word:");
	for(i=0;i<5;i++)
		printf("\n%d",&s[i]);
}
	
    
	
	
