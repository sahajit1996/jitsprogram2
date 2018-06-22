#include<stdio.h>
#include<conio.h>
#define max 20
int front=0,rare=-1,a[20];
void enqueu(int value)
{
	if(rare==max-1)
	printf("\nqueue is full\n");
	else
	
	a[++rare]=value;
}
void dequeu()
{
	int value;
	if(front==rare)
	printf("\nqueue is empty\n");
	else
	value=a[front++];
	printf("\nThe dequeu item is %5d",value);
}
void display()
{
	int i;
	for(i=front;i<=rare;i++)
	{
		printf("%5d",a[i]);
	}
}
main()
{
	int value,i;
	do
	{
	
	printf("\nEnter your choice\npress 1 for enqueue\npress 2 for dequeue \npress 3 for display\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("\nEnter the value\n");
			scanf("%d",&value);
			enqueu(value);
			break;
			case 2:
				dequeu();
				break;
				case 3:
					display();
					break;
					case 0:
						exit(0);
						break;
						
	}
}while(1);
getch();
}
