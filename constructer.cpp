#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		int a,b;
		public:
			complex(int x,int y)
			{
				int sum;
				a=x;
				b=y;
				sum=a+b;
				cout<<"\nsum is \n"<<sum;//constructer overloding
				
			}
			complex(int x)
			{
				a=x;
				cout<<"\nresult is\n"<<++a;
			}
			complex()
			{
				cout<<"\nThis is defoult constructer\n";
			}
			complex(complex &c)//copy constructer
			{
				int sum=c.a+c.b;
				cout<<"\nthe sum is\n"<<sum;
			}
			complex(complex &c,int x)
			{
				int sum;
				sum=c.a+c.b+x;
				cout<<"\nThe sum is\n"<<sum;
			}
};
main()
{
	complex c1(5,6),c2(3),c3;
	complex c4(c1),c5(c1,10);
	getch();
}
