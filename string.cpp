#include<iostream>
#include<conio.h>
using namespace std;
class string1
{
	private:
	char a[10];
	public:
		void setdata()
		{
			cout<<"\nenter the string\n";
			cin>>a;
			
		}
		
		int operator==(string1 c)
		{
			int i=0;
			while(c.a[i]!='\0')
			{
				if(a[i]==c.a[i])
				{
					
					a[i]++;
					c.a[i]++;
					return 1 ;
				}
				else 
				return 0;
			}
		}
		
 } ;
 main()
 {
 	string1 c1,c2,c3;
 	c1.setdata();
 	c2.setdata();
 	if(c1==c2)
 	{
 		cout<<"\nstring is equal\n";
	 }
	 else
	 {
	 	cout<<"\nstring is not equal\n";
	 }
	 getch();
 }
