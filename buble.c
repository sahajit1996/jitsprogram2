#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,j,k,n;
	printf("\nEnter te value of n\n");
	scanf("%d",&n);
	printf("Enter the array value\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
			k=a[j];
			a[j]=a[j+1];
			a[j+1]=k;
			
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\nsorted array is %5d",a[i]);
	}
	getch();
}
