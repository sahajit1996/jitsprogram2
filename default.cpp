#include<iostream>
#include<conio.h>
using namespace std;
int set(int,int=0,int=0);

main()
{
	int a,b,c;
	cout<<"\nEntrt he valure of a,b,c\n";
	cin>>a>>b>>c;
	cout<<"\t"<<set(a,b);
	cout<<"\t"<<set(a);
	cout<<"\t"<<set(a,b,c);
	getch();
	
	
	
}
int set(int a,int b)
{
	return(a+b);
}
 int set(int a)
{
	return(++a);
}
int set(int a,int b,int c)
{
	return(a+b+c);
}
