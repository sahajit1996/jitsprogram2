#include<stdio.h>
#include<conio.h>
#define max 5
int front=0,rare=0,a[20];
void enqueu(int value)
{
	rare=(rare+1)%max;
	if(rare==front)
	{
	
	printf("\nqueue is full\n");
	if(rare==0)
	rare=max-1;
	else
	rare=rare-1;
}
	else
	
	a[rare]=value;
}
void dequeu()
{
	int value;
	if(front==rare)
	printf("\nqueue is empty\n");
	else
	front=(front+1)%max;
	value=a[front];
	printf("\nThe dequeu item is %5d",value);
}
void display()
{
	int i;
	for(i=front+1;i<=rare;i++)
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
