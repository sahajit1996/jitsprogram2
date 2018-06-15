#include<stdio.h>
#include<conio.h>
int main()
{
	int n,L,R,M,i,x,c=0,a[n];
	printf("\nEnter the lenth of array\n");
	scanf("%d",&n);
	printf("\nEnter the elements of the array in ascending order\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	L=0;
	R=n-1;
	printf("\nEnter the value to be searched\n");
	scanf("%d",&x);
	while(L<=R)
	{
		M=(L+R)/2;
		if(x==a[M])
		{
			c=1;
			break;
		}
		else if(x<a[M])
			R=M-1;
		else
		{
			L=M+1;
		}
		
		
	}
	if(c==0)
	printf("\nThe value is not in array\n");
	else
	printf("\nThe adress of the value is %d",M+1);
	return 0;
}
