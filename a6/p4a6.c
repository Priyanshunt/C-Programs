#include<stdio.h>
void main()
{
	int n,i[3],*ip;
	float f[3],*fp;
	char c[3],*cp;
	ip=i;
	fp=f;
	cp=c;//All pointers are pointing of zeroth index array element
	for(n=0;n<3;n++)
	{
		printf("Enter %u integer:",n+1);
		scanf("%d",&i[n]);
		printf("Enter %u float:",n+1);
		scanf("%f",&f[n]);
		printf("Enter %u character:",n+1);
		scanf(" %c",&c[n]);
	}
	printf("Verifying addresses of adjacent elements in an integer array:%u=%u,%u=%u,%u=%u\n",ip,&i[0],ip+1,&i[1],ip+2,&i[2]);
	printf("Verifying addresses of adjacent elements in an float array:%u=%u,%u=%u,%u=%u\n",fp,&f[0],fp+1,&f[1],fp+2,&f[2]);
	printf("Verifying addresses of adjacent elements in an character array:%u=%u,%u=%u,%u=%u",cp,&c[0],cp+1,&c[1],cp+2,&c[2]);
}