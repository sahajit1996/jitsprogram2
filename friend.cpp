#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		int real,img;
		public:
			void get_data()
			{
				cout<<"\nEnter the value of real and imaginary part\n";
				cin>>real>>img;
			}
		
			void show_data()
			{
				cout<<"\nsum is\n";
				cout<<real<<"\t i "<<img;
			}
			friend complex operator +(complex,complex);
};
	complex operator +(complex c1,complex c2)
			{
				complex c;
				c.real=c1.real+c2.real;
				c.img=c1.img+c2.img;
				return(c);
			}
main()
{
	complex c1,c2,c3;
	c1.get_data();
	c2.get_data();
	c3=c1+c2;//operator +(c1,c2)
	c3.show_data();
	getch();
	
}