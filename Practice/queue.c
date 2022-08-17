#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
	int data;
	struct node *link;
};
void main()
{
	int c;
	struct node *first=NULL,*last=NULL,*temp;//first pointer mainly for dequeue and display, last mailnly for queue
	do
	{
		printf("Enter 1 for enqueue\n      2 for dequeue\n      3 for display\n      0 for exit:");
		scanf("%d",&c);
		if(c==1)
		{
			temp=(struct node *)malloc(sizeof(struct node));
			printf("Enter element to enqueue:");
			scanf("%d",&temp->data);
			temp->link=NULL;//initially assigning temp link pointer as NULL
			if(first==NULL)
			{
				first=temp;//first pointer pointing to temp
				last=temp;//same in this case
			}
			else
			{
				last->link=temp;//linking previous node to newly made memory
				last=temp;//giving memory address to last pointer
			}
		}
		if(c==2)
		{
			temp=first->link;//like in stack
			printf("Element dequeued:%d\n",first->data);
			free(first);
			first=temp;
		}
		if(c==3)
		{
			temp=first;//like in stack
			while(temp!=NULL)
			{
				printf("%d ",temp->data);
				temp=temp->link;
			}
			printf("\n");
		}
	}
	while(c!=0);
}