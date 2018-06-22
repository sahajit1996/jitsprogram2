#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int item;
	struct node *link;
};
struct node *head;
void push(int value)
{
	struct node *p;
	
	p=(struct node*)malloc(sizeof(struct node));
	
	if(p==NULL)
	{
		printf("\nstack is empty\n");
		
	}
	else 
	{
		
	
	p->item=value;
	p->link=NULL;
	p->link=head;
	head=p;
	
		
		
	}
}
	void pop()
	{
		struct node *p;
		p=head;
		if(p==NULL)
		printf("\nstack is empty\n");
		else
		{
			printf("\npop item is %5d\n",p->item);
			p=p->link;
			head=p;
			
		}
		
	}
	void display()
	{
		struct node *p;
		p=head;
		while(p!=NULL)
		{
			printf("%5d",p->item);
			p=p->link;
		}
	}

main()
{
	int i,value;
	do
	{
		printf("\nenter the choice\npress 1 for push\npress 2 for pop\npress 3 for display\n ");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				printf("\nenter the value\n");
				scanf("%d",&value);
				push(value);
				break;
				case 2:
					 pop();
					 break;
					 case 3:
					 	display();
					 	break;
					 	case 0:
					 		exit(0);
					 		break;
		}
	}while(1);
}
