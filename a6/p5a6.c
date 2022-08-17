#include<stdio.h>
void swap(int *a,int *b)
{
	int t;
	t=*b;
	*b=*a;
	*a=t;
}
void main()
{
   int x,y;
   printf("Enter two numbers:");
   scanf("%d%d",&x,&y);
   printf("Before swapping: x=%d y=%d\n",x,y);
   swap(&x,&y);
   printf("After swapping: x=%d y=%d",x,y);
}