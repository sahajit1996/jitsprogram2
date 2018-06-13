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
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\nsorted array is %5d",a[i]);
	}
	getch();
}
