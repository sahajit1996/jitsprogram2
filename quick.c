#include<stdio.h>
#include<conio.h>
#define max 50
void quicksort(int arr[] ,int low,int high);
int partition(int arr[],int low,int high);
main()
{
	int quick[max],a=0,r,j,k,i;
	printf("\nEnter the limit of array\n");
	scanf("%d",&r);
	printf("\nInserrt the element in array\n");
	for(i=0;i<r;i++)
	{
		scanf("%d",&quick[i]);
		
	}
	quicksort(quick,0,r-1);
	printf("\nThe sorted elment is\n");
	for(i=0;i<r;i++)
	{
		printf("%5d",quick[i]);
	}
	getch();
}
void quicksort(int arr[], int low, int high)
{
	int q;
	if(low<high)
	{
		q=partition(arr, low, high);
		quicksort(arr,low,q-1);
		quicksort(arr,q+1,high);
		
	}
}
int partition(int arr[],int low,int high)
{
	int x,i,j,temp;
	x=arr[high];
	i=low-1;
	for(j=low;j<=high-1;j++)
	{
		if(arr[j]<=x)
		{
			i=i+1;
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			
		}
	}
	temp=arr[high];
	arr[high]=arr[i+1];
	arr[i+1]=temp;
	return(i+1);
}
