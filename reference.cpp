#include<iostream>
#include<conio.h>
using namespace std;
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
void swap1(int &p,int &q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}
main()
{
	int a,b;
	cout<<"\nEnter the value of a and b\n";
	cin>>a>>b;
	swap(a,b);
	cout<<"\nthe value of a and b"<<a<<"\t"<<b;
	swap(&a,&b);
	cout<<"\nthe value of a and b"<<a<<"\t"<<b;
	swap1(a,b);
	cout<<"\nthe value of a and b"<<a<<"\t"<<b;
	getch();
	
}
