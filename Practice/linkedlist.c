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
	int i,n,c,l;//i for loop, n for no. of list elements, l for location here first element is '1' location
	struct node *root=NULL,*temp,*p;//root will pointing to origin of linked list, other two are temporary
	//all process will start from root
	printf("Enter number of nodes:");//making new linked list
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter node data:");
	    scanf("%d",&temp->data);
		temp->link=NULL;
		if(root==NULL)
			root=temp;//giving adress of first memory created to root
		else
		{
			p=root;//storing address of first memory
			while(p->link!=NULL)//traversing in list till link field to node link field is not NULL
				p=p->link;//storing address of node link field which is the address of next node
			p->link=temp;//giving address of newly created memory to link field replacing NULL
		}
	}
	do//performing operations on linked list created initially
	{
		printf("Enter 1 for insertion\n      2 for delection\n      3 for display\n      0 for exit:");
	    scanf("%d",&c);
		if(c==1)
		{
			printf("Enter location and enter if 0 you want to add element as first element:");
			scanf("%d",&l);
			if(l>n)
				printf("Linked list is full with no. of list elements:%d\n",n);
			else if(l==0)//inserting before first element
			{
				p=root;
				temp=(struct node *)malloc(sizeof(struct node));
			 	printf("Enter node data:");
			 	scanf("%d",&temp->data);
				temp->link=p;
				root=temp;
				n++;
			}
			else//inserting after any other element of list
			{
				p=root;
				temp=(struct node *)malloc(sizeof(struct node));
				printf("Enter node data:");
				scanf("%d",&temp->data);
				for(i=1;i<l;i++)//traversing in list
					p=p->link;
				temp->link=p->link;
				p->link=temp;
				n++;
			}
		}
		if(c==2)
		{
			printf("Enter location:");
			scanf("%d",&l);
			if(l>n)
				printf("Linked list is full with no. of list elements:%d\n",n);
			else if(l==1)//deleting first element
			{
				temp=root;
				root=temp->link;
				free(temp);
				n--;
			}
			else//deleting any other element
			{
				p=root;
				for(i=1;i<l-1;i++)
					p=p->link;
				temp=p->link;
				p->link=temp->link;
				free(temp);
				n--;
			}
		}
		if(c==3)
		{
			p=root;
			if(p==NULL)
				printf("No nodes in the list\n");
			else
			{
				while(p!=NULL)
				{
					printf("%d ",p->data);
					p=p->link;
				}
				printf("\n");
			}
		}
	}
	while(c!=0);
}