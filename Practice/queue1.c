#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head=NULL,*ptr=NULL,*p;
	int i,x,m,n;
	printf("Enter number of elements to be queued to linked list:");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		ptr=(struct node *)malloc(sizeof(struct node));
		ptr->data=x;
		ptr->next=NULL;
		if(i==1)
		{
			head=ptr;
		}
		else
		{
			p->next=ptr;
		}
		p=ptr;
	}
	printf("Enter number of elements to be dequeued from linked list:");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		p=head->next;
		free(head);
		head=p;
	}
	ptr=head;	
	if(ptr==NULL)
	{
		printf("No elements in queue.");
	}
	else
	{
		printf("Remaining elements:");
		while(ptr!=NULL)
		{
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		}
	}
}
