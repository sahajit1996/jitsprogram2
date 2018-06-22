#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int item;
	struct node *left;
	struct node *right;
};
struct node *head=(struct node*)malloc(sizeof(struct node));
void createnode(struct node*p)
{
	
	char c;
	printf("\nEnter the value of the node\n");
	scanf("%d",&p->item);
	p->left=NULL;
	p->right=NULL;
		
	printf("\ndo you want to create onother node\npress y for left node\npress x for right node\n");
	c=getche();
	if(c=='y'||c=='Y')
	{
	
	p->left=(struct node*)malloc(sizeof(struct node));
	createnode(p->left);
		
	}
else if(c=='x'||c=='X')
	{
	
	p->right=(struct node*)malloc(sizeof(struct node));
	createnode(p->right);
		
	}
}
	
	void preorder(struct node *p)
	{
		if(p!=NULL)
		{
			printf("%5d",p->item);
			preorder(p->left);
			preorder(p->right);
		}
	}
		void inorder(struct node *p)
	{
		if(p!=NULL)
		{
			
			inorder(p->left);
			printf("%5d",p->item);
			inorder(p->right);
		}
	}
	
		void postorder(struct node *p)
	{
		if(p!=NULL)
		{
			
			postorder(p->left);
			postorder(p->right);
			printf("%5d",p->item);
		}
	}
	int count_node(struct node *p)
	{
		if(p)
		{
			return(1+count_node(p->left)+count_node(p->right));
		}
	}
	int count_leafs(struct node *p)
	{
		if(p)
		{
			if(!p->left && !p->right)
			return 1;
			return (count_leafs(p->left) + count_leafs(p->right));
		}
	}

main()
{
	int i,sum=0,leaf=0;
	do
	{
		printf("\nEnter the choice\press 1 for create the node\n press 2 for preorder\npress 3 for inorder\n press 4 for post order\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				createnode(head);
				break;
			case 2:
				preorder(head);
					break;
			case 3:
						inorder(head);
						break;
			case 4:
					postorder(head);
					break;
			case 5:
			sum=count_node(head);
			printf("\nnode number is %5d\n",sum);
			break;	
			case 6:
			leaf=count_leafs(head);
			printf("\n leaf are %5d",leaf);
			break;	
			case 0:
								exit(0);
								break;
								
		}
	}while(1);
	getch();
}
