#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node

{
	int item;
	struct node *link;
};
struct node *head=(struct node*)malloc(sizeof(struct node));
void create_node(struct node *p)
{
	
	char c;
	
	
	printf("\nEnter the value of the item\n");
	scanf("%d",&p->item);
	p->link=NULL;
	printf("\ndo you want to create onother node if yes press  y/n\n");
	c=getche();
	if(c=='y'|| c=='Y')
	{
	
	p->link=( struct node*)malloc(sizeof(struct node));
	create_node(p->link);
}
}
void display( struct node *p)
{
	while(p!=NULL)
	{
		printf("\%5d",p->item);
		p=p->link;
	}
}
void insert_at_first()
{
	struct node *q;
	q=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value of item\n");
	scanf("%d",&q->item);
	q->link=head;
	head=q;
}
void insert_at_last()
{
	struct node *q,*p;
	p=head;
	q=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value of item\n");
	scanf("%d",&q->item);
	while(p->link!=NULL)
	{
		p=p->link;
	}
	p->link=q;
	q->link=NULL;
	
}
void insert_at_pos()
{
	int pos,i;
	struct node *p,*q;
	p=head;
	printf("\nEnter the position\n");
	scanf("%d",&pos);
	q=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value of item\n");
	scanf("%d",&q->item);
	for(i=0;i<pos-1;i++)
	{
		p=p->link;
		
	}
	q->link=p->link;
	p->link=q;
}
void delete_at_first()
{
	struct node *p;
	p=head;
	head=p->link;
}
void delete_at_last()
{
	struct node *p;
	p=head;
	while(p->link->link!=NULL)
	{
		p=p->link;
	}
	p->link=NULL;
}
void delete_at_pos()
{
	int pos,i;
	struct node *p;
	p=head;
	printf("\nEnter the value of the position\n");
	scanf("%d",&pos);
	for(i=0;i<pos-2;i++)
	{
		p=p->link;
		
	}
	p->link=p->link->link;
}
main()
{
	int n;
	
	do
	{
	
	
	printf("\nEnter the value of n\n press 1 for craete node\n press 2 for display the node\npress 3 for insert at first\npress 4 for insert at last\npress 5 for insert at pos\npress 6 for delete first\npress 7 for delete from last\npress 8 fro delete at position\n");

	scanf("%d",&n);
	switch(n)
	{
		
		case 1:
			create_node(head);
			break;
		case 2:
			display(head);
			break;
			case 3:
				insert_at_first();
				break;
				
				case 4:
					insert_at_last();
					break;
					case 5:
						insert_at_pos();
						break;
				case 6:
					delete_at_first();
					break;
					case 7:
						delete_at_last();
						break;
						case 8:
							delete_at_pos();
							break;
			case 0:
				exit(0);
				break;
		
	}
}while(1);
}
