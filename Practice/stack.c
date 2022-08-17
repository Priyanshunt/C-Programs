#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
	int data;//used to store data
	struct node *link;//used to store address of next node
};
void main()
{
	int c;
	struct node *top=NULL,*temp;//declared pointer: top node and temporary node
	do
	{
		printf("Enter 1 for push\n      2 for pop\n      3 for display\n      0 for exit:");
	    scanf("%d",&c);//getting user choice
		if(c==1)
		{
			temp=(struct node *)malloc(sizeof(struct node));//giving address of new dynamic memory to temp pointer
			printf("Enter element to push:");
			scanf("%d",&temp->data);//giving data in temp node data field
			temp->link=top;//address of temp is previous top node address, initially NULL
			top=temp;//making this newly created memory as top
		}
		if(c==2)
		{
			temp=top->link;//top link address is stored in temp pointer
			printf("Element poped:%d\n",top->data);//displaying data poped
			free(top);//freeing top memory node
			top=temp;//top link has address of previous stack elemt now made point by top
		}
		if(c==3)
		{
			temp=top;//starting displaying from top, temp pointing to top
			while(temp!=NULL)
			{
				printf("%d ",temp->data);//displaying temp data
				temp=temp->link;//temp now storing previous node address
			}
			printf("\n");
		}
	}
	while(c!=0);	
}	