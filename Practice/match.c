#include <stdio.h>
#include <stdlib.h>
void main()
{
    int m=21,n,d;
	for(;;)
	{
		printf("Pick 1,2,3 or 4 matchsticks:");
		scanf("%d",&n);
		if(n>4&&n<1)
		{
			printf("Wrong input.\n");
			continue;
		}
		m-=n;
		printf("Mathsticks left:%d\n",m);
		if(m>5)
		{
			repeat:
			d=rand()%5;
			if(d==0)
			goto repeat;
			else
			{
				m-=d;
				printf("Mathsticks picked by computer:%d\n",d);
				printf("Mathsticks left:%d\n",m);
			}
		}
		else
		{
			printf("Mathsticks picked by computer:%d\n",m-1);
			printf("Mathsticks left:1\n");
			printf("You are asked to pick the last matchstick so you have lost the game.");
			break;
		}
	}
}
